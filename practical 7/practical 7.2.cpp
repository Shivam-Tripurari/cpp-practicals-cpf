#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char p[100],lw[20],fw[20],conc[50],cat[150],key[100],ls[150],us[150],pal[50],rpal[50];
    short int ch,c=0,i,j,w=0,d=0,sp=0,a=0,k=0,palc=0;
    cout<<"******************************************************************"<<endl;
    cout<<"               DOCUMENT TEXT ANALYZER                             "<<endl;
    cout<<"******************************************************************"<<endl<<endl;

    //text input
    cout<<"Enter paragraph"<<endl;
    cin.getline(p,100);

            //text analysis
            cout<<"-------------------------------------------------------------"<<endl;
            cout<<"          text analysis                                      "<<endl;
            cout<<"-------------------------------------------------------------"<<endl<<endl;


            for(i=0;p[i]!='\0';i++)
            {
                c++;
                if(p[i]==' ')
                {
                    w++;
                }
                else if(p[i]>='0'&&p[i]<='9')
                {
                    d++;
                }
                else if((p[i]>='a' && p[i]<='z')||(p[i]>='A' && p[i]>='Z'))
                {
                    a++;
                }
                else
                {
                    sp++;
                }
            }
            cout<<"Special Character"<<setw(2)<<":"<<sp<<endl;
            cout<<"Character"<<":"<<setw(10)<<c<<endl;
            cout<<"Words"<<setw(14)<<":"<<w+1<<endl;
            cout<<"Alphabets"<<setw(10)<<":"<<a<<endl;
            cout<<"Digits"<<setw(13)<<":"<<d<<endl;

            //string extraction
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"  String Extraction                                         "<<endl;
            cout<<"------------------------------------------------------------"<<endl<<endl;

            for(i=0;p[i]!=' ';i++)
            {
                fw[i]=p[i];
            }
            cout<<"First Words"<<setw(9)<<":"<<fw<<endl;
            j=0;
            for(i=0;p[i]!='\0';i++)
            {
                if(p[i]==' ')
                {
                    j=0;
                }
                else
                {
                    lw[j]=p[i];
                    j++;
                }

            }
            lw[j]='\0';
            cout<<"Last words"<<setw(10)<<":"<<lw<<endl;


            cout<<"First Character"<<setw(5)<<":"<<p[0]<<endl;
            cout<<"Last Character"<<setw(6)<<":"<<lw[j-1]<<endl;


            //string concatenation
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"   String concatenation                                         "<<endl;
            cout<<"------------------------------------------------------------"<<endl<<endl;

            cout<<"Enter another sentence to concatenate:";
            cin.getline(conc,50);
            for(i=0;p[i]!='\0';i++)
            {
                cat[i]=p[i];

            }
            for(j=0;conc[j]!='\0';j++,i++)
            {
                cat[i]=conc[j];
            }
            cat[i]='\0';

            cout<<"Updated Paragraph:"<<endl<<cat<<endl;

            //pattern matching
            cout<<"----------------------------------------------------------"<<endl<<
                  "          Pattern Matching               "<<endl<<
                  "----------------------------------------------------------"<<endl;

                  cout<<"Enter search word:";
                  cin>>key;
                  bool found=false;
                  for(i=0;cat[i]!='\0';i++)
                  {
                      if(strstr(cat,key)!=NULL)
                      {
                          found=true;
                          break;
                      }
                  }
                  if(found)
                  {
                      cout<<"Keyword Found"<<endl;
                      cout<<"First Occurence Position:"<<strstr(cat,key)-cat+1<<endl;
                  }
                  else
                  {
                      cout<<"Keyword Not Found"<<endl;
                  }

            //String transformation
            for(i=0;cat[i]!='\0';i++)
            {
                if(cat[i]>'a' && cat[i]<'z')
                {
                    ls[i]=char(cat[i]-32);
                }
                else if(cat[i]>'A' && cat[i]<'Z')
                {
                    us[i]=char(cat[i]+32);
                }
            }
            cout<<"Uppercase"<<endl<<endl<<ls<<endl<<"---------------------------------"<<endl;
            cout<<"Lowercase"<<endl<<endl<<us<<endl<<"---------------------------------"<<endl;

            cout<<"Reverse"<<endl;
            for(i=c+k;i>0;i++)
            {
                cout<<cat[i];
            }
            cout<<"-----------------------------------"<<endl;

            cout<<"Palindrome check"<<endl;
            cout<<"Enter Word"<<endl;
            cin>>pal;
            for(i=0;pal[i]!='\0';i++)
            {
                palc++;
            }
            for(i=palc-1,j=0;i>0,j<palc;i++,j++)
            {
                rpal[j]==pal[i];
            }

            for(i=0;i<palc;i++)
            {
                if(strcmp(pal,rpal)==0)
                {
                    cout<<"Result : Palindrome"<<endl;
                }
                else
                {
                    cout<<"Result : Palindrome"<<endl;
                }

            }









}







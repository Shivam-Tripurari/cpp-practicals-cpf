#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    char ch;
    int n;

    cout << "FILE ORGANIZATION AND FILE OPERATIONS UTILITY\n";

    ofstream fout("Document.txt");

    if(!fout)
    {
        cout << "Unable to Create File.";
        return 0;
    }

    cout << "\nDocument.txt Created Successfully";

    cout << "\n\nEnter Number of Lines: ";
    cin >> n;
    cin.ignore();

    cout << "\nEnter File Contents:\n";

    for(int i = 0; i < n; i++)
    {
        getline(cin, line);
        fout << line << endl;
    }

    fout.close();

    cout << "\nData Written Successfully";

    ifstream fin("Document.txt");

    if(!fin)
    {
        cout << "\nUnable to Open File.";
        return 0;
    }

    cout << "\n\nReading Document.txt\n";

    while(getline(fin, line))
    {
        cout << line << endl;
    }

    if(fin.eof())
        cout << "\nEnd of File Reached Successfully";

    fin.close();

    ifstream source("Document.txt");
    ofstream backup("BackupDocument.txt");

    if(!source || !backup)
    {
        cout << "\nUnable to Create Backup File.";
        return 0;
    }

    cout << "\n\nCreating BackupDocument.txt";

    while(source.get(ch))
    {
        backup.put(ch);
    }

    if(source.bad() || backup.fail())
    {
        cout << "\nError During File Copying.";
        return 0;
    }

    source.close();
    backup.close();

    ifstream check("BackupDocument.txt");

    if(check)
        cout << "\nBackup File Created Successfully";
    else
        cout << "\nBackup File Not Created";

    check.close();

    fin.open("Document.txt");

    if(!fin)
    {
        cout << "\nUnable to Open File.";
        return 0;
    }

    fin.seekg(0, ios::end);

    cout << "\n\nCurrent File Position: " << fin.tellg();

    cout << "\nMoving File Pointer...";

    fin.clear();
    fin.seekg(0, ios::beg);

    cout << "\nDisplaying Contents after Repositioning\n";

    fin.seekg(10, ios::beg);

    while(fin.get(ch))
        cout << ch;

    cout << "\n\nResetting File Pointer";

    fin.clear();
    fin.seekg(0, ios::beg);

    cout << "\n\nComplete File Contents:\n";

    while(fin.get(ch))
        cout << ch;

    fin.close();

    cout << "\n\nProgram Executed Successfully.";

    return 0;
}

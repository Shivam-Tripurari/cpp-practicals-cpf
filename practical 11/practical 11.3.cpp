#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct Student
{
    string enrollment;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

int main()
{
    Student s;
    int n;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";

    ofstream fout("StudentRecords.txt");

    if(!fout)
    {
        cout << "Unable to Create Student File.";
        return 0;
    }

    cout << "\nStudentRecords.txt Created Successfully";

    cout << "\n\nEnter Number of Students: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Invalid Number of Students.";
        fout.close();
        return 0;
    }

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enrollment Number: ";
        getline(cin, s.enrollment);

        cout << "Student Name: ";
        getline(cin, s.name);

        cout << "Branch: ";
        getline(cin, s.branch);

        cout << "Semester: ";
        cin >> s.semester;

        cout << "Percentage: ";
        cin >> s.percentage;

        cin.ignore();

        cout << "Grade: ";
        getline(cin, s.grade);

        fout << s.enrollment << "|"
             << s.name << "|"
             << s.branch << "|"
             << s.semester << "|"
             << s.percentage << "|"
             << s.grade << endl;
    }

    fout.close();

    cout << "\nStudent Records Stored Successfully";

    ifstream fin("StudentRecords.txt");

    if(!fin)
    {
        cout << "\nUnable to Open Student File.";
        return 0;
    }

    cout << "\n\nReading StudentRecords.txt\n";

    string line;

    while(getline(fin, line))
    {
        stringstream ss(line);

        getline(ss, s.enrollment, '|');
        getline(ss, s.name, '|');
        getline(ss, s.branch, '|');

        string temp;

        getline(ss, temp, '|');
        s.semester = stoi(temp);

        getline(ss, temp, '|');
        s.percentage = stof(temp);

        getline(ss, s.grade, '|');

        cout << "\nEnrollment: " << s.enrollment;
        cout << "\nName: " << s.name;
        cout << "\nBranch: " << s.branch;
        cout << "\nSemester: " << s.semester;
        cout << "\nPercentage: " << s.percentage;
        cout << "\nGrade: " << s.grade;
        cout << "\n-----------------------------";
    }

    if(fin.eof())
        cout << "\nEnd of File Reached Successfully";

    fin.close();

    ifstream source("StudentRecords.txt");
    ofstream backup("BackupStudentRecords.txt");

    if(!source || !backup)
    {
        cout << "\nUnable to Create Backup File.";
        return 0;
    }

    while(getline(source, line))
    {
        backup << line << endl;
    }

    if(source.bad() || backup.fail())
    {
        cout << "\nError During Backup.";
        return 0;
    }

    source.close();
    backup.close();

    cout << "\n\nBackup Completed Successfully";

    cout << "\n\nProgram Executed Successfully.";

    return 0;
}

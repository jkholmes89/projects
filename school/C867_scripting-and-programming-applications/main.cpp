#include <iostream>
#include <string>
using namespace std;
#include "degree.h"
#include "student.h"
#include "roster.h"
int main()
{
    Roster classRoster;
    classRoster.add("A1", "John", "Smith", "JohnSmith@gmail.com", 20, 50, 45, 40, DegreeProgram::SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 40, 50, 30, DegreeProgram::NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, DegreeProgram::SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "ErinBlack_@gmail.com", 22, 30, 33, 36, DegreeProgram::SOFTWARE);
    classRoster.add("A5", "Joshua", "Holmes", "jhol941@wgu.edu", 21, 45, 45, 36, DegreeProgram::SOFTWARE);
    classRoster.printAll();
    cout << "Invalid email addresses:" << endl;
    classRoster.printInvalidEmails();
    cout << "Average days in course for each student:" << endl;
    for (int i = 0; i < 5; i++)
    {
        string studentID = classRoster.getClassRosterArray(i)->getStudentID();
        classRoster.printAverageDaysInCourse(studentID);
    }
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");
    return 0;
}
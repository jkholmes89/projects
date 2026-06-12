#include <iostream>
#include <string>
using namespace std;
#include "degree.h"
#include "student.h"
#include "roster.h"

// Constructor
Roster::Roster()
{
    for (int i = 0; i < 5; i++)
    {
        classRosterArray[i] = nullptr;
    }
}

Roster::~Roster()
{
    for (int i = 0; i < 5; i++)
    {
        delete classRosterArray[i];
    }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    for (int i = 0; i < 5; i++)
    {
        if (classRosterArray[i] == nullptr)
        {
            classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
            break;
        }
    }
}

void Roster::remove(string studentID)
{
    for (int i = 0; i < 5; i++)
    {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID)
        {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            cout << "Student with ID " << studentID << " has been removed." << endl;
            return;
        }
    }
    cout << "Student with ID " << studentID << " not found." << endl;
}

void Roster::printAll()
{
    for (int i = 0; i < 5; i++)
    {
        if (classRosterArray[i] != nullptr)
        {
            classRosterArray[i]->print();
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID)
{
    for (int i = 0; i < 5; i++)
    {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID)
        {
            int *days = classRosterArray[i]->getDaysInCourse();
            double average = (days[0] + days[1] + days[2]) / 3.0;
            cout << "Average days in course for student ID " << studentID << ": " << average << endl;
            return;
        }
    }
    cout << "Student with ID " << studentID << " not found." << endl;
}

void Roster::printInvalidEmails()
{
    cout << "Invalid email addresses:" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (classRosterArray[i] != nullptr)
        {
            string email = classRosterArray[i]->getEmailAddress();
            if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos)
            {
                cout << email << endl;
            }
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
    cout << "Students in degree program: " << degreeProgram << endl;
    for (int i = 0; i < 5; i++)
    {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getDegreeProgram() == degreeProgram)
        {
            classRosterArray[i]->print();
        }
    }
}

Student *Roster::getClassRosterArray(int index)
{
    if (index >= 0 && index < 5)
    {
        return classRosterArray[index];
    }
    return nullptr;
}
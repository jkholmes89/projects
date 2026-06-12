#include <iostream>
#include <string>
using namespace std;
#include "degree.h"
#include "student.h"
// Constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; i++)
    {
        this->daysInCourse[i] = daysInCourse[i];
    }
    this->degreeProgram = degreeProgram;
};
// Destructor
Student::~Student() {
};
// Getters
string Student::getStudentID() const
{
    return studentID;
}
string Student::getFirstName() const
{
    return firstName;
}
string Student::getLastName() const
{
    return lastName;
}
string Student::getEmailAddress() const
{
    return emailAddress;
}
int Student::getAge() const
{
    return age;
}
int *Student::getDaysInCourse()
{
    return daysInCourse;
}
DegreeProgram Student::getDegreeProgram() const
{
    return degreeProgram;
}
// Setters
void Student::setStudentID(string studentID)
{
    this->studentID = studentID;
}
void Student::setFirstName(string firstName)
{
    this->firstName = firstName;
}
void Student::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Student::setEmailAddress(string emailAddress)
{
    this->emailAddress = emailAddress;
}
void Student::setAge(int age)
{
    this->age = age;
}
void Student::setDaysInCourse(int daysInCourse[])
{
    for (int i = 0; i < 3; i++)
    {
        this->daysInCourse[i] = daysInCourse[i];
    }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram)
{
    this->degreeProgram = degreeProgram;
}
// Methods
void Student::print()
{
    cout << "Student ID: " << studentID << "\t" << "First Name: " << firstName << "\t" << "Last Name: " << lastName << "\t" << "Age: " << age << "\t" << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "} \t" << "Degree Program: " << degreeProgram << endl;
}

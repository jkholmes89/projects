#ifndef STUDENT.H
#define STUDENT .H
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[]);
    ~Student();

    // Getters
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    int *getDaysInCourse();
    string getDegreeProgram() const;

    // Setters
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setDegreeProgram(string degreeProgram);

    // Methods
    void print();

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    string degreeProgram;
};
#endif

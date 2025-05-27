#include <iostream>
using namespace std;

class person
{
public:
    string name;
    char gender;
    int age;
};

class Student : public person
{
public:
    string college;
    string department;
};

class Teacher : public person
{
public:
    string college;
    int salary;
    string designment;
};

int main()
{
    Student S1;
    Teacher T1;
    S1.name;
    S1.gender;
    S1.age;
    S1.college;
    S1.department;
    S1.salary;
    
}
#include <iostream>
using namespace std;

class student
{
private:
    string name;
    string college = "CITY Engineering College";

public:
    student(string n)
    {
        name = n; 
    }

    string getCollege()
    {
        return college;
    }

    void getDetails()
        {
            cout << "Name: " << name << endl;
            cout << "college: "  << getCollege() << endl;
        }
};

int main()
{
    student S1("Girish");
    cout << S1.getCollege() << endl;
    S1.getDetails();
}
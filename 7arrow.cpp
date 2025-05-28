#include <iostream> 
using namespace std;

class person 
{
public:
    string name = "Default Name";
    int age = 20;

    person(string name)
    {
        this->name = name;
        this->age = age;
    }

    void print()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

int main () {
    person P1("Girish");
    P1.print();
    cout << "Size of the variable: " << sizeof(P1) << "bytes" << endl;
}
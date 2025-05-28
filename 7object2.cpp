#include <iostream>
using namespace std;
class Person
{
public:
    string name;

    Person(string name)
    {
        this->name = name;
    }

    void Printer()
    {
        cout << name << endl;
    }
};

int main()
{
    Person P1("Girish");
    Person *address_of_person = &P1;
    address_of_person->Printer();
}
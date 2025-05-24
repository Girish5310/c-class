#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    Person(string user_name) 
    {
        name = user_name;
        cout << "Object Constructed: " << name << endl;
    }

    ~Person() 
    {
        cout << "Object Destructed: " << name << endl;
    }
};

int main()
{
    Person P1("Girish");
    Person P2("Abhi");
}
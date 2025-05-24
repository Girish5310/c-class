#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
    void setage(int a)
    {
        age = a;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;

};
};

int main()
{
        person p1;
        p1.setName("Girish");
        cout << p1.getName() << endl;
}
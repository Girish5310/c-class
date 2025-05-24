#include <iostream>
using namespace std;

class person
{
private:
    string name;
    
public:
    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
        person p1;
        p1.setName("Girish");
        cout << p1.getName() << endl;
}
#include <iostream>
using namespace std;

class passwordchecker
{
private:
    int pin;

public:
    void setPin(int p)
    {
        pin = p;
    }

    void login(int pin_number)
    {
        if (pin == pin_number)
        {
            cout << "Loggedin" << endl;
        }
        else
        {
            cout << "Wrong pin" << endl;
        }
    }
};

int main()
{
    passwordchecker P1;
    P1.setPin(1234);
    P1.login(2345);
    P1.setPin(2345);
}
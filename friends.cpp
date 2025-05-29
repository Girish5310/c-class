#include <iostream>
using namespace std;

class A 
{
private:
    int x = 5;
    int y = 10;

    void greet()
    {
        cout << "Greeting" << endl;
    }       

    // Friend function declaration
    friend void show(A);
};

// Friend function definition
void show(A obj) 
{
    cout << "Value of x: " << obj.x << endl;
    cout << "value of y: " << obj.y << endl;
    obj.greet();
}

int main() 
{
    A a;
    show(a); // Accesses private member x
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string op;
    int a, b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Enter the Operation: *, /" << endl;
    cin >> op;
    
    switch (op[0])
    {
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Invalid Operator";
            break;
    }
}
#include <iostream>
using namespace std;
int main() 
{
    int options;
    while (true) 
    {
        cout << "Choose the Option:" << endl;
        cout << "1. Create a Account" << endl;
        cout << "2. List all the Users" << endl;
        cout << "3. Exit the Program" << endl;
        cin >> options;

        switch (options) {
            case 1:
                cout << "Create a Account" << endl;
                 cout << "Enter the Name for :" << endl;
                break;
            case 2:
                cout << "List all the accounts" << endl;
                break;
            case 3:
                cout <<"Exiting the program" << endl;
                return 0;
                break;
            default:
                break;
        }
    }
    return 0;
}
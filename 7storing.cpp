#include <iostream>
using namespace  std;

int main  () 
{
    string food = "Pizza";
    string *food_address = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << food_address << endl;
}
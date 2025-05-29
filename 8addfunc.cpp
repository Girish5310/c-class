#include <iostream>
using namespace std;

int add(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int x, y, result;
    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;
    result = add(x, y);
    cout << "Result: " << result << endl;
}

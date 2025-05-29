#include <iostream>
using namespace std;

float area(float l, float b){
    float area = l * b;
    return area;
}

int main (){
    float l, b, rectangle;

    cout << "for  l: " << endl;
    cin >> l;

    cout << "for b: " << endl;
    cin >> b;

    rectangle = area(l,b);

    cout << "area is: " << rectangle << endl;
}
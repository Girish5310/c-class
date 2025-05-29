#include <iostream>
using namespace std;

float volume(float a){
    float volume = a * a * a;
    return volume;
}

int main (){
    float a, cube;

    cout << "for  a: " << endl;
    cin >> a;

    cube = volume(a);

    cout << "volume is: " << cube << endl;
}
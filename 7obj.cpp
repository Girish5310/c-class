#include <iostream>
using namespace std;

class Car {
public:
    void show() {
        cout << "Car is running." << endl;
    }
};

int main(){
    Car* c = new Car;
    c->show();
    delete c;
    return 0;
}
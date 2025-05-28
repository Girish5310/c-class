#include <iostream>
#include <cstring>
using namespace std;

class City {
    char* name;
public:
    City(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    void display() {
        cout << "City: " << name << endl;
    }
    ~City () {
        delete[] name;
    }
};
int main() {
    City C("Mumbai");
    C.display();
    return 0;
}
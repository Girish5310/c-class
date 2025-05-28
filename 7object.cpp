#include <iostream>
using namespace std;

class Book {
public:
    void showTitle() {
        cout << "c++ Programming" << endl;
    }
};

int main(){
    Book b;
    Book* ptr = &b;
    ptr->showTitle();
    return 0;
}
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
    }
};

int main() {
    Book b;
    b.display();
    return 0;
}
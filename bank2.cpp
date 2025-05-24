#include <iostream>
#include <vector>
using namespace std;

class Person {


    string name;
    string pancard_number;
    string aadhar_card_number;

public:
    Person(string n, string p, string a) {
        name = n;
        pancard_number = p;
    }

    void display_details() {
        cout << "Bank User Details" << endl;
        cout << "Username: " << name << endl;
        cout << "Pancard: " << pancard_number << endl;
        cout << "==============================" << endl;
    }
};
int main()
{
string name, pancard, aadharcard;
    vector<Person> list_of_users;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the Name for " << i + 1 << ":" << endl;
        cin >> name;
        cout << "Enter the Pancard " << i + 1 << ":" << endl;
        cin >> pancard;
        list_of_users.push_back(Person(name, pancard, aadharcard)); 
    }
     
}
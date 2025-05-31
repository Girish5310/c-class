#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void showMenu() {
    cout << "\nScientific Calculator Menu\n";
    cout << "----------------------------\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Sine (sin)\n";
    cout << "6. Cosine (cos)\n";
    cout << "7. Tangent (tan)\n";
    cout << "8. Square Root (sqrt)\n";
    cout << "9. Natural Log (ln)\n";
    cout << "10. Exponential (exp)\n";
    cout << "11. Power (pow)\n";
    cout << "0. Exit\n";
    cout << "Choose an operation: ";
}

int main() {
    int choice;
    double a, b;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a * b << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b != 0)
                    cout << "Result: " << a / b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                cout << "Enter angle in radians: ";
                cin >> a;
                cout << "Result: " << sin(a) << endl;
                break;
            case 6:
                cout << "Enter angle in radians: ";
                cin >> a;
                cout << "Result: " << cos(a) << endl;
                break;
            case 7:
                cout << "Enter angle in radians: ";
                cin >> a;
                cout << "Result: " << tan(a) << endl;
                break;
            case 8:
                cout << "Enter number: ";
                cin >> a;
                if (a >= 0)
                    cout << "Result: " << sqrt(a) << endl;
                else
                    cout << "Error: Negative input!" << endl;
                break;
            case 9:
                cout << "Enter number: ";
                cin >> a;
                if (a > 0)
                    cout << "Result: " << log(a) << endl;
                else
                    cout << "Error: Non-positive input!" << endl;
                break;
            case 10:
                cout << "Enter number: ";
                cin >> a;
                cout << "Result: " << exp(a) << endl;
                break;
            case 11:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result: " << pow(a, b) << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        // Clear input buffer if there's a failure
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (choice != 0);

    return 0;
}
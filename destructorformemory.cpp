#include <iostream>
using namespace std;

class MemoryManager 
{
public:
    int* arr;

    // Constructor to allocate memory
    MemoryManager(int size) 
    {
        arr = new int[size];
        cout << "Memory allocated for array." << endl;
    }

    // Destructor to deallocate memory
    ~MemoryManager() 
    {
        delete[] arr;
        cout << "Memory deallocated." << endl;
    }
};

int main() 
{
    MemoryManager mm(5);
    return 0;
}
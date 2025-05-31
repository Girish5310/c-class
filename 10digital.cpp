#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
#include <sstream>
#include <windows.h>

using namespace std;

void clearScreen() {
    system("cls");
}

string getCurrentTime() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    
    stringstream ss;
    ss << setfill('0') << setw(2) << ltm->tm_hour << ":"
       << setw(2) << ltm->tm_min << ":"
       << setw(2) << ltm->tm_sec;
    
    return ss.str();
}

string getCurrentDate() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    
    stringstream ss;
    ss << setfill('0') << setw(2) << ltm->tm_mday << "/"
       << setw(2) << (1 + ltm->tm_mon) << "/"
       << (1900 + ltm->tm_year);
    
    return ss.str();
}

void displayClock() {
    string timeStr = getCurrentTime();
    string dateStr = getCurrentDate();
    
    cout << "\n\n";
    cout << "    +==========================+\n";
    cout << "    |      DIGITAL CLOCK       |\n";
    cout << "    +==========================+\n";
    cout << "    |                          |\n";
    cout << "    |     " << timeStr << "           |\n";
    cout << "    |                          |\n";
    cout << "    |     " << dateStr << "        |\n";
    cout << "    |                          |\n";
    cout << "    +==========================+\n";
    cout << "\n    Press any key to refresh, ESC to quit...\n";
}

// Windows application entry point
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Allocate a console for this GUI application
    AllocConsole();
    
    // Redirect stdout to console
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
    freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);
    
    cout << "Starting Digital Clock...\n";
    cout << "Press ESC to quit.\n";
    Sleep(2000);
    
    while (true) {
        clearScreen();
        displayClock();
        
        // Check for ESC key
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
            break;
        }
        
        Sleep(1000);
    }
    
    cout << "\nClock stopped. Goodbye!\n";
    Sleep(2000);
    
    // Free the console
    FreeConsole();
    return 0;
}

// Console application entry point (backup)
int main() {
    cout << "Starting Digital Clock...\n";
    cout << "Press Ctrl+C to quit.\n";
    Sleep(2000);
    
    while (true) {
        clearScreen();
        displayClock();
        Sleep(1000);
    }
    
    return 0;
}  
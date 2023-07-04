#include <iostream>
#include <cstdlib>
#include <windows.h>

void startXampp() {
    ShellExecute(NULL, "open", "C:\\xampp\\xampp_start.exe", NULL, NULL, SW_HIDE);
}

void startApache() {
    ShellExecute(NULL, "open", "C:\\xampp\\apache_start.bat", NULL, NULL, SW_HIDE);
}

void startMySQL() {
    ShellExecute(NULL, "open", "C:\\xampp\\mysql_start.bat", NULL, NULL, SW_HIDE);
}

int main() {
    HWND console = GetConsoleWindow();
    ShowWindow(console, SW_HIDE);

    // Włączanie XAMPP
    startXampp();

    // Włączanie Apache
    startApache();

    // Włączanie MySQL
    startMySQL();

    return 0;
}

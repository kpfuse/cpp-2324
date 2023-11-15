#include <iostream>
#include <windows.h>
using namespace std;

int main() {


    SetConsoleCP(CP_UTF8);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(CP_UTF8);

    wcout << "Hello, World! 😎" << endl;
    wcout << "Привет, мир! 😎" << endl;
    wcout << "你好，世界！😎" << endl;
    wcout << "Γεια Σου, Κόσμος! 😎" << endl;

	return 0;
}
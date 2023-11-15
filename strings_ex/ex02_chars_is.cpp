#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");  
    std::cout << std::boolalpha;

    char c1 = 'W', c2 = 'A', c3 = 'Þ', c4 = '5', c5 = ' ', c6 = '\t', c7 = '%';

    cout << c1 << " " << (bool)isalpha(c1) << endl;
    cout << c3 << " " << (bool)isalpha(c3) << endl;
    cout << c4 << " " << (bool)isalpha(c4) << endl << endl;

    cout << c2 << " " << (bool)isalpha(c2) << endl;
    cout << c2 << " " << (bool)isupper(c2) << endl;
    cout << c2 << " " << (bool)islower(c2) << endl;
    cout << c2 << " " << (bool)isdigit(c2) << endl;
    cout << c2 << " " << (bool)isxdigit(c2) << endl << endl;

    cout << c4 << " " << (bool)isdigit(c4) << endl;
    cout << c5 << " " << (bool)isspace(c5) << endl;
    cout << c6 << " " << (bool)isspace(c6) << endl << endl;

    cout << c7 << " " << (bool)isalpha(c7) << endl;
    cout << c7 << " " << (bool)isdigit(c7) << endl;
    cout << c7 << " " << (bool)isspace(c7) << endl;
    cout << c7 << " " << (bool)ispunct(c7) << endl;
   
    return 0;
}
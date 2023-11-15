#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "");  // 
    // Character literals
    auto c0 = 'A';       // char
    auto c1 = u8'A';     // char

    auto c2 = L'A';      // wchar_t

    char16_t c3 = u'A';  // char16_t
    char32_t c4 = U'A';  // char32_t

    char16_t rc5 = u'Ю'; // char16_t
    char32_t rc6 = U'Щ'; // char32_t
    auto rc7 = '\u0444'; // char
    auto rc8 = U'😎';    // char32_t

    cout << c0 << "\t type = " << typeid(c0).name() << endl;
    cout << c1 << "\t type = " << typeid(c1).name() << endl;
    cout << c2 << "\t type = " << typeid(c2).name() << endl;
    cout << c3 << "\t type = " << typeid(c3).name() << endl;
    cout << c4 << "\t type = " << typeid(c4).name() << endl;
    cout << rc5 << "\t type = " << typeid(rc5).name() << endl;
    cout << rc6 << "\t type = " << typeid(rc6).name() << endl;
    cout << rc7 << "\t type = " << typeid(rc7).name() << endl;
    cout << rc8 << "\t type = " << typeid(rc8).name() << endl;
    cout << "---------------------------\n";

    std::wcout << static_cast<wchar_t>(rc5) << endl;
    std::wcout << (wchar_t)rc6 << endl;

    return 0;
}
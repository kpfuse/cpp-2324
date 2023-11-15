#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::wstring text{ L"Hello World!" };

    std::u16string text16{ u"Hello World!" };
    std::u32string text32{ U"Hello World!" };

    std::wcout << text << endl;  // Hello! Good bye...

   // std::wcout << text32 << endl;  // Hello! Good bye...
}
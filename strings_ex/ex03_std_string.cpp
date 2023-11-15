
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() { 
    //setlocale(0, "");
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
   
    string s1;                 // пуста€ строка
    string s2 = "hello";       // hello
    string s3("welcome");      // welcome
    string s4(5, 'h');     // hhhhh
    string s5(s2);            // hello    
    string s6 = s2;            // hello

    string empty{ };
    string myName{ "Bill" };
    string str = "Hello world!";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

// определить длину строки str
    cout << s2.size() << " ";    // 5
    cout << s2.length() << endl; // 5
    cout << s2.capacity() << endl; // 5

    // операции над строками
// присваивание
    s1 = "hello";
    s2 = "world";
// конкатенаци€
    s3 = s1 + " " + s2; // hello world
    s3 += "!!!!!!!!!!!!!!!!!!!!!!";
    cout << s3 << endl;
// пустые строки
    s1 = "";
    if (s1.empty())
        std::cout << "String is empty" << std::endl;

// сравнение
    bool result;
    result  = s1 == s2;     // false
    result = s1 == "Hello";     // false
    result = s1 == "hello";     // true

    result = s1 != s2;     // true
    result = s1 != "Hello";     // true
    result = s1 != "hello";     // false

     s1 = "Aport";
     s2 = "Apricot";
     result = s1 > s2;       // false

     if (s1 > "hell") {
         cout << "ƒа, больше \n";
     }


    // консольный ввод и вывод
    string name;
    //cout << "Input your name: ";
    //cin >> name;    // до первого пробельного символа; не рекомендуетс€
    //cout << "Your name: " << name << std::endl;

    std::cout << "Input your name: ";
    getline(cin >> ws, name);
    cout << "Your name: " << name << endl;
    string age{};
    getline(cin >> ws, age); // считываем полную строку текста в age, игнориру€ начальные пробелы (и \n) так же как и cin >>

    // доступ к отдельным символам
    string hello = "Hello";
    char c = hello[1];      // e
    hello[0] = 'M';
    std::cout << hello << std::endl;    // Mello

   // посимвольна€ обработка строки
    string s{ "abcABCD_012345_*+-$" };
	int count = 0;    // подсчет количества букв  в строке   s= "abcABCD_012345_*+-$" 
	for (int i = 0; i < s.size(); i++) {
		if ( isalpha(s[i]))
			count++;
	}
	cout << "¬ строке s всего букв " << count << endl;

    // функции класса string

    // присваивание строк, функци€ assign()
    string ss1 = "best";
    string ss2;
    string ss3;
    char ps[] = "best";

    ss3 = ss1; // s3 = "best"
    ss2.assign(ss1); // s2 = "best"
    ss2.assign(ss1, 1, 2); // s2 = "es"
    ss2.assign(ps, 3); // s2 = "bes"

    // конкатенаци€, объединение строк
    string letters = "abcdef";
    string digits = "1234567890";
    letters.append(digits, 3, 4); // s1 = "abcdef4567" - из digits начать с индекса 3, вз€ть 4 символа

    char pd[] = "1234567890";
    letters = "abcdef";
    letters.append(pd, 3); // s1 = "abcdef123"

    letters.append(10, '*'); // s1 = "abcdef123**********"

    // вставка символов в строке. ‘ункци€ insert(s, start, pos, num).
    //s Ц строка, котора€ вставл€етс€ в вызывающую строку;
    //start Ц позици€ в вызывающей строке, из которой осуществл€етс€ вставка строки s;
    //pos Ц позици€ в строке s, из которой происходит вставка;
    //num Ц количество символов в строке s, которые вставл€ютс€ с позиции insStart.
    
    string s1 = "abcdef";
    string s2 = "1234567890";

    s1.insert(3, s2); // s1 = "abc"+"1234567890"+"def"="abc1234567890def"
    s2.insert(2, s1, 1, 3); // s2 = "12bcd34567890"

    // «амена символов в строке. ‘ункци€ replace().
    string s1 = "abcdef";
    string s2 = "1234567890";

    s2.replace(2, 4, s1); // s2 = "12abcdef7890"
    s2 = "1234567890";
    s2.replace(3, 2, s1); // s2 = "123abcdef67890"
    s2 = "1234567890";
    s2.replace(5, 1, s1); // s2 = "12345abcdef7890"

    // замена символов, функци€ replace()
    string s1 = "abcdef";
    string s2 = "1234567890";

    s2.replace(2, 4, s1); // s2 = "12abcdef7890"
    s2 = "1234567890";
    s2.replace(3, 2, s1); // s2 = "123abcdef67890"

    s2 = "1234567890";
    s2.replace(5, 1, s1); // s2 = "12345abcdef7890"
    s2 = "1234567890";
    s2.replace(5, 1, s1, 2, 3); // s2 = "12345cde7890"
    s2 = "1234567890";
    s2.replace(4, 2, s1, 0, 4); // s2 = "1234abcd7890"


    return 0;
}
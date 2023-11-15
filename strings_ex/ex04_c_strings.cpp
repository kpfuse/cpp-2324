#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
//#include <string.h>
//#include <cstring>
#include <Windows.h>
#include <ctype.h>

using namespace std;

int main() {
	//setlocale(0, "");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	char carr[]{ 'a', 'b', 'c' }; // работать только как с массивом

	char cstr1[] = "abc";         // C-строка, строка с нуль-окончанием
	char cstr2[]{ 'a', 'b', 'c', '\0' };

	char s[]{ "abcABCD_012345_*+-$" }; // предпочтительнее

	char s1[80] = "Привет, Вася!";
	char s2[] = "Привет, Вася!";

	const char* s3 = "Привет, Вася!";

	// присваивание
	// s2 = cstr1;  // нет
	// s2 = "abrakadabra"; // нет

	s3 = s1;
	cout << s3 << endl;
	s3 = "abrakadabraaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	cout << s3 << endl;

	//ввод и вывод
	cout << "s1 =";
	cin >> s1; cin.get(); // читает до первого пробельного символа, оставляет в буфере ввода концы строк, не рекомендуется
	cout << s1 << endl;

	cout << "s2 =";
	cin.getline(s2, 10);
	cout << s2 << endl;
	
	cout << "s3 =";
	cin.getline(s2, 10);
	cout << s2 << endl;

	cout << "x =";
	int x;
	cin >> x;  cin.get();
	cout << x << endl;

	cout << "s1 =";
    cin.getline(s2, 10);
	cout << s2 << endl;



	//Длина строки – strlen
	int len = strlen(s);

	// посимвольная обработка строки
	int count = 0;    // подсчет количества букв  в строке   s= "abcABCD_012345_*+-$" 
	for (int i = 0; i < len; i++) {
		if (isalpha(s[i]))
			count++;
	}
	cout << "В строке s всего букв " << count << endl;

	//функции для работы со строками

	char sv[]{ "Вася" }, sp[]{ "Петя" }, svi[]{ "Василий Иванович" };
	if (0 == strcmp(sv, sp))
		cout << "Строки одинаковы \n";
	else
		cout << "Строки разные\n";

	if (strcmp(sv, sp) < 0)
		cout << "Вася меньше чем Петя  \n";
	else
		cout << "Петя меньше\n";

	if (strcmp(sv, svi) > 0)
		cout << "Вася больше чем Василий \n";
	else
		cout << "Вася меньше\n";



	if (0 == strncmp(sv, sp, 2))
		printf("Первые два символа %s и %s одинаковы\n", sv, sp);
	else
		printf("Первые два символа %s и %s разные\n", sv, sp);

	if (0 == strncmp(sv, svi, 2))
		printf("Первые два символа %s и %s одинаковы\n", sv, svi);
	else
		printf("Первые два символа %s и %s разные\n", sv, svi);



	char a[50] = "Hello, ", b[10] = "Вася ";
	strcat(a, b);  // конкатенация   char*
	cout << a << endl;
	cout << b << endl;
	cout << strcat(strcat(a, b), ", как дела?") << endl;


	strcpy(a, b); // a (приемник) <- b (источник)
	cout << a << endl;
	cout << b << endl;

	strncpy(a, "MaMa", 2); // a (приемник) <- b (источник), !!! не добавляет \0
	cout << a << endl;

	//...


	return 0;
}
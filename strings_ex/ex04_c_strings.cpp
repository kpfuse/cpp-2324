#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
//#include <string.h>
//#include <cstring>
#include <Windows.h>
#include <ctype.h>

using namespace std;

int main() {
	//setlocale(0, "");
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

	char carr[]{ 'a', 'b', 'c' }; // �������� ������ ��� � ��������

	char cstr1[] = "abc";         // C-������, ������ � ����-����������
	char cstr2[]{ 'a', 'b', 'c', '\0' };

	char s[]{ "abcABCD_012345_*+-$" }; // ����������������

	char s1[80] = "������, ����!";
	char s2[] = "������, ����!";

	const char* s3 = "������, ����!";

	// ������������
	// s2 = cstr1;  // ���
	// s2 = "abrakadabra"; // ���

	s3 = s1;
	cout << s3 << endl;
	s3 = "abrakadabraaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	cout << s3 << endl;

	//���� � �����
	cout << "s1 =";
	cin >> s1; cin.get(); // ������ �� ������� ����������� �������, ��������� � ������ ����� ����� �����, �� �������������
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



	//����� ������ � strlen
	int len = strlen(s);

	// ������������ ��������� ������
	int count = 0;    // ������� ���������� ����  � ������   s= "abcABCD_012345_*+-$" 
	for (int i = 0; i < len; i++) {
		if (isalpha(s[i]))
			count++;
	}
	cout << "� ������ s ����� ���� " << count << endl;

	//������� ��� ������ �� ��������

	char sv[]{ "����" }, sp[]{ "����" }, svi[]{ "������� ��������" };
	if (0 == strcmp(sv, sp))
		cout << "������ ��������� \n";
	else
		cout << "������ ������\n";

	if (strcmp(sv, sp) < 0)
		cout << "���� ������ ��� ����  \n";
	else
		cout << "���� ������\n";

	if (strcmp(sv, svi) > 0)
		cout << "���� ������ ��� ������� \n";
	else
		cout << "���� ������\n";



	if (0 == strncmp(sv, sp, 2))
		printf("������ ��� ������� %s � %s ���������\n", sv, sp);
	else
		printf("������ ��� ������� %s � %s ������\n", sv, sp);

	if (0 == strncmp(sv, svi, 2))
		printf("������ ��� ������� %s � %s ���������\n", sv, svi);
	else
		printf("������ ��� ������� %s � %s ������\n", sv, svi);



	char a[50] = "Hello, ", b[10] = "���� ";
	strcat(a, b);  // ������������   char*
	cout << a << endl;
	cout << b << endl;
	cout << strcat(strcat(a, b), ", ��� ����?") << endl;


	strcpy(a, b); // a (��������) <- b (��������)
	cout << a << endl;
	cout << b << endl;

	strncpy(a, "MaMa", 2); // a (��������) <- b (��������), !!! �� ��������� \0
	cout << a << endl;

	//...


	return 0;
}
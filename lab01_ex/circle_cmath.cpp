#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double radius, length, area;    	// радиус, длина окружности, площадь

	cout << "Введите площадь S = ";	      // вывод   на экран подсказки для пользователя 

	cin >> area;					// ввод значения в переменную S
	radius = sqrt(area / M_PI);				// вычисление радиуса r по формуле  
	length = 2.0 * M_PI * radius;				// вычисление значения переменной  L

	cout << "радиус = " << radius << endl;    	 	//вывод  значения радиуса
                                                     // перевод курсора на новую строку - << endl
	cout << "длина окружности = " << length;	 //вывод  значения длины окружности
	
	return 0;
}

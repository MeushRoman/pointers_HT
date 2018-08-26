// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;


int main()
{
	srand(time(NULL));
	const int size = 10;
	int a[size];
	int *p = a;

	//1.	Создать массив из 10 целых чисел. Заполнить массив случайным образом в диапазоне от -45 до 45. Пользуясь указателем(и) на массив целых чисел, посчитать процент положительных и отрицательных элементов массива.
	int pol = 0, otr = 0, res;
	for (p = a; p < a + size; p++)
	{
		*p = -45 + rand() % 90;
		(*p < 0) ? otr++ : pol++;
	}

	for (p = a; p < a + size; p++)
	{
		cout << *p << " ";
	}

	cout << endl;

	cout << "1. otricatel'nyh = " << (float)otr / size * 100 << " %\tpolojitel'nyh = " << (float)pol / size * 100 << " %" << endl;
	cout << endl;
	//2.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с четными номерами
	//3.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с нечетными номерами.
	//4.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными трем
	//5.	*Создать массив из 10 целых чисел.Заполнить массив случайным образом.Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными 7.
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	for (p = a; p < a + size; p++)
	{
		*p = 1 + rand() % 30;

		//2, 3
		((p - a) % 2 == 0) ? sum1 += *p : sum2 += *p;
		//4.
		if ((p - a) % 3 == 0) sum3 += *p;
		//5. 
		if ((p - a) % 7 == 0) sum4 += *p;
	}

	for (p = a; p < a + size; p++)
	{
		cout << *p << " ";
	}
	cout << endl << endl;

	cout << "2. sum (4et) \t= " << sum1 << endl;
	cout << "3. sum (ne 4et) = " << sum2 << endl;
	cout << "4. sum (krat 3) = " << sum3 << endl;
	cout << "5. sum (krat 7) = " << sum4 << endl;

	cout << endl;


	//6. Создать массив из 20 целых чисел. Заполнить массив случайным образом в диапазоне от 1 до 12. Каждое число это оценка по 12 бальной системе. Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок. Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12.

	cout << "6. " << endl;
	const int size2 = 20;
	int	b[size2];
	int *p2 = a;
	
	float dvoek = 0, troek = 0, chetverok = 0, pyaterok = 0;

	for (p2 = b; p2 < b + size2; p2++)
	{
		*p2 = 1 + rand() % 12;	
	}

	for (p2 = b; p2 < b + size2; p2++)
	{
		cout << *p2 << " ";

		switch (*p2)
		{
		case 1:
		case 2:
		case 3: dvoek++;
			break;
		case 4:
		case 5:
		case 6: troek++;
			break;
		case 7:
		case 8:
		case 9: chetverok++;
			break;
		case 10:
		case 11:
		case 12: pyaterok++;
			break;
		}
	}
	
	cout << endl << endl;
	
	
	cout << "dvoek = " << dvoek << " = " << (float)dvoek / size2 * 100 << " %" << endl;
	cout << "troek = " << troek << " = " << (float)troek / size2 * 100 << " %" << endl;
	cout << "4etverok = " << chetverok << " = " << (float) chetverok/size2 * 100 << " %" << endl;
	cout << "pyaterok = " << pyaterok << " = " << (float)pyaterok/size2 * 100 << " %" << endl;
	cout << endl;


	return 0;
}


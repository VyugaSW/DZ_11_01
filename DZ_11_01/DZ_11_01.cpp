

#include <iostream>
#include <Windows.h>

using namespace std;

int task1(int a, int h) {
	return pow(a, h);
}

int task2(int a, int b) {
	int summa = 0;
	for (int i = a+1; i < b; i++) {
		summa += i;
	}
	return summa;
}

void task3(int a, int b) {
	int summa = 0;
	for (int i = a + 1; i < b; i++) {
		summa = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) 
				summa += j;
		}
		if (i == summa) {
			cout << "Число " << i << " совершенно" << endl;
		}
	}


}

string task4(string a) {
	string six =
		"*******\n"
		"* 6   *\n"
		"*     *\n"
		"*     *\n"
		"*     *\n"
		"*   9 *\n"
		"*******\n";
	string seven =
		"*******\n"
		"* 7   *\n"
		"*     *\n"
		"*     *\n"
		"*     *\n"
		"*   7 *\n"
		"*******\n";
	string eight =
		"*******\n"
		"* 8   *\n"
		"*     *\n"
		"*     *\n"
		"*     *\n"
		"*   8 *\n"
		"*******\n";
	string nine =
		"*******\n"
		"* 9   *\n"
		"*     *\n"
		"*     *\n"
		"*     *\n"
		"*   6 *\n"
		"*******\n";
	string ten =
		"*******\n"
		"* 10  *\n"
		"*     *\n"
		"*     *\n"
		"*     *\n"
		"*  10 *\n"
		"*******\n";
	string valet =
		"*******\n"
		"* *** *\n"
		"*  ** *\n"
		"* *** *\n"
		"* *** *\n"
		"*valet*\n"
		"*******\n";
	string queen =
		"*******\n"
		"* **  *\n"
		"*  ** *\n"
		"* *** *\n"
		"* *** *\n"
		"*queen*\n"
		"*******\n";
	string king =
		"*******\n"
		"* * * *\n"
		"* *** *\n"
		"*  ** *\n"
		"* *** *\n"
		"*king *\n"
		"*******\n";
	string tuz =
		"*******\n"
		"* A   *\n"
		"*  *  *\n"
		"* *** *\n"
		"*  *  *\n"
		"*   A *\n"
		"*******\n";
	if (a == "six")
		return six;
	else if (a == "seven")
		return seven;
	else if (a == "seven")
		return seven;
	else if (a == "eight")
		return eight;
	else if (a == "nine")
		return nine;
	else if (a == "ten")
		return ten;
	else if (a == "valet")
		return valet;
	else if (a == "queen")
		return queen;
	else if (a == "king")
		return king;
	else if (a == "tuz")
		return tuz;
}

string task5(int a) {
	int summa1 = 0, summa2 = 0;
	int bib = 10, bob = 1;
	for (int i = 0; i < 6; i++) {
		if (bob < 1000) {
			summa1 += a % bib / bob;
		}
		else if (bob >= 1000) {
			summa2 += a % bib / bob;
		}
		bib *= 10;
		bob *= 10;
	}
	if (summa1 == summa2) return "Число счастливое";
	else return "Число не счастливое";
}

//--- задание 2

void task2_1(int ar[],int s, int c) {
	for (int i = 0; i < s; i++) {
		if (ar[i] == c)
			cout << "Найден похожий элемент в массиве. Его номер - " << i+1;
	}
}

int task2_2(int ar[], int n) {
	int Lm, Um;
	Lm = ar[0];
	Um = ar[9];
	int temp;
	while (true) {
		temp = (Lm + Um) / 2;
		if (n < ar[temp])
			Um = temp--;
		else if (n > ar[temp])
			Lm = temp++;
		else
			return temp+1;
	}
}

int task2_3(char number[]) {	
	int Ournumber = 0;
	int counter = 0;
	for (int i = 0; i < strlen(number); i++) {
		if (number[i] == '1') {
			Ournumber += pow(2, strlen(number) - counter);
		}
		counter++;
	}
	return Ournumber/2;
}






int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Задание 1. Написать функцию, которая принимает два
	//параметра: основание степени и показатель степени, и
	//вычисляет степень числа на основе полученных данных.

	//cout << task1(2,6);

	//Задание 2. Написать функцию, которая получает в каче-
	//стве параметров 2 целых числа и возвращает сумму чисел
	//из диапазона между ними.

	/*int a, b;
	cout << "1 число - "; cin >> a;
	cout << "2 число - "; cin >> b;
	cout << "Сумма чисел между - " << task2(a, b);*/

	//Задание 3. Число называется совершенным, если сумма
	//всех его делителей равна ему самому.Напишите функцию
	//поиска таких чисел во введенном интервале.

	/*int c, d;
	cout << "1 число - "; cin >> c;
	cout << "2 число - "; cin >> d;
	task3(c, d);*/

	//Задание 4. Написать функцию, выводящую на экран
	//переданную ей игральную карту.

	/*string card[9] = { "six","seven","eight","nine","ten","valet","queen","king","tuz" };
	cout << task4(card[5]);*/

	//cout << task5(123321);



	//Домашнее Задание 2

	//Задание 1. Написать функцию, реализующую алгоритм
	//линейного поиска заданного ключа в одномерном массиве.

	/*int h;
	int const s = 10;
	int mass[s] = { 1,2,3,4,5,6,7,8,9,10 };
	cin >> h;
	task2_1(mass,s,h);*/

	//Задание 2. Написать функцию, реализующую алгоритм
	//бинарного поиска заданного ключа в одномерном массиве.

	//P.S обусловимся, что массив отсортирован

	/*int mass[10] = {1,2,3,4,5,6,7,8,9,10};
	int s;
	cin >> s;
	cout << task2_2(mass, s);*/

	//Задание 3. Написать функцию для перевода числа, запи-
	//санного в двоичном виде, в десятичное представление.

	/*char str[64];
	cout << "Введите число в двоичном виде - ";
	cin >> str;
	cout << task2_3(str);*/
}



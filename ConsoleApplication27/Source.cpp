#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;
int N;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do
	{
		cout << "������� ����� �������" << endl;
		cin >> N;
		int year;
		int month;
		cout << "������� ���" << endl;
		cin>>year;
		cout << "������� �����" << endl;
			cin>>month;
cout << getCountDayMonth(month, year) << endl;
	} while (N>0);
}
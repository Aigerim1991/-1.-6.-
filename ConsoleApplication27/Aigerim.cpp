#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

int isLeap(int year)
{
	if (((year % 4) == 0) && ((year % 400) == 0))
		return 1;
	else return 0;
}
int getCountDayMonth(int month, int year)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		if (isLeap(year))
			return 29;
		else return 28;
		break;

	default:
		break;
	}
}
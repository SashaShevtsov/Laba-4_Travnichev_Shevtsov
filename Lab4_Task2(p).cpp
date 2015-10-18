// На входе: строка(числа в ней целые)
// На выходе: число(целое)
#include <iostream>
#include <cstring>
using namespace std;
const int MAXL = 100;


long count(char str[MAXL])
{
	bool flag = true;
	long rez = 0, len = strlen(str), num = 0, i = -1;
	do
	{
		i++;
		if (isdigit(str[i])) 
		{
			num += (int)(str[i])-48;
			num *= 10;
		}
		else 
		{
			num /= 10;
			if (flag) rez += num;
			else rez -= num;
			if ((int)(str[i]) == 43) flag = true;
			else flag = false;
			num = 0;
		}
	}
	while (i < len);
	return rez;
}

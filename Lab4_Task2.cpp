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
void assert(char* string, long answer)
{
	long firstanswer = count(string);
	if (firstanswer == answer)
		cout << "OK" << endl;
	else
		cout << "False" << endl;
}
void tests()
{
	char string1[] = "34+21-11";
	assert(string1, 44);
	char string2[] = "100-56+28-59+228";
	assert(string2, 241);
	char string3[] = "1488-322-980+3";
	assert(string3, 189);
	char string4[] = "42-67-89-76";
	assert(string4, -190);
	char string5[] = "567+321-890+2015-1945";
	assert(string5, 68);
}
int main()
{
	tests();
	return 0;
}

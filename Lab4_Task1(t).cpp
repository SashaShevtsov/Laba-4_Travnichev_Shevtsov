#include "Task1.h"
#include <iostream>
using std :: cout;
using std :: endl;

char * checkTest(char test[], char answer[])
{
    char * outputData = myString(test);
    long rez = strcmp(answer, outputData);
    if (rez == 0) return "Ok!";
    cout << endl << answer << endl << outputData << endl;
    return "Wrong answer!";
}

int main()
{
    cout << "Test #1:\t";
    cout << checkTest("aaaa258xxx", "aaaa0x102xxx") << endl;
    cout << "Test #2:\t";
    cout << checkTest("10985", "0x2AE9") << endl;
    cout << "Test #3:\t";
    cout << checkTest("abs0lut10349e345678", "abs0x0lut0x286De0x5464E") << endl;
    cout << "Test #4:\t";
    cout << checkTest("DLE234LOL98765", "DLE0xEALOL0x181CD") << endl;
    cout << "Test #5:\t";
    cout << checkTest("FINISH", "FINISH") << endl;
    system("pause");
    return 0;
}

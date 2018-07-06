#include<iostream>

#include"Mstr.h"

using namespace std;

int main()

{

	MStr str1("Hello"), str2("World");

	cout << str1 << endl;

	cout << MStr(str2) << endl;

	cout << str1 + str2 << endl;

	while (1);

}
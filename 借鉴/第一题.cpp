#include<iostream>
#include<cstring>

using namespace std;

const char *&StringCopy(char *lpszDestination, const char *lpszSource) {
	int length = strlen(lpszSource);
	//lpszDestination = new char[length + 1];
	strcpy_s(lpszDestination,length+1, lpszSource);	
	cout << "lpszDestination = " << lpszDestination << endl;		
	return lpszSource;
	}

int main() {
	const char *p;
	char a[] = "";
	char b[] = "lianghuiming";
	char *p1, *p2;
	p1 = a;
	p2 = b;
	p = StringCopy(p1, p2);
	cout << "lpszSource = " << p << endl;
	return 0;
}
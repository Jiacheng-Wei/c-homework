#include "stdafx.h"
#include "NStr.h"
#include<string.h>
#include <cstringt.h>

NStr::NStr(void)
{
	str = new char;
	str[0] = '\0';
	len = 0;
}

NStr::NStr(char s[])
{
	int size = strlen(s);
	str = new char[size + 1];
	str[size] = '\0';
	strcpy_s(str, size+1, s);
	len = size;
}

NStr::NStr(const NStr &s)
{
	len = s.len;
	str = new char[len + 1];
	str[len] = '\0';
	strcpy_s(str, len+1, s.str);
}

NStr::~NStr(void)
{
	delete	str;
}
istream & operator >>(istream & in, NStr & NS)

{
	in >> NS.str;
	NS.len = strlen(NS.str);
	return in;
}

ostream & operator <<(ostream & out, const NStr & NS)
{
	out << NS.str;
	return out;
}

const NStr  NStr::operator+(const NStr & NS)
{
	int	 newlen = len + NS.len+2;
	//char *newstr = new char[newlen + 2];
	//newstr[newlen] = '\0';
	strcat_s(str, newlen+1, NS.str);
	//strcpy(newstr + len, NS.str);
	return NStr(str);
}


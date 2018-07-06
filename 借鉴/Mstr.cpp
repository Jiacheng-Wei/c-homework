#include "Mstr.h"

#include<string.h>

MStr::MStr(void)

{

	str = new char;

	str[0] = '\0';

	len = 0;

}

MStr::MStr(char *s)

{

	int size = strlen(s);

	str = new char[size + 1];

	str[size] = '\0';

	strcpy_s(str,size, s);

	len = size;

}

MStr::MStr(const MStr &s)

{

	len = s.len;

	str = new char[len + 1];

	str[len] = '\0';

	strcpy_s(str,len, s.str);

}

istream & operator >>(istream & in, MStr & MS)

{

	in >> MS.str;

	MS.len = strlen(MS.str);

	return in;

}

ostream & operator <<(ostream & out, const MStr & MS)

{

	out << MS.str;

	return out;

}

const MStr  MStr::operator+(const MStr & MS)

{

	int	 newlen = len + MS.len;

	char * newstr = new char[newlen + 1];

	newstr[newlen] = '\0';

	strcpy_s(newstr,newlen, str);

	strcpy(newstr + len, MS.str);

	return MStr(newstr);

}

MStr::~MStr(void)

{

	delete	str;

}
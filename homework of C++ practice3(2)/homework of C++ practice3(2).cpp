// homework of C++ practice3(2).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Person.h"
#include "Cadre.h"
#include "Teacher.h"
#include "TeacherCadre.h"


int main()
{
	Person person("merry", 21, "women", "china", "123456789", 6578);
	person.show();
	Teacher teacher("merry", 21, "women", "china", "123456789", 6578, "top");
	teacher.show();
	Cadre cadre("merry", 21, "women", "china", "123456789", 6578, "principle");
	cadre.show();
	TeacherCadre teachercadre("jim", 21, "man", "US", "12356789", 6578, "top", "principle");
	teachercadre.show();
	system("pause");
	return 0;
}


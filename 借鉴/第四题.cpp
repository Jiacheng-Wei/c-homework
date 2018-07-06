#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct student {
	int num;
	char name[10];
	double grade;
};

int main() {
	int n;
	cout << "你要录入多少个学生的信息：";
	cin >> n;
	student stu[1000];
	for (int i = 0; i < n; i++) {
		cout << "第" << i + 1 << "名学生的学号：";
		cin >> stu[i].num;
		cout << "姓名："; cin >> stu[i].name;
		cout << "成绩："; cin >> stu[i].grade;
	}

	fstream file("stu.dat", ios::out | ios::binary);

	file.close();

	file.open("stu.dat", ios::in | ios::out | ios::binary);

	if (file.fail()) {
		cout << "打开文件失败！" << endl;
		exit(1);
	}

	file.write((char*)&stu[0], sizeof(stu));
	
	file.close();

	file.open("stu.dat", ios::in | ios::out | ios::binary);
	file.read((char*)&stu[0], sizeof(stu));

	for (int i = 0; i < n; i++) {
		cout << stu[i].num << " " << stu[i].name << " " << stu[i].grade << endl;
	}
	file.close();
	return 0;
}

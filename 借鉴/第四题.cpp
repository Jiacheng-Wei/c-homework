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
	cout << "��Ҫ¼����ٸ�ѧ������Ϣ��";
	cin >> n;
	student stu[1000];
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << "��ѧ����ѧ�ţ�";
		cin >> stu[i].num;
		cout << "������"; cin >> stu[i].name;
		cout << "�ɼ���"; cin >> stu[i].grade;
	}

	fstream file("stu.dat", ios::out | ios::binary);

	file.close();

	file.open("stu.dat", ios::in | ios::out | ios::binary);

	if (file.fail()) {
		cout << "���ļ�ʧ�ܣ�" << endl;
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

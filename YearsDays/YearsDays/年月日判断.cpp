#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main(void) {
	/*
�����2�·���29��
��ͨ����: �ܱ�4���������ܱ�100���������Ϊ
��������: �ܱ�400����
*/
	int year;
	int month;
	bool flag;
	int day;
	cout << "��һ�꣺" << endl;
	cin >> year;
	cout << "�·ݶ��٣�" << endl;
	cin >> month;
	if (year % 400 == 0)
	{
		flag = true;
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		flag == true;
	}
	else
	{
		flag == false;
	}
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 2:
		day = flag ? 29 : 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default:
		cout << "��Ч�·�" << endl;
		break;
	}
	cout << year << "��" << month << "��һ����" << day << "��" << endl;
	system("pause");
	return 0;
}
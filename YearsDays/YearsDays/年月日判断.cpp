#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main(void) {
	/*
闰年的2月份有29天
普通闰年: 能被4整除但不能被100整除的年份为
世纪闰年: 能被400整除
*/
	int year;
	int month;
	bool flag;
	int day;
	cout << "那一年：" << endl;
	cin >> year;
	cout << "月份多少；" << endl;
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
		cout << "无效月份" << endl;
		break;
	}
	cout << year << "年" << month << "月一共有" << day << "天" << endl;
	system("pause");
	return 0;
}
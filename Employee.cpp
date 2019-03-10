//file: Employee.cpp under project1
#include<iostream>
#include "Employee.h"

using namespace std;

int main()
{

	Employee A("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee B("Mark Jones", 39119, "IT", "Programmer");
	Employee C("Joy Rogers", 81774, "Manufacturing", "Enginner");
	cout << "Employee one:\t" << A.getName() << endl;
	cout << "\tID Number:\t" << A.getIdNumber() << endl;
	cout << "\tDepartment\t:" << A.getDepartment() << endl;
	cout << "\tPosition:\t" << A.getPosition() << endl;

	cout << "Employee two:\t" << B.getName() << endl;
	cout << "\tID Number:\t" << B.getIdNumber() << endl;
	cout << "\tDepartment\t:" << B.getDepartment() << endl;
	cout << "\tPosition:\t" << B.getPosition() << endl;

	cout << "Employee three:\t" << C.getName() << endl;
	cout << "\tID Number:\t" << C.getIdNumber() << endl;
	cout << "\tDepartment\t:" << C.getDepartment() << endl;
	cout << "\tPosition:\t" << C.getPosition() << endl;
	getchar();
	return 0;
}

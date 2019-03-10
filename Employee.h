//file: Employee.h

#pragma once

#include <string>
using namespace std;

class Employee
{
	private:
	int idNumber;
	string name,department,position;

	public:
	Employee(string n,int id,string dep,string pos)
	{
		name = n;
		idNumber = id;
		department = dep;
		position = pos;
	}
	Employee(string n,int id)
	{
		name = n;
		idNumber = id;
	}
	Employee()
	{
		idNumber = 0;
		name = department = position = "";
	}
	//mutators:
	void setName(string n)
	{
		name = n;
	}
	void setDepartment(string d)
	{
		department = d;
	}
	void setPosition(string p)
	{
		position = p;
	}
	void setIdNumber(int id)
	{
		idNumber = id;
	}
	//accessors
	string getName()
	{
		return name;
	}
	string getPosition()
	{
		return position;
	}
	string getDepartment()
	{
		return department;
	}
	int getIdNumber()
	{
		return idNumber;
	}
};

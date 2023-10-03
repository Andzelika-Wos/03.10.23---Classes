#pragma once
#include <iostream>
using namespace std;

class person
{
private:
	string name, surname;
	int age;

public:
	person(string newName, string newSurname, int newAge)
	{
		name = newName;
		surname = newSurname;
		age = newAge;
	}

	string getName()
	{
		return name;
	}
	string getSurname()
	{
		return surname;
	}
	int getAge()
	{
		return age;
	}

	void setName(string newName)
	{
		name = newName;
	}
	void setSurname(string newSurname)
	{
		surname = newSurname;
	}
	void setAge(int newAge) 
	{
		age = newAge;
	}

	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
	}

	void print(string name) 
	{
		cout << "Name: " << name << endl;
	}

	bool operator==(const person& p2) 
	{
		return (age == p2.age);
	}

	int compareTo(const person& p2)
	{
		int compare = -2;

		if (age < p2.age) 
		{
			compare = -1;
		}
		
		else if (age == p2.age) 
		{
			compare = 0;
		}
		else 
		{
			compare = 1;
		}

		return compare;
	}

};

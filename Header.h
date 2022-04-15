#ifndef PANEL_H
#define PANEL_H

#include <iostream>;
using namespace std;

class Student
{
	string Name;
	string Lastname;
	int age = 0;
public:
	Student(string Name, string Lastname, int age)
	{
		this->Name = Name;
		this->Lastname = Lastname;
		this->age = age;
	}

	bool operator == (const Student & obj)
	{
		return (this->Name == obj.Name) && (this->Lastname == obj.Lastname) && (this->age == obj.age);
	}

	Student& operator = (const Student& obj)
	{
		 this->age = obj.age;
		 this->Name = obj.Name;
		 this->Lastname = obj.Lastname;
		 return *this;
	 }
	friend ostream& operator << (ostream& os, const Student& obj);
	friend istream& operator >> (istream& is, Student& obj);
};

ostream& operator << (ostream& os, const Student& obj)
{
	os << "Имя : " << obj.Name << endl << "Фамилия : " << obj.Lastname << endl << "Возраст : " << obj.age << endl;
	return os;
}

istream& operator >> (istream& is, Student& obj)
{
	is >> obj.Name >> obj.Lastname >> obj.age ;
	return is;
}

#endif

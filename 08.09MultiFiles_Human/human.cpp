#include "human.h" // файл реализации
#include <iostream>
using namespace std;

Human::Human()
{
	name = surname = nullptr;
	age = 0;
}

Human::Human(const char* n, const char* s, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);

	age = a;
}

Human::~Human()
{
	delete[] name;
	delete[] surname;
}

void Human::Input()
{
	char buffer[100];
	cout << "Enter name: ";
	cin.getline(buffer, 100);
	SetName(buffer);

	cout << "Enter surname: ";
	cin.getline(buffer, 100);
	SetSurname(buffer);

	cout << "Enter age: ";
	cin >> age;
	cin.ignore();
}

void Human::Print()
{
	cout << "Name: " << name << 
		"Surname: " << surname
		<< "Age: " << age << endl;
}

char* Human::GetName()
{
	if (name != nullptr)
		return name;
	else
		cout << "nothing...";
}

char* Human::GetSurname()
{
	if (surname != nullptr)
		return surname;
	else
		cout << "nothing...";
}

int Human::GetAge()
{
	if (age != 0)
		return age;
	else
		cout << "nothing...";
}

void Human::SetName(const char* n)
{
	if (name != nullptr)
		delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Human::SetSurname(const char* s)
{
	if (surname != nullptr)
		delete[] surname;
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
}

void Human::SetAge(int a)
{
	age = a;
}

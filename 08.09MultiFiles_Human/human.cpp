#include "human.h" // файл реализации
#include <iostream>
using namespace std;

Human::Human()
{
	name = surname = nullptr;
	age = 0;
	cout << "Constructor" << endl;
}

Human::Human(const char* n, const char* s, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
}

Human::~Human()
{
}

void Human::Input()
{
}

void Human::Print()
{
}

char* Human::GetName()
{
	return nullptr;
}

char* Human::GetSurname()
{
	return nullptr;
}

int Human::GetAge()
{
	return 0;
}

void Human::SetName(const char* n)
{
}

void Human::SetSurname(const char* s)
{
}

void Human::SetAge(int a)
{
}

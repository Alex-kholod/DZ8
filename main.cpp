#include "Header.h";

int main()
{
	setlocale(LC_ALL, "RUS");
	Student g("","",0);
	Student a("Alex", "Ivanov", 12);
	Student b("Ivan", "Ivanov", 15);
	bool result = a == b;
	cout << result << endl;

	a = b;
	cout << a;

	cout << "¬ведите данные студента " << endl;
	cin >> g;
	cout << g;
}
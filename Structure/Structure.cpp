#include <iostream>
#include <Windows.h>

using namespace std;

struct Bank
{
	int _number;
	string _name;
	double _money;
};

void Change_balance(Bank &p)
{
	cin >> p._money;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Bank p;
	cout << "Введите номер счёта: ";
	cin >> p._number;
	cout << "Введите имя владельца: ";
	cin >> p._name;
	cout << "Введите баланс: ";
	cin >> p._money;
	cout << "Введите новый баланс: ";
	Change_balance(p);
	cout << "Вас счет: " << p._name << ", " << p._number << ", " << p._money;
}

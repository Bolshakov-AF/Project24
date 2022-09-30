#include <iostream>
#include "VendingMachine.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	IChocolateBar* snack[3];

	snack[0] = new Bounty(484, string ("45.50 руб\t"));
	snack[1] = new Snickers(488, string ("50.50 руб\t"));
	snack[2] = new Mars(455, string ("49.99 руб\t"));
	
	bool open = true;
	while (open)
	{
		cout << "Выберите продукт : 1 - Баунти, 2 - Сникерс, 3 - Марс, 0 чтобы выйти" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			snack[0]->Show();
			break;
		case 2:
			snack[1]->Show();
			break;
		case 3:
			snack[2]->Show();
			break;		
		case 0:
			open = false;
			break;

		default:
			cout << "Выберите продукт от 1 до 3 или 0, чтобы выйти" << endl;
			break;

		}
	}
	delete snack[0];
	delete snack[1];
	delete snack[2];
	
	return 0;
}

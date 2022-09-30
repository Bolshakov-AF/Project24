#include "VendingMachine.h"


VendingMachine::VendingMachine(int calories) : _calories(calories)
{

}

void VendingMachine::Show()
{
	cout << "Basic chocolate calories: " << _calories << endl;
}

Bounty::Bounty(int calories, string price) : VendingMachine(calories), _price(price)
{

}

void Bounty::Show()
{
	cout << _price << "Bounty, calories 100g: " << _calories << endl;
}

Snickers::Snickers(int calories, string price) : VendingMachine(calories), _price(price)
{

}

void Snickers::Show()
{
	cout << _price <<"Snickers, calories 100g: " << _calories << endl;
}

Mars::Mars(int calories, string price) : VendingMachine(calories), _price(price)
{

}

void Mars::Show()
{
	cout << _price << "Mars, calories 100g: " << _calories << endl;
}

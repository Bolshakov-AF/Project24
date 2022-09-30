#pragma once
#include "IChocolateBar.h"

class VendingMachine : public IChocolateBar
{
public:
	VendingMachine(int calories);

	void Show() override;
protected:
	int _calories;
};

class Bounty final : public VendingMachine
{
public:
	Bounty(int calories, string price);
	void Show() override;
private:
	string _price;
};

class Snickers final : public VendingMachine
{
public:
	Snickers(int calories, string price);

	void Show() override;
private:
	string _price;
};

class Mars final : public VendingMachine
{
public:
	Mars(int calories, string price);

	void Show() override;
private:
	string _price;
};



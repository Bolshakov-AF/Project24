#pragma once
#include<iostream>
using namespace std;

class IChocolateBar
{
public:
	virtual void Show() = 0;
	virtual ~IChocolateBar() = default;
};

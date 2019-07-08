#include "arraymax.h"
#include <iostream>


arraymax::arraymax(int n[])
{
	for (int x = 0; x < 10; x++)
	{
		num[x] = n[x];
	}
}


arraymax::~arraymax()
{
}

int arraymax::getmax()
{
	int max = num[0];
	for (int x = 1; x < 10; x++)
	{
		if (num[x] > max) max = num[x];
	}
	return max;
}
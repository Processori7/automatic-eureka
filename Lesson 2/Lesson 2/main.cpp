#include "pch.h"
#include "iostream"
#include <ctime>


using namespace std;

int main()
{
	int ans, start, end, x, i=0;

	while (true)
	{
		cout << "Try to guess the number! Enter your answer! Enther 0 - exit:" << endl;
		cin >> ans;
		start = 1;
		end = 10;
		x = rand() % (end - start + 1) + start;
		if (ans == x) 
		{
			for (; ans <end; ans ++) 
			{
				cout << "Good! You win! Attempts: " << i << endl;
				i = 0;
			}
		}
		else if (ans == 0) 
		{
			return 0;
		}
		else 
		{
			cout << "Try again! The number was: "<< x << endl;
			i = i + 1;
		}
	}
}

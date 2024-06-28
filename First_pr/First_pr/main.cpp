#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int age;
	cout << "Your name:\n" << endl;
	cin >> name;
	cout << "Hello, " + name + "!" + " How old are you? Please write)\n" << endl;
	cin >> age;
	cout << "Good! So, your name: " + name + "and your age: " + to_string(age) << endl;
	cout <<"Press any key to continue...";
	cin.get();
	return 0;
}

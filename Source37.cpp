#include <iostream>
using namespace std;
int main()
{
	//Programm to calculate average value
	int sum = 0;
	int massive[6] = {};
	cout << "Enter numbers" << endl;
	for (int i = 0; i < 7; i++)
	{
		cin >> massive[i];
		sum = sum + massive[i];
	}
	sum = sum / 7;
	cout << "your average  is = " << sum;

	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	// program to cin and cout all needed elements of the array
	int massive[3] = {};
	int i;
	for (int t = 0; t < 4; t++)
	{
		cout << "enter the index of your element = " << endl;
		cin >> i;
		cout << "enter the number = " << endl;
		cin >> massive[i];
		
	}
	cout << "elements of your array are :";
	for (int r=0;r<4;r++)
	cout << massive[r] << " ";
	return 0;
}
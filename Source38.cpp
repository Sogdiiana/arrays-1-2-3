#include <iostream>
using namespace std;
int main()
{
	int arr2d[2][2] = { {} };
	int sum=0;
	cout << "enter all entries of 2D array :"<< endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			cin >> arr2d[i][t];
			sum = sum + arr2d[i][t];
		}
		
		
	}
	cout << "\n\n";
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			cout <<arr2d[i][t] << " ";
		}
		cout << endl;

	}
	cout << "The sum of entries is equal to  " << sum;

	


	return 0;
}

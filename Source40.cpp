#include <iostream>
using namespace std;
int main()
{
	int arr2d[2][2] = { {} };
	
	cout << "enter all entries of 2D array :" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			cin >> arr2d[i][t];
			
		}


	}
	cout << "\n\n";
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			cout << 10*(arr2d[i][t]) << " ";
		}
		cout << endl;

	}
	



	return 0;
}

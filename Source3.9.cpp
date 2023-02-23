#include <iostream>
using namespace std;
int main()
{
	int arr2d[3][3][1] ;
	cout << "Enter all entries of 3D array :"<< endl;

	for (int i = 0; i < 3; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			for (int y = 0; y < 1; y++)
			{
				cin >> arr2d[i][t][y];
			}
		}


	}
	cout << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int t = 0; t < 3; t++)
		{

			for (int y = 0; y < 1; y++)
			{
				cout << 10 * (arr2d[i][t][y]) << " ";
			}
		}
		cout << endl;
	}
	




	return 0;
}

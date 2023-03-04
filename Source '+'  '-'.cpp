#include <iostream>
using namespace std;
int main()
{
	int arr21[2][2] = { {1,2},{1,2} };
	int arr22[2][2] = { {0,1},{1,1} };
	int summ2[2][2] = { {},{} };
	int raz2[2][2] = { {},{} };
	int arr31[2][2][2] = { {{1,1},{1,2}},{{1,1},{2,1}} };
	int arr32[2][2][2] = { {{2,2},{1,2}},{{0,0},{1,0}} };
	int summ3[2][2][2] = { {{},{}},{{},{}} };
	int raz3[2][2][2] = { {{},{}},{{},{}} };

	cout << "your sum of 2d arrays is equal to  :" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			summ2[i][t] = arr21[i][t] + arr22[i][t];
			cout << summ2[i][t] << " ";
		}
		cout << endl;
	}

	cout << "your difference of 2d arrays is equal to  :" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			raz2[i][t] = arr21[i][t] - arr22[i][t];
			cout << raz2[i][t] << " ";
		}
		cout << endl;
	}

	cout << "your sum of 3d arrays is equal to :" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			for (int y = 0; y < 2; y++)
			{
				raz3[i][t][y] = arr31[i][t][y] + arr32[i][t][y];
				cout <<" "<< raz3[i][t][y] << " ";
			}
			cout << endl;
		}
	}

	cout << "your difference of 3d arrays is equal to :" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			for (int y = 0; y < 2; y++)
			{
				raz3[i][t][y] = arr31[i][t][y] - arr32[i][t][y];
				cout << " "<<raz3[i][t][y] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
#include <iostream>
using namespace std;


int main()
{
	int arr21[2][2] = { {1,1},{2,2} };
	int arr22[2][2] = { {3,3},{4,4} };
	int arr23[2][2] = { {5,5},{6,6} };
	int arr24[2][2] = { {7,7},{9,9} };
	int arr25[2][2] = { {1,2},{3,4} };
	int arr31[2][2][2] = { { {5,6},{7,8} } ,{ {9,8}, {7,6}} };
	int arr32[2][2][2] = { { {6,5},{5,4} } ,{ {4,3}, {3,2}} };
	int arr33[2][2][2] = { { {2,1},{1,3} } ,{ {1,4}, {1,5}} };
	int arr34[2][2][2] = { { {1,6},{1,7} } ,{ {1,8}, {1,9}} };
	int arr35[2][2][2] = { { {2,3},{3,4} } ,{ {3,6}, {3,8}} };

	double arr2sr[2][2] = { {},{} };
	double arr3sr[2][2][2] = { {{},{}},{{},{}} };
	cout << "average of 5 '2d' arrays is : "<< endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			arr2sr[i][t] = (arr21[i][t] + arr22[i][t] + arr23[i][t] + arr24[i][t] + arr25[i][t]) / 5;
			cout << arr2sr[i][t] << " ";
		}
		cout << endl;
	}
	cout << "average of 5 '3d' arrays is : "<< endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			for (int r = 0; r < 2; r++)
			{
				arr3sr[i][t][r] = (arr31[i][t][r] + arr32[i][t][r] + arr33[i][t][r] + arr34[i][t][r] + arr35[i][t][r]) / 5;
				cout << arr3sr[i][t][r] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

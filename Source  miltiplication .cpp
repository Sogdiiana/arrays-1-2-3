#include <iostream> // program to calculate arr1 * arr2
using namespace std;
int main()
{
	int arr1[2][2] = { {2,3},{4,5} };
	int arr2[2][2] = { {5,6},{7,8} };
	int multi[2][2] = { {},{} };
	cout << "First array is :" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			cout << arr1[i][t] << " ";
		}
		cout << endl;
	}
	cout << "Second array is :" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			cout << arr2[i][t] << " ";
		}
		cout << endl;
	}
	cout << "their multiplication is equal to :" << endl;
	multi[0][0] = (arr1[0][0] * arr2[0][0])+(arr1[0][1]*arr2[1][0]);
	multi[0][1] = (arr1[0][0] * arr2[0][1])+(arr1[0][1]*arr2[1][1]);
	multi[1][0] = (arr1[1][0] * arr2[0][0])+(arr1[1][1]*arr2[1][0]);
	multi[1][1] = (arr1[1][0] * arr2[0][1])+(arr1[1][1]*arr2[1][1]);
	for (int i = 0; i < 2; i++)
	{
		for (int t = 0; t < 2; t++)
		{
			cout << multi[i][t] << " ";
		}
		cout << endl;
	}

	return 0;
}
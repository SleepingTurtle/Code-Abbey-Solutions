#include <iostream>

using namespace std;

int sum(int x, int y)
{
	int addition = 0;
	addition = x + y;

	return addition;
}

int main()
{
	int counter = 0;
	cout << "Enter the counter: ";
	cout << "\n";
	cin >> counter;

	int array1[counter][2];
	cout << "Enter a 2x2 array of " << counter <<": " << endl;
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < counter; j++)
		{
			cin >> array1[i][j];
			cout << "\n" << array1[i][j] << "\n";
		}

	cout << "\n" << sum(1,7) << endl;


	return 0;

}
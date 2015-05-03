#include <iostream>

using namespace std;

int main()
{
	int counter = 0;
	cout << "Enter a counter: " << endl;
	cin >> counter;

	int loop[counter];
	int sum = 0; 	
	cout << "Enter an array of numbers: "
	for(int i = 0; i < counter; i++)
	{
		cin >> loop[i];
		sum += loop[i];
	}

	cout << sum << endl;

	return 0;
}
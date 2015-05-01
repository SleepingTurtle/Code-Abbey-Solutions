#include <iostream>

using namespace std;

int main()
{
	int loop = 0;
	cout << "Enter the loop counter";
	cin >> loop;
	
	int n = 1;
	int x = 0;
	int sum = 0;

	while(n <= loop)
	{
		cout << "Please enter numbers until I tell you to stop: ";
		cin >> x;
		sum += x;
		cout << "You entered in " << n << "numbers so far.";
		n++;
	}

	if(n == loop)
		cout << "\nStop";
	cout << sum;
}
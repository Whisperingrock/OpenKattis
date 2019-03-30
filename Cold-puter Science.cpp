//Connor Wilson

#include <iostream>

using namespace std;


int main() {

	
	int size = 0;
	int count = 0;
	int temp = 0;

	cin >> size;

	for (int i = 0; i <= size - 1; i++)
	{
		cin >> temp;
		if (temp < 0)
			count++;
	}

	cout << count;

	system("PAUSE");
	return 0;
}

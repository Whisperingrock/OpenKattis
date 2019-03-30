//Connor Wilson

#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>

const int N = 3; //Number  of cups

void swap(int arr[], const int N, char test )
{
	int dum = 0;

	switch (test)
	{
	case 'A': 
		{
		dum = arr[0];
		arr[0] = arr[1];
		arr[1] = dum;
			break;
		}

	case 'B':
		{
		dum = arr[1];
		arr[1] = arr[2];
		arr[2] = dum;
			break;

		}

	case 'C': 
		{
		dum = arr[0];
		arr[0] = arr[2];
		arr[2] = dum;
			break;

		}
	default: break;
	}
}

int main() 
{
	char storage[50] = { 0 };	 //input of user switches
	int pos[N] = { 0 };			 // Position of marble
	pos[0] = 1;					 //Starting position of marble

	std::cin >> storage;

	for (int i = 0; i < 50; i++)
		swap(pos, N, storage[i]);
	
	for (int j = 0; j < N; j++)
	{
		if (pos[j] == 1)
			std::cout << j +1;
	}

	//system("PAUSE");
	return 0;
}

//Connor Wilson


#include <iostream>
# include <iomanip>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int array[5][4] = { 0 };
	int sum[5] = { 0 };
	int highest = sum[0];

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			cin >> array[x][y];
			sum[x] += array[x][y];

		}
	}

	
A:
	for (int i = 0; i < 4; i++)
	{
			
			goto A;
		
	}


	
	system("PAUSE");
	return 0;
}

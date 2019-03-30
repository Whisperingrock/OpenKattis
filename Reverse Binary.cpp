//Connor Wilson


#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n = 0;
	int index[30] = { 0 };
	cin >> n;

	for (int i = 29; i > 0; i--)
	{
		if (n >= pow(2, i))
		{
			n -= pow(2, i);
			index[i]++;
		}
	}

	for (int j = 0; j <= 29; j++)
		cout << index[j];


	system("PAUSE");
	return 0;
}

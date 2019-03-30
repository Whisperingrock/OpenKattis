//Connor Wilson

#include <iostream>
#include <iomanip>
#include <math.h>

int main() 
{
	double x = 2, n = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
		x =  x + pow(2, i-1);

	std::cout << std::setprecision(13) << pow(x, 2);
	
	system("PAUSE");
	return 0;
}

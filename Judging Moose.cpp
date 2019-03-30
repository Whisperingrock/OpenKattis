//Connor Wilson

#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>

int main() 
{
	int l = 0, r = 0, sum = 0;

	std::cin >> l >> r;

	sum = l + r;

	if (sum == 0)
		std::cout << "Not a moose";
	else if (l == r)
		std::cout << "Even " << sum;
	else
	{
		if (l > r)
			std::cout << "Odd " << 2 * l;
		else 
			std::cout << "Odd " << 2 * r;
	}
	

	system("PAUSE");
	return 0;
}

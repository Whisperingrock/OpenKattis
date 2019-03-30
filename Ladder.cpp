//Connor Wilson

#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>

using namespace std;

int main() 
{
	const double pi = 3.14159265359;
	double v = 0, h = 0;

	cin >> h >> v;

	v = v * (pi / 180);

	cout << ceil( h / sin(v) ) ;
	

	system("PAUSE");
	return 0;
}

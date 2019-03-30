#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  
	double seed = 0;
	double lawns = 0;
	double width = 0;
	double length = 0;
	double area = 0;

	cin >> seed >> lawns;

	for (int i = 1; i <= lawns; i++)
	{
		cin >> width >> length;
		area += (width * length);
	}

	cout << setprecision(8) << fixed << seed * area;

	//system("PAUSE");
	return 0;
}

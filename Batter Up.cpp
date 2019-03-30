//Connor Wilson

#include <iostream>
#include <iomanip>

using namespace std;


int main() 
{
	double size = 0;
	double data = 0;
	int dum = 0;
	int count = 0;
	cin >> size;

	for (int i = 1; i <= size; i++ )
	{
		cin >> dum;

		if (dum < 0)
		{
			count++;
			continue;
		}
		else
		data += dum;
	}

	cout << data / (size - count);

	system("PAUSE");
	return 0;
}

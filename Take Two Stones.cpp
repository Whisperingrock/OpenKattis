//Connor Wilson


#include <iostream>
#include <math.h>



using namespace std;

int main() {

	int stone = 0;
	cin >> stone;

	while (stone > 1)
		{
		stone = stone - 2;
		}


	if (stone == 1)
		{
			cout << "Alice";
		}
	else 
		{
		cout << "Bob";
		}


	return 0;
}
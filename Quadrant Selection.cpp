//Connor Wilson


#include <iostream>
#include <math.h>


using namespace std;

int main() {

	double x = 0;
	double y = 0;

	cin >> x;
	cin >> y;

	if(x < 0 && y < 0)
		{
			cout << "3";
		}
	else if(x > 0 && y < 0)
		{
			cout << "4";
		}
	else if(x < 0 && y > 0)
		{
			cout << "2";
		}
	else if(x > 0 && y > 0)
		{
			cout << "1";
		}


	return 0;
}
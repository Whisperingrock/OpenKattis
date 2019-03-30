
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() {

	int H ;		//Hour value (24 hour interval)
	int M ;		//Minute value 

	cin >> H;
	cin >> M;

	cout << endl;

	if (M < 45)				// Removing the next hour if insufficient minutes
		{

		M = M + 15;
		H--; 

		}
	else 
		{

		M = M - 45;

		}

	if (H < 0) { H = H + 24; }		// If zero hour, revert to previous day

	cout << H << " " << M << endl;

	system("PAUSE");


	return 0;
}

#include <iostream>
#include <math.h>

using namespace std;


int main(){

	int mega; // megabytes per month
	cin >> mega;
	int N; // initial number of months
	cin >> N;

	int dum = N;

	int x = 0; //total monthly usuage

	while (dum--) {
		int m;
		cin >> m;
		x += m;



	}

	int total1 = mega*N;  // total availible data vs. used data plus another month.

	int total2 = total1 - x + mega;

	cout <<  total2 << endl;

	

	return 0;

}
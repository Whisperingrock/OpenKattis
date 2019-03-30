// V1 Pots on OpenKattis


#include <iostream>
#include <math.h>


using namespace std; 



int main() {

	

		int n;

		cin >> n;
		long x = 0;  // long = 8 byte integer, x is the total
		while (n--) { // while n is decreasing to 0
			int p;
			cin >> p;
			x += pow(p / 10, p % 10);  // (x = x + pow) ---> +=, % modulo of p
		}
		cout << x << endl;
	

	return 0;

 }

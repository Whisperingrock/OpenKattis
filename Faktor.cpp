//Connor Wilson


#include <iostream>
#include <math.h>


using namespace std;

int main() {

	int A;
	int I;
	cin >> A;
	cin >> I;

	int dummy = A*I;

	int C = (dummy - A) + 1;

	cout << C << endl;

	return 0;
}
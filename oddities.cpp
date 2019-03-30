//Connor Wilson


#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>

using namespace std;




int main() {

	int n;
	cin >> n;

	vector<int> num(n);

	int store;
	
	for (int i = 0; i < num.size(); i++) 
		{
		cin >> store; 
		num[i] = store;
		}

	for (int i = 0; i < num.size(); i++)
		{
		
		int dum = num[i] % 2;
		if (dum == 0)
			{
			cout << num[i] << " is even\n";
			}
		else {cout << num[i] << " is odd\n"; }
		}



	return 0;
}

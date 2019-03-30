//Connor Wilson


#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>

using namespace std;




int main() {

	int n = 0;
	cin >> n;

	vector<int> num(n);
	for (int i = 0; i < num.size(); i++)
		{
		int r, e, c;
		cin >> r >> e >> c;
		int adv = e - c;

		if( adv > r )
			{
			cout << "Advertise \n";
			}

		else if (adv == r)
			{
			cout << "Does not matter \n";
			}

		else {cout << "Do not advertise \n";}


		}

	system("PAUSE");


	return 0;
}

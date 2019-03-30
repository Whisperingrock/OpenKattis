//Connor Wilson


#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
	int room = 0;
	int l = 0;
	int w = 0;
	int hyp = 0;
	int guess = 0;

	cin >> room >> l >> w;

	vector <string> answer(room);

	hyp = sqrt((l*l) + (w*w));

	//cout << hyp << endl << endl;

	for (int i = 0; i < room; i++)
	{
		cin >> guess;
		if (guess <= l || guess <= w || guess <= hyp)
			answer[i] =  "DA";
		else
			answer[i] =  "NE";

	}

	for (int j = 0; j < room; j++)
		 cout << answer[j] << endl;
	
		
	system("PAUSE");
	return 0;
}

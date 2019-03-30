//Connor Wilson


#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
	int count = 0;;
	int n = 0;
	cin >> n;
	vector<int> storage; 

	while (n != -1)
	{
		int sum = 0;
		vector<int> mile(n+1);
		vector<int> time(n+1);
		time[0] = 0;
		mile[0] = 0;

		for (int i = 1; i <= n; i++)
		{
			cin >> mile[i] >> time[i];
			sum += mile[i] * (time[i] - time[i - 1]);
		}
		storage.push_back(sum);
		count++;
		cin >> n;
	}
	for (int j = 0; j < count; j++)
	{
		cout << storage[j] << " miles" << endl << endl;
	}

	system("PAUSE");
	return 0;
}

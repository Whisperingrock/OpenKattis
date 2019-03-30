//Connor Wilson


#include <iostream>
# include <iomanip>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;



int main()
{
	string alldata;
	getline(cin, alldata);

	istringstream sep(alldata);
	string transfer;
	vector <string> word;

	int count = 0;

	while (sep >> transfer) 
	{
		word.push_back(transfer);
		//word.push_back(0);

	}
	

	for (int i = 0; i < word.size(); i++)
	{
		for (int j = i + 1; j < word.size(); j++)
		{
			if (word[i] == word[j])
				count++;
		}
	}
	 
	//cout << count << endl;
	if (count > 0)
		cout << "no";
	else cout << "yes";


	/*for (int i = 0; i < word.size(); i++)
	{
		cout << word[i] << " |" << endl;
	}
	*/

	system("PAUSE");
	return 0;
}

//Connor Wilson

#include <iostream>
#include <string>

int main() 
{
	int dum = 0;
	std::string t;
	std::cin >> t;

	for (int i = 0; i < t.length(); i++)
		if (t[i] == 's')
			if (t[i] == t[i + 1])
				dum++;

	if (dum == 0)
		std::cout << "no hiss";
	else
		std::cout << "hiss";
		


	system("PAUSE");
	return 0;
}

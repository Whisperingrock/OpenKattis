//Connor Wilson

#include <iostream>
#include <math.h>

const int N = 4;

void entry( int d, int arr[], const int n)
{
	int t = d;
	int dum = 0;

	for (int i = n; i >= 0; i--)
	{
		
		dum = t / pow(10, i);
		t = t - (dum * pow(10, i));
		arr[i] = dum;
	}
}

void print( int ar[], const int k)
	{
		for (int i = k; i >= 0; i--)
		std::cout << ar[i] << "   " ;
	}

void min(int sum, int mini, int a[], const int n)
{
	int check = 0;
	int num = 0;
	int dum = mini; //dum = L
	for (int i = 0; i <= n; i++)
		check = check + a[i]; 

	//std::cout << check << std::endl;

	while (check != sum)
	{
		check = 0;
		dum = dum + 1;
		entry(dum, a, n);
		//print(a, n);
		//std::cout << std::endl;
	
		for (int i = 0; i < n; i++)
			check = check + a[i];
	}

	for (int i = n; i >= 0; i--)
		num = num + (a[i]* pow(10, i));
	std::cout << num;
}

void max(int sum, int max, int a[], const int n)
{
	int fum = 0;
	int check = 0;
	int dum = max; //dum = L
	for (int i = 0; i <= n; i++)
		check = check + a[i];

	//std::cout << check << std::endl;


	while (check != sum)
	{
		check = 0;
		dum = dum - 1;
		entry(dum, a, n);
		//print(a, n);
		//std::cout << std::endl;

		for (int i = 0; i < n; i++)
			check = check + a[i];

	}

	for (int i = n; i >= 0; i--)
		fum = fum + (a[i] * pow(10, i));
	std::cout << fum;
}

int main() 
{
	

	int L = 0;
	int D = 0;
	int x = 0;
	int low[] = { 0,0,0,0,0 };
	int high[] = { 0,0,0,0,0 };

	std::cin >> L >> D >> x;
	
	entry(L, low, N);
	entry(D, high, N);

	
	//std::cout << std::endl;
	//print(low, N);
	//std::cout << std::endl;
	//print(high, N);
	//std::cout << std::endl;

	

	min(x, L, low, N);
	std::cout << std::endl;
	max(x, D, high, N);
	std::cout << std::endl;
	

	system("PAUSE");
	return 0;
}

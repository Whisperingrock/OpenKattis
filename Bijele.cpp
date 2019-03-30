//Connor Wilson

#include <iostream>

using namespace std;


int main() 
{
	// 1K 1Q 2R 2B 2K 8P
	int king = 0;
	int queen = 0;
	int rook = 0;
	int bishop = 0;
	int knight = 0;
	int pawn = 0;
	
	cin >> king >> queen >> rook >> bishop >> knight >> pawn;

	cout << 1 - king << " " << 1 - queen << " " << 2 - rook << " " << 2 - bishop << " " << 2 - knight << " " << 8 - pawn << endl;

	system("PAUSE");
	return 0;
}

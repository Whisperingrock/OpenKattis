/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>

using namespace std;





int main ()
{
  
  int N, M, Tot;
  
  cout << "ENTER the number of dice and the face: " << endl;
  
  cin >> N >> M;
  
  
  
  
  
  int V1 = rand() % M + 1;
  
  Tot = N * V1;
  
  cout << endl << "Probablilty: " << Tot;
  
  cout << endl << V1 << endl;
  
 
 
 
 
 
  
  system("PAUSE");
  
  return 0;
}

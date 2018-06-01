#include <iostream>
int test(int in); // Funkionsdeklaration
		   // in och utvärden defineras

using namespace std;
int main()
{
  int i = 5;
  int j = test(i);
  cout << j << endl; 
  
  
  return 0;
}
// Funktionsdefinition
// "Vad funktionen ska göra"
int test(int in)
{
  int utvarde = in + 6;
  return utvarde; 
}

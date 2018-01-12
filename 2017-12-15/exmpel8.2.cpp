#include <iostream> 
using namespace std;
int main()
{
  int start, slut, steg;
  
  cout << "Start: "; cin >> start;
  cout << "Slut: "; cin >> slut;
  cout << "Steg: "; cin >> steg;
  
  for ( int n = start ; n < slut ; n = n + steg )
  {
    cout << n << ' ';
    
  }
  
      return 0;
}
 
 
 

/*antalet råttor i ikattbo komun är för närvarande 100st
 * Antalet fördubbls varje månad. Hur många månader tar det innan 
 * antalet råttor uppnått 1 miljon 
 */

#include <iostream>
using namespace std;
int main()
{ 
  const int MAX_ANTAL = 1000000;
  int antal = 100;
  int antal_manader = 0;
  while (antal < MAX_ANTAL)
  {
    antal_manader++;
    antal = antal * 2;
    
    
  }
  
  cout << "Efter " << antal_manader << " hela månader är antalet råttor " << endl;
      return 0;
}
  
 

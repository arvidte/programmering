// Arvid Ahlborg uppgift 4
#include <iostream>
using namespace std;

int main()
{

  cout << "Mata in timmar, minuter och sekunder. Använd heltal." << endl;
  int tim;
  int min; 
  int sek;
  cin >> tim;
  cin >> min;
  cin >> sek;
  
  int sekunder = sek % 60;
  int minuter = min % 60 + sek / 60;
  int timmar = tim + min / 60;
  
  
  
  cout << timmar  << "   " << minuter << "  " << sekunder << endl;
  
  
  
  
  
  return 0;
}
 
 

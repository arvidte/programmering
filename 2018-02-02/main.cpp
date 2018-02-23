#include <iostream>
using namespace std;
int main()
{
  // fält
  // datatyp namn[storlek]
  double tid[5];
  // int i=0 Startvärde
  // i++ i=i+1
  for (int i=0, j=0; i<5; i++, j--)
  {
    tid[i] = (12.58+j);
    
  } 
  
  //"måsvingarna" friviliga
  // om endast en sats ska utföras
  for (int i=0; i<5; i++)
    cout << tid[i] << ' ' << endl;
  
  
  
return 0;
}

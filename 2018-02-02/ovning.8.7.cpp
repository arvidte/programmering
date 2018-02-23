#include <iostream>
using namespace std;
int main()
{

  int antalinv = 1000000;
  int ar = 0;
  
  while (antalinv < 2000000)
  {
    antalinv = antalinv * 1.05;
    ar++;
    
    
  }
 
 cout << "Antal år: " << ar << endl; 
 
return 0;
}
 

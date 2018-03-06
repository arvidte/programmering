#include <iostream> 
using namespace std;
int main()
{
  int falt[10]={3,5,6,7,-4,0,80,-2,12,-65};
  // while-sats
  int i=0;
 while (i<10)
 {
   cout << falt[i] << " " << endl;
   i++; 
  }
  i=0;
   while (i<10)
 {
  if (falt[i] > 0 )
      falt[i] = falt[i] * (-1);
  i++;
  }
  
  i=0;
   while (i<10)
 {
   cout << falt[i] << " ";
   i++; 
  }
  
  /*  for (int falt=0; falt<10; falt++)
    {

    }*/
  
  
  
      return 0;
}
 
 

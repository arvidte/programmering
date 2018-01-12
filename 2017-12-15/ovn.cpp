#include <iostream> 
using namespace std;
int main()
{
  int falt[10]={3,5,6,7,-4,0,80,-2,12,-65};
   //Startvärde; villkor, ändring
  for (int i=0; i<10; i++)
  {
    cout << falt[i] << " ";
    
    
  }
 cout << endl;
     for (int i=0; i<10; i++)
  {
    if (falt[i] > 0)
      falt[i] = falt[i] * (-1);
  }
    for (int i=0; i<10; i++)
    {
      cout << falt[i] << " ";
      
    }   
      
 
  return 0;
}
 
  

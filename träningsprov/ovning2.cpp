#include <iostream> 
using namespace std;

int main()
{

  int falt[10];
  int i=0;
  
  
    
   cout << "Skriv in tio tal: " << endl;
  
   while (i<10)
  {

    cin >> falt[i];
    i++;
    
    
  }
  
  
  
  
  i=0;
  while (i<10)
 {
   cout << falt[i] << " ";
   i++; 
 }
  
  i=0;
  while (i<10)
 {
  if (falt[i] > 0 )
      falt[i] = falt[i] * (-1);
      i++;
 }
  
  cout << endl;
  
  i=0;
  while (i<10)
 {
   cout << falt[i] << " ";
   i++; 
 }

  cout << endl;

    return 0;
}
  
 

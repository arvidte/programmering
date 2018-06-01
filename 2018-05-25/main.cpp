#include <iostream>
#include <string>
using namespace std;
double hittaMinst(double talfalt[], int antal);
double hittaStorst(double talfalt[], int antal);
double jfr(double minst, double storst);
int main()

{
  int antal=10;
  double talfalt[] = {2.43,45.68,45.71,6.66,7.89,0.45,-8.08,7.55,-6.55,9.99};
  double m = hittaMinst(talfalt,antal);
  double s = hittaStorst(talfalt,antal);
  cout << jfr(m,s) << endl; 
  return 0;
 
}
     
double jfr(double minst, double storst)
{
 return (storst-minst); 
}     
     
     
     
 double hittaMinst(double talfalt[], int antal)
 
 {
  double temp;
  temp = talfalt[0];
  for (int i=0; i<antal; i++)
  {
    if (talfalt[i] < temp)
      temp = talfalt[i];
    
    
  } 
  return temp;
}


 double hittaStorst(double talfalt[], int antal)
 {
  double temp;
  temp = talfalt[0];
  for (int i=0; i<antal; i++)
  {
    if (talfalt[i] > temp)
      temp = talfalt[i];
      
  } 
  return temp;
} 
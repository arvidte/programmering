 
#include <iostream> 
using namespace std;

int main()
{

int falta[10]={3,45,76,98,3,634,4,3,23,4};
int faltb[10]={5,67,5,43,789,6,5,4,555,3};
int faltc[10];
int i=0;

i=0;
  while (i<10)
 {
   cout << falta[i] << " " ;
   i++; 
 }

 cout << endl;
 
 i=0;
  while (i<10)
 {
   cout << faltb[i] << " " ;
   i++; 
 }

 i=0;
while (i<10)
{
  if (falta[i] > faltb[i])
  {
  faltc[i] = falta[i];
  i++;
  }
  


else 
{
    faltc[i] = faltb[i];
    i++; 
}

}

cout << endl;

 i=0;
  while (i<10)
 {
   cout << faltc[i] << " " ;
   i++; 
 }


    return 0;
}
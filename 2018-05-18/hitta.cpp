#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double tal(double falt[]);
double talut(double falt[]);
int main ()
{
  double falt[10];
  tal(falt);
  talut(falt);
  
   return 0;
}


double tal(double falt[])
{ 
  for(int i = 0; i < 10; i++)
  {
   cout << "Mata in tal " << i+1 << ": ";
   cin >> falt[i];
  }
}

double talut(double falt[])
{  
  double x = 0;
  for(int i = 0; i < 10; i++)
  {
   if (x < falt[i])
   {
    x = falt[i]; 
   }
  }
  cout << x << endl;
}





















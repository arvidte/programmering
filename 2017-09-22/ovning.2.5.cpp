#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
  setlocale( LC_ALL, "" );
  double tal1, tal2, tal3;
  cout << "Mata in tre tal: " << endl;
   cin >> tal1 >> tal2 >> tal3;
   
   double summa = tal1 + tal2 + tal3;
   double medel = summa / 3;
   
  cout << "summa:" << fixed << setprecision(2) << summa << endl;
  cout << "medel:" << fixed << setprecision(2) << medel << endl;
  
 
  
  
  return 0;
}

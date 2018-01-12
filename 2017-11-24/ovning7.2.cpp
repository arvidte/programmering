#include <iostream>
using namespace std;

int main()
{
  cout << " Hur mycket finns det i tanken? " << endl;
  int mangd;
  cin >> mangd;
  if (mangd<10) 
  {
  int tanken = 50-mangd;
  int kostnad = tanken*9.50;
    
    cout << "Du bör tanka, du kan tanka:  " << tanken << " liter och det kommmer kosta: " << kostnad << "kr " << endl;
    
  }
  else
  {
    cout << "Kör på! " << endl;
    
  }
  
  
  return 0;
}
 
   

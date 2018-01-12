// Arvid Ahlborg uppgift 2
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout << " mata in tre flyttal" << endl;
  float tal1;
  float tal2;
  float tal3;
  
  cin >> tal1;
  cin >> tal2;
  cin >> tal3;
  float tal4 = tal1 + tal2 + tal3;
  
  float tal5 = tal4 / 3;
  cout << "Medlevärdet av " << tal1 << ", " << tal2 << " och " << tal3 << " blir " << fixed << setprecision(1) << tal5; 
  
  return 0;
}
 

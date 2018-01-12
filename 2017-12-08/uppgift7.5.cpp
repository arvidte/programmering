#include <iostream>
using namespace std;

int main()
{
  int tal1;
  int tal2;
  char tal3;
 cout << "Skriv in två tal" << endl;
 cin >> tal1;
 cin >> tal2;
  cout << "Skriv in operatorn du vill använda ? " << endl;
  cin >> tal3;
  int summa = tal3 == '+' ? tal1 + tal2 : tal1 - tal2;
  cout << summa << endl;
 
  
  
    return 0;
} 

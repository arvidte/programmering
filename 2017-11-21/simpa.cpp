#include <iostream>
using namespace std;

int main()
{

  // ett val mellan tv�
  // alternativ, selektion
  // i ett aktivitetsdiagram 
  // N�got som entydigt 
  // �r sant eller falskt
  cout << "OM du har rakade sidor skriv in siffran 1 " << endl;
  cout << "Om du inte har rakade sidor skriv in siffran 11 " << endl;
  int i;
  cin >> i;
  if (i<10) 
  {
  cout << "Snyggt" << endl;
  }
  if (i>10)
  {
  cout << "din orakadej�vel" << endl;  
  }
  return 0;
} 

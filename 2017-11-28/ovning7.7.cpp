#include <iostream>
using namespace std;

int main()
{
cout << "MENY" << endl;
cout << " 1. insättning " << endl;
cout << " 2. uttag " << endl;
cout << " 3. visa behållning " << endl;

int behallning = 1000;
int val;
cin >> val;
int pengar;
switch (val)
{
  case 1:
  cout << "Hur mycket vill du sätta in? " << endl;
  int insattning;
  cin >> insattning;
  pengar = behallning + insattning;
  cout << "Du har nu " << pengar << "kr" << endl;
  break;
  
  case 2:
  cout << "Hur mycket vill du ta ut? " << endl;
  int uttag;
  cin >> uttag;
  if (uttag>behallning)
  {
  cout << "Du kan inte ta ut så här mycket " << endl;
  }
  else 
  { 
  pengar = behallning - uttag;
  cout << "Du har nu " << pengar << "kr" << endl;
  }
  break;
  
  case 3: 
  cout << " Du har " << behallning << "kr " << endl;  
  
}

  return 0;
}
    

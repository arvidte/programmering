
#include <iostream>
using namespace std;

int main()
{
  int val;
  
  cout << "Meny" << endl;
  cout << "Välj ett fordon" << endl;
  cout << "1. Buss" << endl;
  cout << "2. Bil" << endl;
  cout << "3. Cykel" << endl;
  cout << "4. Tåg" << endl;
  
  cin >> val;
  
  switch (val)
  {
     case 1:
     cout << "Du har valt buss" << endl;
     break;
    
    case 2:
     cout << "Du har valt bil" << endl;
     break;
    
    case 3:
     cout << "Du har valt cykel" << endl;
     break;
    
    case 4:
     cout << "Du har valt tåg" << endl;
     break;
     
     
    
  }
  
     
  
  
  
    return 0;
}
  
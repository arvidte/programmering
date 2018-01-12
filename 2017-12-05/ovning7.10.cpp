#include <iostream> 
using namespace std;

int main()
{
  char kon;
  
  cout << "Är du en kvinna eller man(k/m)? " <<  endl;
  cin >> kon;
  cout << "Du är en " << (kon != 'm' ? "kvinna." : "man.");  
  
  
  
  
  
  
  return 0;
}
 

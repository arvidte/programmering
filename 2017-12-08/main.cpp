#include <iostream> 
using namespace std;

int main()
{
  // iteration (loop)
  // med for-sats 
  // 8.1 sidan 105
  cout << "Med for-sats" << endl;
  for (int n=0; n<10; n++)
  {
      cout << "(for) n=" << n << endl;
    
  }
   
  cout << "Med while-sats" << endl;
  int o=0;
  while (o<10)
  {
    cout << "(while) o=" << o << endl;
    o++; // o=o+1;
  }
  
  /*
 do
 {
    cout << "Sant 1 (d)" << endl;
    cout << "Sant 2 (d)" << endl;  
   
 } while (1>2);
  
*/

    return 0;
}
 

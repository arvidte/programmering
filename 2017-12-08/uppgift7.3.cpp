#include <iostream> 
using namespace std;

int main()
{
  float tal;
  
  
 cout << "mata in ett tal" << endl;
 cin >> tal;
 
 if (tal>0)
 {
   
   cout << "Det är ett positivt tal" << endl;
   
 }
  
  else 
  {
    if (tal==0)
    {
      cout << " Talet är 0" << endl;
    }
    
    else
    {
     cout << " Talet är negativt" << endl;  
    }
    
  }
    return 0;
}

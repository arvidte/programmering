 
 #include <iostream>
using namespace std;
int main()
{

  
  for (int x = -50; x <= 50; x++)
  {
    for (int y = -20; y <= 20; y++)
    {
      if (3*x-7*y == 1)
      {
	cout << x << ' ' << y << endl;
      }
    }
  }
  
    
      
 
  return 0;
} 


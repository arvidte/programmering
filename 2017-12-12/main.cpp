#include <iostream> 
using namespace std;
// Nästlade for-satser
// flerdemsionela talfält 
int main()
{
  int falt[10][10];
  //falt[0][0] = 19;
  //cout << falt[0][0] << endl;
  
  
  
  for (int j=0; j<10; j++)
  {
      for (int i=0; i<10; i++)
      {
	
	
      falt[j][i] = j+i; 
	
	
      }

  }
  cout << "Inmatningen i det tvådimesionella fältet klart" << endl;
  
    for (int j=0; j<10; j++)
  {
      for (int i=0; i<10; i++)
      {
	
	
      cout << falt[j][i] << ' '; 
	
	
      }
      cout << endl;
  }
  
  
  
  
      return 0;
}
 

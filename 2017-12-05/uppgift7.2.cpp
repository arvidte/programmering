#include <iostream> 
using namespace std;

int main()
{
 
  int avstand;
  cout << "Ditt avstånd till arbetet (km)? ";
  cin >> avstand;
  
  if (avstand <=50)
  {
    cout << "Du får inget skatteavdrag" << endl;
    
  }
  else 
  {
	    char civilstand;
	    cout << " sambo eller ensamstående (s/e)? ";
	    cin >> civilstand;
	    int ar;
	    cout << "Hur länge kommer din dubbla bosättning att vara (år)"  << endl;
	    cin >> ar;
		
	    }
	    
	    if (  ( (civilstand=='s') && (ar<=3) ) || ( (civilstand='e') && (ar<=1)) )
	    {
	    cout << "Du får skatteavdrag" << endl; 
	      
	    }
	    else 
	      cout << "DU får inget skatteavdrag" << endl;
    
  return 0;
}
 
  

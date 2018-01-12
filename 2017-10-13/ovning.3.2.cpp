 
  #include <iostream>
using namespace std;
int main()
{
  int falt[3]
  
  cout << "mata in tre heltal" << endl;
  cin >> falt[0] >> falt[1] << falt[2];
   
   int tmp;
   
   
tmp = falt[0];
falt[0] = falt[2];
falt[2] = tmp;
  
       
  cout << "Fältet innehåller fäljande: "<< endl;
  cout << falt[0] << "\t" << falt[1] << "\t" << falt[2] endl;
  
   
    return 0;
} 
#include <iostream>
using namespace std;
// Swiitch-case, sidan90
int main()
{

 int tal = 44;
 switch (tal) // heltal, (char, int) 
 {
   case 1:
   cout << "Tal är 1" << endl;
   break;
   
   case 2:
   cout << "Tal är 2" << endl;
   break;

   case 3:
   cout << "Tal är 3" << endl;
   break;
   
   
   default:
   cout << "Tal är något annat " << endl;
   
 } 
 
 
 /*
 if (tal==1) // Något som går att utvärdera om det är sant
 {
   cout << "Tal är 1" << endl;
 }
 
 else if (tal==2)
 {
   cout << "Tal är 2" << endl; 
 }
 
 else if (tal==3)
 {
   cout << "Tal är 3" << endl; 
 }
 
 else
 {
   cout << "tal är något annat " << endl;
 }
 */
 
 
  return 0;
}
 
 
 

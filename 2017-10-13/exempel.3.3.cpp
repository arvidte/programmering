  #include <iostream>
using namespace std;
int main()
{
 char falt[]={'g','r','a','n','\0'};
 cout << falt[0] << falt[1] << falt[2] << falt[3] << endl;
 cout << falt << endl;
 
 
 // Rad 13: Ett teckenfält med 8 platser skapas
 // 'J','u','l','g','r','a','n','\0'
 char nyfalt[] = "julgran";
 cout << nyfalt << endl; // Stoppar när '\0' hittas
   
  return 0;
} 
#include <iostream>
using namespace std;

int main()
{
 float skivor = 9.90;
 float antal;
 cout << "skriv in antal skivor: " << endl;
 cin >> antal;
 
 if ((antal>10) && (antal<50))
 {   
   float pris = skivor * antal * 0.95;
   cout << "Det kostar: " << pris << "kr" << endl;
 }
 
  if ((antal>50) && (antal<100))
 {   
   float pris = skivor * antal * 0.90;
   cout << "Det kostar: " << pris << "kr" << endl;
 }
 
 
   if (antal>100)
 {   
   float pris = skivor * antal * 0.85;
   cout << "Det kostar: " << pris << "kr" << endl;
 }
 
 if (antal<10)
 {
   cout <<"Det kostar: " << antal*9.90 << endl;
   
}
  
  
  return 0;
}
   

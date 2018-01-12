#include <iostream> 
using namespace std;
int main()
{
 // Övning 4.5 (prioritetsordning) sidan 60
  // 7,  osynliga paranteser  int tal = 5 + (6 % 4);  
  int tal = 5 + 6 % 4; //7
  int tal = (5 + 6) % 4; // 
  cout << tal << endl;
  
  
  
  
  // Exempel 4.2 sidan 55
  /*int tid = 800;
  int min = tid / 60; // antalet hela minuter som rymms i 800 sek
  int sek = tid % 60;
  cout << tid << " s = " << min << " min och " << sek << " s" << endl; 
  
  
  
  int tal=2;
  //tal tilldelas sitt eget värde (2) + 1
  // tal kommer att ha värdet 3
  //tal = tal + 1;
  //tal += 1;
  //cout << tal << endl;
  int  tal2 = ++tal;
  cout << tal2 << endl;
  
  /*
  float ft = 9;
  float fn = 10;
  int t = 9;
  int n = 10;
   
  
  cout << (ft / fn) << endl;
  cout << (t / n) << endl;
  cout << (t % n) << endl;
  */
  
    return 0;
} 
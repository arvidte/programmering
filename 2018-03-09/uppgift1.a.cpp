// uppgift 1a Arivd Ahlborg 
 #include <iostream>
using namespace std;
int main()
{

  
  int tal;
  for (int n = 0; n < 11; n++) // En räknare som gör att nedstående kommer att ske tio gånger
  {
    tal = n - 10; // Räknar fram det rätta talet. Eftersom n är lika med 0 först kommer tal tilldelas värdet -10 först. Sedan -9, -8 osv
    cout << tal << endl; // skriver ut tal
  }
   
  

  return 0;
} 

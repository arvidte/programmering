// uppgift 2 Arivd Ahlborg 
 #include <iostream>
using namespace std;
int main()
{

 for (int n = 0; n <21; n++) // Gör 20 rader
 {
   for (int m = 0; m <21; m++) // gör 20 kolumner
   {
     
    int i = m%2; // i tilldelas värdet på resten av m. 
    if (i == 1) // Om resten på m är lika med 1 betyder det att m är ett jämt tal.
    cout << 0 << " ";
    else // Om resten på m inte är lika med 1 betyder det att m är ett ojämt tal. // därför kommer varanat tal att var 1 och varanat vara 2
    cout << 1 << " ";
       
     
   }
   cout << endl; // radbrytning efter att den skrivit ut tio tal.
   
 }

  return 0;
} 



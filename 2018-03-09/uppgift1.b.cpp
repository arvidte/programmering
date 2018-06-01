// uppgift 1b Arivd Ahlborg 
 #include <iostream>
using namespace std;
int main()
{

  int tal = -13; //startvärdet är -13 eftersom den adderar med 3 längre ner vilket gör att det första värdet blir -10;
  
  while (tal < 7) // Gör nedanstående så länge tal inte är mindre än 7 när det "kommer tillbaka upp till while"
  {
    tal = tal + 3; // Adderar med 3 för att det ska bli var tredje tal som skrivs ut.
    cout << tal << endl;
    
  }
  

  return 0;
} 
 

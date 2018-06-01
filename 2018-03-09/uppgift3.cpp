// uppgift 3 Arivd Ahlborg 
 #include <iostream>
using namespace std;
int main()
{

  int heltal;
  int tal;
  int raknare = 0;

  cout << "Mata in heltal, 48-57, 65-90 och 97-122 är tilllåtna. " << endl;
  cout << " Hur många heltal vill du mata in ? " << endl;
  cin >> heltal; 
  int varde[heltal]; // Varde måste vara ett heltal t.ex [300]. Går inte att skriva [heltl]a
 do
  {     
     
    cout << "Mata in tal" << endl;
    cin >> tal;
    
    if ((tal > 47 && tal < 58) || (tal > 64 && tal < 91) || (tal > 97 && tal < 122))
    {
    cout << "Du matade in: " << tal << endl;
    raknare = raknare + 1; // om det inmatade värdet är godkänt kommer raknare att adderas med 1. Men inte om det inmatade värde är felaktigt.
    }
    else 
    {
      cout << "Felaktigt värde" << endl;
    }

 
  for (int n = 0 ; n < heltal; n++)
  {
      int varde[n] = tal; 
  }
   
    
  }
  while (raknare < heltal); // kommer forsätta att mata in tal tills raknare är störe än heltal(antalet värden som användaren valde i början av programmet att mata in)

  
  
 
  return 0;
} 


 

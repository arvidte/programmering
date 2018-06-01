#include <iostream>
using namespace std;
void meny(int falt[], int &antal);
void skrivUtFalt(int falt[], int &antal);
void antaltal(int falt[], int &antal);
void postion(int falt[], int &antal);
int main()
{
  int falt[100];
  int antal;
  meny(falt,antal);
  skrivUtFalt(falt, antal); 
  antaltal(falt, antal);
  postion(falt, antal); 
  
  return 0;
}



void meny(int falt[], int &antal)
{
  
  cout << "Du ska mata in ett antal heltal, minst 1 och högst 100," << endl << "Hur många tal vill du mata in? " << endl;
  cin >> antal;
  for (int i=0; i<antal; i++)
  {
    cout << "mata in tal" << i << ": ";
    cin >> falt[i];
    
  }
 
}

void skrivUtFalt(int falt[], int &antal)
{
  cout << "Du matade in";
  for (int i=0; i<antal; i++)
  {
    cout << ' ' << falt[i];
  }
  
  cout << endl;
}

void antaltal(int falt[], int &antal)
{
  int talet;
  int antalggr = 0;
  cout << "Ange ett utav de tal du anga innan: " << endl;
  cin >> talet;
  for (int i=0; i<antal; i++)
  {
   if (talet== falt[i])
     antalggr++;
  }  
  cout << talet << " förekom " << antalggr << " gånger" << endl;
  
  
}


void postion(int falt[], int &antal)
{
cout << "Sökt tal: " << endl;
int x;
cin >> x;
int i=0;
while ( (falt[i] != x) && (i<antal) )
{
i++;
}
if (i<antal)
cout << "Det sökta talet hittas första gången på position " << i+1 << endl;
}
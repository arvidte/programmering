
// inkluderar "saker som finns i 
// bibloteket iostream"
//nl. a. utskrift p� sk�rmen
#include <iostream>

// I en namnrymd ing�r
// olika bibliotek.
// Alla ing�ende bibliotek har olika namn 
using namespace std;

int main()
{
  /*
   *  datatyp variabelnamn;
   */
  int tal1;
  int tal2;
	     // plats f�r 
	     // en int
	     // alokeras
	     // (bokas)
	     
  // antal = 4; // anatal 
	     // tildelas
	     // v�rdet 4
  // inmatning fr�n tangentbordet
  cout << "Mata in heltal 1: ";
  cin >> tal1;
  cout << "Mata in heltal 2: ";
  cin >> tal2;
  
  
  int summa = tal1+tal2;
    /*
     * int summa;
     * summa = tal1+tal2;
     */
    cout << "summa av talen blir " << summa << endl;
    cout << "summa av talen blir " << (tal1+tal2) << endl;
    /* 
     * tal = tal+1;
     */
    
  
  return 0;
}

#include <iostream> 
using namespace std;

int main()
{


char svar;
int tal=0; 
int nytal;

do {
    cout << "Mata in ett tal" << endl;
   cin >> nytal;
   tal = tal + nytal;
   cout << "Summan är " << tal << endl;
   cout << "Vill du fortsätta? " << endl;
   cin >> svar ;
  
   } while (svar == 'j' || svar == 'J');





    return 0;
}
  

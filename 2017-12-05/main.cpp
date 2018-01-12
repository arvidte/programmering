#include <iostream> 
using namespace std;

int main()
{
   // while-sats, 8,2 sidan 112
   int counter = 0;
   int falt[10];
   while (counter < 10) // Så länge det är sant
   {
    cout << counter << ' ';
    falt[counter] = counter;
    // "falt,plats med index
    // counter (0-9) tildelas
    // värdet counter (0-9)"
    counter++;
    // counter=counter+1;
  }
   cout << "\nUtskrift sker" << endl;
   counter = 0;
   while (counter < 10)
   {
    cout << counter << ' ';
    // "falt,plats med index
    // counter (0-9) skrivs ut
    // värdet counter (0-9)"
    counter++;
    // counter=counter+1;
  }


  return 0;
}
 

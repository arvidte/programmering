#include <iostream>
using namespace std;
int main()
{
int tal = 7;
int tal2 = --tal; // Minskning innan tilldelning
cout << tal2 << endl;
tal2 = tal2--; // Minskning efter tilldelning
cout << --tal2 << endl;

return 0;
} 



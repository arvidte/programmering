#include <iostream>
#include <string>
using namespace std;

int main()
{
cout << "skriv in ett namn " << endl;
string namn1;
getline(cin, namn1);
cout << "skriv in ett annat namn " << endl;
string namn2;
getline(cin, namn2);

cout << "I bokstavsordning\n";
if (namn1 < namn2)
{
  cout << namn1 << endl;
  cout << namn2 << endl;
  
}

else
{
  cout << namn2 << endl;
  cout << namn1 << endl;
  
}



  return 0;
}
     

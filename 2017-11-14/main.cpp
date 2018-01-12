// kap 3 fält
#include <iostream>
// Vi inför string-klassen
// boken sida 44ff
#include <string>
using namespace std;
int main()
{
  // teckenfält, c-strängar
  // Du bestämmerstorleken när 
  // strängen skapas
  // du måste deklarera den innan den kan användas.
  /*
  char namn[100]; // 0-99
  namn[66] = 'A'; // heltalet 65
  cout << namn[66] << endl;
  // funkar bara med charfält
char fnamn[] = "bengt";
cout << fnamn << endl;
  
  int hel[1000]; //0-99
  hel[66] = 65; // heltalet 65
  cout << hel[66] << endl;
  //cout << hel << endl;
  string s;
  s = "marks ";
  string s1 = "Gymnasieskola";
 s = s+s1;
 cout << s << endl;
  s.at(0) = 'p';
  cout << s << endl;
  
  int antal = s.size();
  cout << antal << endl;
  
  // vi söker efter positionen
  // där "Gym" börjar
  int hitta = s.find("Gym",0);
  cout << hitta << endl;
  // vi plockar ut 8 tecken ur s
  // med start där "Gym" börjar 
  // och placerar dettta i stringen
  // delstring 
  string delstring = s.substr(hitta,8);
  cout << delstring << endl;
  
  */
  
  // inmatning
   string namn;
  getline(cin,namn);
   cout << "Du matade in namnet: "<< namn << endl;
   getline(cin,nyttnamn);
   cout << "Du matade in det andra namnet: " << nyttnamn << endl;
  
  return 0;
  
}

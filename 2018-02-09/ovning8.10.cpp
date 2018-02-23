 #include <iostream>
using namespace std;
int main()
{
  
  char val;
  double startvarde = 1000;
  bool fortsatt = true;
  
  
  do
  {
  cout << "MENY" << endl;
  cout << "1. Insättning " << endl;
  cout << "2. Utagg" << endl;  
  cout << "3. Visa behållning " << endl; 
  cout << "4. Avsluta programmet " << endl; 
  cin >> val;
    

  
  switch(val)
  {
    case '1':
      double insattning;
     cout << "Ange Insättning: " << endl;
     cin >> insattning;
     startvarde = startvarde + insattning;
     cout << "Aktuellt Belopp: " << startvarde << endl;
     break;
     
    case '2':
      double uttag;
     cout << "Uttag : " << endl;
     cin >> uttag;
     startvarde = startvarde - uttag;
     cout << "Aktuellt Belopp: " << startvarde << endl;
     break;
     
     case '3':
     cout << "Aktuellt behållning: " << startvarde << endl;
     break;
     
     case '4':
      fortsatt = false;
      break;
      
     default: 
       cout << " Felinmanting " << endl;
       
  }
  
}
 while (fortsatt ) ;
    
  
  
  
  return 0;
} 
 

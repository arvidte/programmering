 #include <iostream>
using namespace std;
int main()
{
  cout << "Miniräkare" << endl;
  cout << "Välj räknesätt med +, -, ' eller /: " << endl;
  cout << "Avsluta med a: " << endl;
  
  int tal1, tal2;
  char raknesatt;
  
  cout << "Räknesätt: ";
  cin >> raknesatt;
  
  while ( raknesatt != 'a' )
  {
    cout << "Tal 1: ";
    cin >> tal1;
    cout << "Tal 2: ";
    cin >> tal2;
    
   if ( raknesatt == '+' ) 
   { 
     cout << tal1 << " + " << tal2 << " = " << tal1 + tal2 << endl;
   }
   else if (raknesatt == '-')
   { 
     cout << tal1 << " - " << tal2 << " = " << tal1 - tal2 << endl;
   }
   else if (raknesatt == '*')
   { 
     cout << tal1 << " * " << tal2 << " = " << tal1 * tal2 << endl;
   }
   else if (raknesatt == '/')
   { 
     cout << tal1 << " / " << tal2 << " = " << (float)tal1 / tal2 << endl;
   }
   else 
   {
   cout << "Felaktig inmatining. " << endl;
   cout << "Välj räknesätt med +, -, ' eller /: " << endl;  
   }
   
   
  cout << "Räknesätt: ";
  cin >> raknesatt;
   
   
  }

  return 0;
}
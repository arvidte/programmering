  #include <iostream> 
using namespace std;
int main()
{
  int tal1;
  cout << "mata in ett antal m�nader" << endl;
  cin >> tal1;
  int ar = tal1 / 12;
  int manader = tal1 % 12;
  cout << tal1 << " m�nader = " << ar << " �r och " << manader << " m�nader" << endl;
  
  
  
  
    return 0;
}  

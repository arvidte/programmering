  #include <iostream> 
using namespace std;
int main()
{
  int tal1;
  cout << "mata in ett antal månader" << endl;
  cin >> tal1;
  int ar = tal1 / 12;
  int manader = tal1 % 12;
  cout << tal1 << " månader = " << ar << " år och " << manader << " månader" << endl;
  
  
  
  
    return 0;
}  

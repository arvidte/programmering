#include <iostream> 
using namespace std;

void inTid(double tid[], int& n);
void utTid(double tid[], int n);
double snabbTid(double tid[], int n);

int main()
{
double tid[100];
int antal;
inTid(tid, antal);
utTid(tid, antal);
snabbTid(tid, antal);

  return 0;
}

void inTid(double tid[], int& n)
{
  cout << "Skriv in tiderna. Avsluta med 0.\n";
  n = 0;
  cin >> tid[n];
  while (tid[n] != 0)
  {
    n++;
    cin >> tid[n];
  }
  
}

void utTid(double tid[], int n)
{
  cout << "Tiderna är: ";
  for (int i = 0; i < n; i++)
  {
   cout << ' ' << tid[i]; 
  }
  cout << endl; 
}


double snabbTid(double tid[], int n)
{
  double snabbast = tid[0];
  for (int i = 1; i < n; i++)
  {
    if (snabbast > tid[i])
    {
      snabbast = tid[i];
    }
  }
  
  cout << "Den snabbaste tiden är: " << snabbast << endl;
  
}


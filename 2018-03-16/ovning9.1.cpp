#include <iostream> 
using namespace std;

double basyta(double radie);

int main()
{
  double radie;
  cout << "Mata in en radie i cm: ";
  cin >> radie;
  double area = basyta(radie);
  cout << "En cirkels med radien: " << radie << "cm" << " har arean: " << area << "cm" << endl;
  return 0;
}

double basyta(double radie)
{
  double basytaarea = (3.14 * radie * radie);
  return basytaarea; 
}
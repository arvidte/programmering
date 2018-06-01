#include <iostream> 
using namespace std;

double volymCylinder(double radie, double hojd);
double basyta(double radie);
int main()
{
  double radie;
  double hojd;
  cout << "Mata in en radie och hojd i cm: ";
  cin >> radie >> hojd;
  double volym = volymCylinder(radie, hojd);
  double area = basyta(radie);
  cout << " En cirkel med radien: " << radie << " och höjden: " << hojd << " har arean: " << area << " och volymen: " << volym << endl; 
  return 0;
}

double volymCylinder(double radie, double hojd)
{
  double volymen = (3.14 * radie * radie * hojd);
  return volymen; 
}

double basyta(double radie)
{
  double basytaarea = (3.14 * radie * radie);
  return basytaarea; 
}
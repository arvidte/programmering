 
#include <iostream> 
using namespace std;

double volymCylinder(double radie, double hojd);
double basyta(double radie);
void indata(double& radie, double& hojd);
const double PI = 3.14;
int main()
{
  double radie;
  double hojd;
  indata(radie, hojd);
  double volym = volymCylinder(radie, hojd);
  double area = basyta(radie);
  cout << " En cirkel med radien: " << radie << " och höjden: " << hojd << " har arean: " << area << " och volymen: " << volym << endl; 
  return 0;
}

double volymCylinder(double radie, double hojd)
{
  double volymen = (PI * radie * radie * hojd);
  return volymen; 
}

double basyta(double radie)
{
  double basytaarea = (PI * radie * radie);
  return basytaarea; 
}


void indata(double& radie, double& hojd)
{
  cout << "Mata in en radie och hojd i cm: ";
  cin >> radie >> hojd;
}
// exempel 3.2 sidan 41
 #include <iostream>
using namespace std;
int main()
{

  double tid []={9.98,10.15,10.04};
  cout << "F�ltet inneh�ller f�ljande tider: "<< endl;
  cout << tid[0] << "\t" << tid[1] << endl;
  
double tmp;

//Algoritm f�r att byta plats p�
// tv� v�rlden i ett f�lt
tmp = tid[0];
tid[0] = tid[1];
tid[1] = tmp;
  
    
  cout << "F�ltet inneh�ller f�ljande tider: "<< endl;
  cout << tid[0] << "\t" << tid[1] << endl;
  
  
  return 0;
} 

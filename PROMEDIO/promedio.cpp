#include "iostream" 
#include "cmath"
using namespace std;

int main(void)
{

  int num1, num2,num3,suma,promedio;

  cout <<"PROMEDIO"<<endl<< endl;

  cout <<"Digite el num1:";
  cin >> num1;
  cout <<"Digite el num2:";
  cin >> num2;
  cout <<"Digite el num3:";
  cin >> num3;

  suma = num1 + num2 +num3;
  promedio = suma/3;
 
  cout <<"El promedio sera:"<<promedio<< endl;
  return 0;
  
}
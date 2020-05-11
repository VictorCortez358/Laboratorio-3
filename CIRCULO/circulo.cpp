#include "iostream"
#include "cmath"

using namespace std;
int main(void)
{

 float radio, area, perimetro;

 cout <<"area y perimetro"<<endl<<endl;

 cout <<"Digite el radio del circulo:";
 cin >> radio;

 area = 3.1416*pow(radio,2);
 cout <<"El area sera de:"<<area<<endl;
 
 perimetro = 2*3.1416*radio;
 cout <<"El perimetro sera de:"<<perimetro<<endl;

 return 0;
 
}
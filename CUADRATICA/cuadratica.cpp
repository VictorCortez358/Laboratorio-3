#include "iostream"
#include "cmath"


using namespace std;
int main (void)
{

 int a,b,c,d;
 float x1,x2;

 cout <<"ingrese el coeficiente a:";
 cin >> a;

 cout <<"ingrese el coeficiente b:";
 cin>> b;

 cout <<"ingrese el coeficiente c:";
 cin >> c;

 d = b*b-4*a*c;
 if (d>0);

 x1 = (-b+sqrt(d))/(2*a);
 x2 = (-b-sqrt(d))/(2*a);

 cout <<"x1:"<< x1 << endl;
 cout <<"x2:"<< x2 << endl;

 
  
  return 0;

}


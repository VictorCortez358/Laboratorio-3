#include "iostream"
#include "cmath"

using namespace std;
int main(void)
{

  float precio,cantidad,total;
  string nombre;

  cout <<"Compra de producto"<<endl<<endl;

  cout <<"El nombre del producto:";
  cin >> nombre;

  cout <<"El precio del producto comprado:";
  cin >> precio;

  cout <<"La cantidad de producto comprado:";
  cin >> cantidad;

  
  total = cantidad * precio;
  cout <<"El total gastado es de:"<<total<<endl;
  return 0;

}
#include <iostream>

using namespace std;

void ingresar (int k[], int num);
void burbujapares (int k[], int num, int l[]);
void imprimir (int k[], int num);

//hecho en ecuador
int main() 
{
  int arreglo [50];
  int num;
  cout << "Ingrese el tamanio deseado para el arreglo: ";
  cin >> num;
  ingresar (arreglo, num);
  cout <<endl;
  burbujapares(arreglo, num);
  cout <<endl;
  imprimir(arreglo, num);
  cout <<endl;
  return 0;
}

void ingresar (int k[], int num)
{
  int i;
  for(i=0;i<num;i++)
    {
        cout<<"Ingrese num["<< i << "]: ";
        cin>>k[i];
    }
}

void burbujapares (int k[], int num, int l[])
{
  int i;
  for (i=0; i<num; i++)
  {
    if (k[i]%2==0)
    {
      l[num]=k[i];
      num++;

    }
  }

}

void imprimir (int k[], int num)
{
  int i;
  for(i=0;i<num;i++)
  cout << "Los numeros pares son: " <<endl;
    {
        cout<< k[i] <<endl;
    }
}
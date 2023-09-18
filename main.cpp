#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int a[50];


   srand(time(nullptr));
   for(int i=0; i<50;i++)
     a[i] = rand() % 16;
   cout << "\nArreglo con datos generados\n";
   for(int i=0; i<50;i++)
     cout << setw(3) << a[i];
   //--- se cuentan ---
   int conteo[16];
   for(int i=0; i<16; i++)
     conteo[i]=0;

   cout << "\n\n";
   for(int i=0; i<50; i++)
     conteo[a[i]]++;
   cout << "\nFrecuencias\n";
   for(int c=0; c<16; c++)
     cout <<  c << " aparece " << conteo[c] << " veces " "\n";
   cout << "\nArreglo con datos agrupados\n";
   int nuevoArreglo[50];
   int indice=0;
   for(int i=0; i<16; i++)
   {
     if(conteo[i]!=0)
     {
       for(int ixnum=1; ixnum<=conteo[i]; ixnum++) {
         nuevoArreglo[indice] = i;
         indice++;
       }
     }

   }
   for(int x=0; x<50; x++)
     cout << setw(3) << nuevoArreglo[x];
   cout << "\n";

  return 0;
}

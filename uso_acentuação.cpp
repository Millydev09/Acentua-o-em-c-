//usodeacentua��o.cpp

#include <iostream>
#include <cwchar>

using namespace std;

 int main (void){
   char nome[50];

   setlocale(LC_ALL,"portuguese_Brazil.1252");

   cout << "ol�. \nQual sua gra�a?";
   cin.getline(nome,50);

   cout << endl;
   cout << "oi " << nome << ",vamos estudar." << endl;
   cout << endl;

   cout << "tecle <enter> para encerrar...";
   cin.get();
   return 0;
}

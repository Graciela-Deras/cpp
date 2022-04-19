#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    srand (time(NULL));

    int totalSuma = 0;

    int numeros [5][5];

    numeros [0][0] = rand() % 10 + 1;
    numeros [0][1] = rand() % 10 + 1;
    numeros [0][2] = rand() % 10 + 1;
    numeros [0][3] = rand() % 10 + 1;
    numeros [0][4] = rand() % 10 + 1;

    numeros [1][0] = rand() % 10 + 1;
    numeros [1][1] = rand() % 10 + 1;
    numeros [1][2] = rand() % 10 + 1;
    numeros [1][3] = rand() % 10 + 1;
    numeros [1][4] = rand() % 10 + 1;

    numeros [2][0] = rand() % 10 + 1;
    numeros [2][1] = rand() % 10 + 1;
    numeros [2][2] = rand() % 10 + 1;
    numeros [2][3] = rand() % 10 + 1;
    numeros [2][4] = rand() % 10 + 1;

    numeros [3][0] = rand() % 10 + 1;
    numeros [3][1] = rand() % 10 + 1;
    numeros [3][2] = rand() % 10 + 1;
    numeros [3][3] = rand() % 10 + 1;
    numeros [3][4] = rand() % 10 + 1;

    numeros [4][0] = rand() % 10 + 1;
    numeros [4][1] = rand() % 10 + 1;
    numeros [4][2] = rand() % 10 + 1;
    numeros [4][3] = rand() % 10 + 1;
    numeros [4][4] = rand() % 10 + 1;

    cout << endl;
    cout << "ARREGLO BIDIMENSIONAL 5 X 5";
    cout << endl;
    cout << endl;

   for (int i = 0; i< 5; i++)
   {
       for ( int j = 0; j < 5 ; j++)
       {
           cout << numeros [i][j] << "   ";
           totalSuma = totalSuma + numeros [i][j]; 
       }
       cout << endl;
   }

   cout << "\nTotal suma: " << totalSuma;
   cout << endl;
   cout << endl;


   return 0;
}
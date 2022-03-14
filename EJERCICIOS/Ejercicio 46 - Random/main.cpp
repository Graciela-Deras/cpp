#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    //Inicializa el numero random
    srand (time(NULL));

    for (int i = 0; i < 20; i++)
    {
        //Genere un numero entre 1 y 10
        numero = rand() % 10 + 1;
        cout << "Numero al azar: " << numero <<endl;
    }
    
    return 0;
}



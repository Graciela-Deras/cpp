#include <iostream> 

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << " Ingrese la nota que obtuvo: ";
    cin  >> nota;

    if ( nota >= 96 && nota <=100 ) {
        cout << " Obtuviste una A++ ";
    } else {
          if ( nota >= 91 && nota <= 95) {
              cout << " Obtuviste una A+ ";
        } else {
              if ( nota >= 86 && nota <= 90) {
                  cout << " Obtuviste una A ";
            } else {
                  if ( nota >=81 && nota <= 85) {
                      cout << "Obtuviste una A- ";
                } else {
                        if ( nota >= 76 && nota <= 80) {
                            cout << " Obtuviste una B+ ";
                      } else {
                             if ( nota >= 71 && nota <= 75) {
                                 cout << " Obtuviste una B ";
                           } else {
                                   if ( nota >= 66 && nota <= 70) {
                                       cout << " Obtuviste una B- ";
                                 } else {
                                       if ( nota >= 61 && nota <= 65) {
                                           cout << " Obtuviste una C+ ";
                                     } else {
                                           if ( nota >= 56 && nota <= 60) {
                                               cout << " Obtuviste una C ";
                                         } else {
                                               if ( nota >= 51 && nota <= 55) {
                                                   cout << " Obtuviste una C- ";
                                             } else {
                                                   if ( nota >= 46 && nota <= 50) {
                                                       cout << " Obtuviste una D+ ";
                                                 } else {
                                                       if ( nota >= 41 && nota <= 45) {
                                                           cout << " Obtuviste una D ";
                                                     } else {
                                                           if ( nota >= 36 && nota <= 40) {
                                                               cout << " Obtuviste una D- ";
                                                         } else {
                                                               if ( nota >= 31 && nota <= 35) {
                                                                   cout << " Obtuviste una E+ ";
                                                             } else {
                                                                   if ( nota >= 26 && nota <= 30) {
                                                                       cout << " Obtuviste una E ";
                                                                 } else {
                                                                       if ( nota >= 21 && nota <= 25) {
                                                                           cout << " Obtuviste una E- ";
                                                                     } else {
                                                                           if ( nota >= 16 && nota <= 20) {
                                                                               cout << " Obtuviste una F+ ";
                                                                         } else {
                                                                               if ( nota >= 6 && nota <= 15) {
                                                                                   cout << " Obtuviste una F ";
                                                                             } else {
                                                                                   if ( nota >= 1 && nota <= 5) {
                                                                                       cout << " Obtuviste una F- ";
                                                                                 } else {
                                                                                       if ( nota == 0 ) {
                                                                                           cout << " Obtuviste una F-- ";
                                                                                     } else {
                                                                                           if (nota >=0 && nota <= 60) {
                                                                                               cout << " Obtuviste una F :(";
                                                                                         } else {
                                                                                               cout << " Ingrese una nota entre 0 y 100 ";
                                                                                         } 
                                                                                     }
                                                                                 }
                                                                             }     
                                                                         }
                                                                     }  
                                                                 }
                                                             }
                                                         }
                                                     }
                                                 }
                                             }
                                         }
                                     }
                                 }
                             }
                         }
                     }
                 }
             }
         }  
                                           
    return 0;
}

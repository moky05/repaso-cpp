#include <iostream>
using namespace std;

int main() {
    int resultado1 = 7 / 2;
    cout << "1) 7 / 2 = " << resultado1 << endl;


   
    double resultado2 = 7 / 2.0;
    cout << "2) 7 / 2.0 = " << resultado2 << endl;


   
    int resultado3 = 7 % 3;
    cout << "3) 7 % 3 = " << resultado3 << endl;


    
    int resultado4 = 7 / 2;
    cout << "4) 7 / 2 = " << resultado4 << endl;



    double numero = 1;
    cout << "5) (1 == 1.0) = " << (numero == 1.0) << endl;



    unsigned int a = 3;
    unsigned int b = 5;

    unsigned int resultado6 = a - b;

    cout << "6) 3 - 5 (unsigned int) = " << resultado6 << endl;


    return 0;
}
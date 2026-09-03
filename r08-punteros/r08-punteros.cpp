#include <iostream>
using namespace std;

void intercambiar1(int a, int b){   
    int t = a; a = b; b = t;
}
void intercambiar2(int* a, int* b){
    int t = *a; *a = *b; *b = t;
}
void intercambiar3(int& a, int& b){
    int t = a; a = b; b = t;
}

int main(){
    int x = 1;
    int y = 2;

    intercambiar1(x, y);
    cout << "Despues de intercambiar1: x = " << x << ", y = " << y << "\n";

    intercambiar2(&x, &y);
    cout << "Despues de intercambiar2: x = " << x << ", y = " << y << "\n";

    intercambiar3(x, y);
    cout << "Despues de intercambiar3: x = " << x << ", y = " << y << "\n";

    return 0;
}
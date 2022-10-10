#include <iostream>
using namespace std;


int main(){
    //  Tugas 2
    //  Menukarkan 2 Variabel dengan bantuan Variabel Sementara
    int a, b, c;
    a = 10; //Variabel awal
    b = 5; //Variabel awal

    c = a; // Variabel c ditukar dengan Variabel a yang bernilai 5
    a = b; // Variabel a ditukar dengan Variabel b yang bernilai 10
    b = c; // Variabel b ditukar dengan Variabel c yang bernilai 5

    cout << "Menukarkan 2 Variabel dengan bantuan Variabel Sementara\n";
    cout << "A : " << a << endl << "B : " << b << endl;

   return 0;
}

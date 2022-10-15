#include <iostream>
using namespace std;

int main(){
    //  Tugas 2
//  Menukarkan 2 Variabel tanpa Variabel Sementara
    int x, y;
    x = 10; //Variabel awal
    y = 5; //Variabel awal

    x = x+y; //8
    y = x-y; //3
    x = x-y; //5

    cout << "\nMenukarkan 2 Variabel tanpa Variabel Sementara\n";
    cout << "X : " << x << endl << "Y : " << y;

   return 0;
}

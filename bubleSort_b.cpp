#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variabel global array a dengan ukuran 20
int n; // deklarasi variabel global n untukk menyimpan banyaknya elemen pada array

void input ()
{ //procedure untuk  input
    int d; 
    while (true)
    {
        cout << "masukkan elemen pada array : "; //output ke layar
        cin >> n;                                //input dari pengguna
        if (n<=20)                               //jika n kurang dari satu atau satu
            break ;                              //keluar dari looop
        else
        {                                        //jika n lebih dari satu
            cout<< "\nArray dapat mempunyai maksimmal 20 elemen.\n"; //output ke layar
        }
    }
}
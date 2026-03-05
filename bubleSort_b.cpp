#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variabel global array a dengan ukuran 20
int n; // deklarasi variabel global n untukk menyimpan banyaknya elemen pada array

void input()
{ //procedure untuk  input
    int d; 
    while (true)
    {
        cout << "masukkan elemen pada array : "; //output ke layar
        cin >> n;                                //input dari pengguna
        if (n <= 20)                               //jika n kurang dari satu atau satu
            break ;                              //keluar dari looop
        else
        {                                        //jika n lebih dari satu
            cout << "\nArray dapat mempunyai maksimmal 20 elemen.\n"; //output ke layar
        }
    }
    cout << endl;
    cout << "=============" << endl;
    cout << " masukkan elemen array" << endl;
    cout << "=============" << endl;
    for (int i=0; i < n; i++)
    {
    cout << "\nPass " << (i + 1) << ": "; // number of pass
    cin >> arr[1];
    }
}



void bubbleSortArray()
{
    int pass = 1;

    do
    {
        for (int j = 0;j <= n - 1 - pass; j++)
        {
            if (arr[j] > arr [j+1])
            {
                int temp;
                temp = arr[j];
                arr [j] = arr[j + 1];
                arr [ j + 1 ] = temp;
            }
        }
        pass += 1;

        cout << "\nPass " << pass - 1 << ": "; 
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    } while (pass <= n-1);
    
}


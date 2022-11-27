#include <iostream>

/*
    Program karakter
    Ket : Program menentukan huruf atau bukan
    By  : Yudha Rizqia Grafer
    Tgl : 19 Oktober 2022

*/
using namespace std;

int main()
{
    //Kamus
    char x;

    //Algoritma
    cout << "Program Untuk Menentukan Huruf atau Bukan" << endl;
    cout << "=========================================" << endl;
    cout << "Input Karakter : ";
    cin >> x;
    if ( ( x >= 'a' ) && ( x <= 'z' ) )
    {
        cout << x << " adalah Huruf" << endl;
    }
    else if ( ( x >= 'A' ) && ( x <= 'Z' ) )
    {
        cout << x << " adalah Huruf" << endl;
    }
    else
    {
        cout << x << " adalah Bukan Huruf" << endl;
    }
    return 0;
}

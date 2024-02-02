#include <iostream>
#include <conio.h> //  File Header yang berfungsi untuk menampilkan hasil antarmuka kepada pengguna

// Kamus operasi
#include "aritmatika.h" // operasi +, -, x
#include "transpose.h" // operasi transpose
#include "determinan_baru.h" // operasi determinan matriks 2x2, 3x3, 4x4
#include "kofaktor.h" // operasi minor kofaktor matriks 3x3
#include "adjoin.h" // operasi adjoin matriks 2x2, 3x3, 4x4
#include "invers.h" // operasi invers matriks 2x2
using namespace std;

int main(){ // menu utama

    int pil;
    do
    {
       system("cls");
        cout << "=====================================\n";
        cout << "=======    PROGRAM MATRIKS    =======\n";
        cout << "=====================================\n"; // ketika program dieksekusi, ini tampilan pertama pada jendela program
        cout << "==  1. Penjumlahan Matriks         ==\n";
        cout << "==  2. Pengurangan Matriks         ==\n";
        cout << "==  3. Perkalian Matriks           ==\n";
        cout << "==  4. Transpose Matriks           ==\n";
        cout << "==  5. Determinan Matriks          ==\n";
        cout << "==  6. Minor Kofaktor Matriks 3x3  ==\n";
        cout << "==  7. Adjoin Matriks              ==\n";
        cout << "==  8. Invers Matriks 2x2          ==\n";
        cout << "==  9. Keluar                      ==\n";
        cout << "=====================================\n";
        cout << "\nMasukkan pilihan anda ^_^ (1-9) = ";
        cin >> pil;

        switch(pil)  // menu menggunakan switch
        {
            case 1: system("cls");
            {
                penjumlahan_matriks(); // fungsi pada kamus aritmatika.h
                break;
            }
            case 2: system("cls");
            {
                pengurangan_matriks(); // fungsi pada kamus aritmatika.h
                break;
            }
            case 3: system("cls");
            {
                perkalian_matriks(); // fungsi pada kamus aritmatika.h
                break;
            }
            case 4: system("cls");
            {
                transpose_matriks(); // fungsi pada kamus transpose.h
                break;
            }
            case 5: system("cls");
            {
                determinan_matriks(); // fungsi pada kamus determinan_baru.h
                break;
            }
            case 6: system("cls");
            {
                minor_kofaktor_determinan(); // fungsi pada kamus kofaktor.h
                break;
            }
            case 7: system("cls");
            {
                adjoin_matriks(); // fungsi pada kamus adjoin.h
                break;
            }
            case 8: system("cls");
            {
                invers_2(); // fungsi pada kamus invers.h
                break;
            }

            case 9: system("cls");
            {
                cout << "\n *** TERIMA KASIH *** \n"; // tampilan ketika keluar program
                return 0;
                break;
            }

            default : system("cls");
            {
                    cout<<"\n Maaf, Pilihan yang Anda pilih tidak tersedia !"; // bila pilihan tidak ada di menu
            }
        }
        getch();
    }while (pil != 9);

}

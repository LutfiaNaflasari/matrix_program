#include <iostream>
#include <conio.h> //  File Header yang berfungsi untuk menampilkan hasil antarmuka kepada pengguna
using namespace std;

void adjoin_2() // fungsi yang berisi operasi adjoin 2x2
{
    int matriks1_adjoin2[2][2], hasil_minor1[2][2], hasil_adjoin2[2][2];
    int im1, jm1;
    cout << "======== ADJOIN MATRIKS 2X2 ========\n";
    cout << endl;

    // INPUT MATRIKS
            cout << "Masukkan elemen Matriks :  (baris x kolom)\n";
            for(im1 = 0; im1 < 2; im1++)
            {
                for(jm1 = 0; jm1 < 2; jm1++)
                    {
                        cout << "( " << im1+1 << ", " << jm1+1 << " ) -> \t";
                        cin >> matriks1_adjoin2[im1][jm1];
                    }
            }

    // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (im1 = 0; im1<2; im1++)
            {
                for (jm1=0; jm1<2; jm1++)
                {
                    cout << matriks1_adjoin2[im1][jm1] << " ";
                }
                cout <<endl;
            }
            cout << endl;

    // OPERASI MATRIKS ADJOIN
            hasil_adjoin2[0][0] = matriks1_adjoin2[1][1]; // a
            hasil_adjoin2[1][1] = matriks1_adjoin2[0][0]; // d
            hasil_adjoin2[1][0] = -1 * matriks1_adjoin2[1][0]; // b
            hasil_adjoin2[0][1] = -1 * matriks1_adjoin2[0][1]; // b

    // HASIL MATRIKS ADJOIN
            cout << "Hasil adjoin matriks: \n";
            for(im1 = 0; im1 < 2; im1++)
            {
                for(jm1 = 0; jm1 < 2; jm1++)
                {
                    cout << hasil_adjoin2[im1][jm1] << "\t";
                }
                cout << endl;
            }

}

void adjoin_3() // fungsi yang berisi operasi adjoin 3x3
{
    int matriks1_minor1[3][3], hasil_minor1[3][3], hasil_adjoin[3][3];
    int im1, jm1;
    cout << "======== ADJOIN MATRIKS 3X3 ========\n";
    cout << endl;

    // INPUT MATRIKS
            cout << "Masukkan elemen Matriks :  (baris x kolom)\n";
            for(im1 = 0; im1 < 3; im1++)
            {
                for(jm1 = 0; jm1 < 3; jm1++)
                    {
                        cout << "( " << im1+1 << ", " << jm1+1 << " ) -> \t";
                        cin >> matriks1_minor1[im1][jm1];
                    }
            }

    // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (im1 = 0; im1<3; im1++)
            {
                for (jm1=0; jm1<3; jm1++)
                {
                    cout << matriks1_minor1[im1][jm1] << " ";
                }
                cout <<endl;
            }
            cout << endl;

    // MINOR
                // M11
                hasil_minor1[0][0] = (matriks1_minor1[1][1] * matriks1_minor1[2][2]) - (matriks1_minor1[1][2] * matriks1_minor1[2][1]);

                // M12
                hasil_minor1[0][1] = -1 * ((matriks1_minor1[1][0] * matriks1_minor1[2][2]) - (matriks1_minor1[1][2] * matriks1_minor1[2][0]));

                // M13
                hasil_minor1[0][2] = (matriks1_minor1[1][0] * matriks1_minor1[2][1]) - (matriks1_minor1[1][1] * matriks1_minor1[2][0]);

                 // M21
                hasil_minor1[1][0] = -1 * ((matriks1_minor1[0][1] * matriks1_minor1[2][2]) - (matriks1_minor1[0][2] * matriks1_minor1[2][1]));

                // M22
                hasil_minor1[1][1] = (matriks1_minor1[0][0] * matriks1_minor1[2][2]) - (matriks1_minor1[0][2] * matriks1_minor1[2][0]);

                // M23
                hasil_minor1[1][2] = -1 * ((matriks1_minor1[0][0] * matriks1_minor1[2][1]) - (matriks1_minor1[0][1] * matriks1_minor1[2][0]));

                // M31
                hasil_minor1[2][0] = (matriks1_minor1[0][1] * matriks1_minor1[1][2]) - (matriks1_minor1[0][2] * matriks1_minor1[1][1]);

                // M32
                hasil_minor1[2][1] = -1 * ((matriks1_minor1[0][0] * matriks1_minor1[1][2]) - (matriks1_minor1[0][2] * matriks1_minor1[1][0]));

                // M33
                hasil_minor1[2][2] = (matriks1_minor1[0][0] * matriks1_minor1[1][1]) - (matriks1_minor1[0][1] * matriks1_minor1[1][0]);


    // HASIL MATRIKS MINOR
            cout << "\nHasil kofaktor matriks: \n";
            for(im1 = 0; im1 < 3; im1++)
            {
                for(jm1 = 0; jm1 < 3; jm1++)
                {
                    cout << hasil_minor1[im1][jm1] << "\t";
                }
                cout << endl;
            }

    // MATRIKS ADJOIN
            for(im1 = 0; im1 < 3; im1++)
            {
                for(jm1 = 0; jm1 < 3; jm1++)
                {
                    hasil_adjoin[jm1][im1] = hasil_minor1[im1][jm1];
                }
                cout << endl;
            }

    // HASIL MATRIKS ADJOIN
            cout << "Hasil adjoin matriks: \n";
            for(im1 = 0; im1 < 3; im1++)
            {
                for(jm1 = 0; jm1 < 3; jm1++)
                {
                    cout << hasil_adjoin[im1][jm1] << "\t";
                }
                cout << endl;
            }

}

void adjoin_matriks()
{
    int pil_ad_menu;
    do
        {
            system("cls");
            cout << "\n====  ADJOIN MATRIKS  ===="; // TAMPILAN MENU DETERMINAN
            cout << "\n==  1. Adjoin 2x2       ==";
            cout << "\n==  2. Adjoin 3x3       ==";
            cout << "\n==  3. Keluar           ==";
            cout << "\n==========================\n";
            cout << "\nMasukkan pilihan (1-4) = ";
            cin >> pil_ad_menu;

            switch(pil_ad_menu)
                {
                    case 1: system("cls");
                    {
                        adjoin_2();
                        break;
                    }
                    case 2: system("cls");
                    {
                        adjoin_3();
                        break;
                    }
                    case 3: system("cls");
                    {
                        cout << "Kembali ke menu awal ->> (double enter please)";
                        break;
                    }

                    default : system("cls");
                    {
                            cout<<"\n Maaf, Pilihan yang Anda pilih tidak tersedia !";
                    }
                }
                getch();
        }while(pil_ad_menu != 3);
}


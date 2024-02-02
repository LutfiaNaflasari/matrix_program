#include <iostream>
#include <conio.h> //  File Header yang berfungsi untuk menampilkan hasil antarmuka kepada pengguna
using namespace std;

void determinan_2() // fungsi yang berisi operasi matriks yaitu determinan matriks 2x2
{
    int matriks1_determinan2[2][2], hasil_determinan2[2][2];
    int id2, jd2, jumlah_d2 = 0;
    cout << "\n===== DETERMINAN MATRIKS 2X2 =====\n";
    cout << endl;
    cout << "Pada operasi determinan matriks baris dan kolom / ordo harus berjumlah sama.\n";
    cout << "Contoh : 2x2, 3x3, 4x4, dst.\n";

         // INPUT MATRIKS
            cout << "\nMasukkan elemen Matriks :  (baris x kolom)\n";
            for(id2 = 0; id2 < 2; id2++)
            {
                for(jd2 = 0; jd2 < 2; jd2++)
                    {
                        cout << "( " << id2+1 << ", " << jd2+1 << " ) -> \t";
                        cin >> matriks1_determinan2[id2][jd2];
                    }
            }

            // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (id2 = 0; id2<2; id2++)
            {
                for (jd2=0; jd2<2; jd2++)
                {
                    cout << matriks1_determinan2[id2][jd2] << " ";
                }
                cout <<endl;
            }
            cout << endl;

            // DETERMINAN MATRIKS
                jumlah_d2 = (matriks1_determinan2[0][0] * matriks1_determinan2[1][1]) - (matriks1_determinan2[0][1] * matriks1_determinan2[1][0]);
                cout << "Hasil determinan matriks : " << jumlah_d2 << endl;

    //}
}

void determinan_3() // fungsi yang berisi operasi matriks yaitu determinan matriks 3x3
{
    int matriks1_determinan3[3][3], hasil_determinan3[3][3];
    int id3, jd3, jumlah_d3 = 0;

    cout << "===== DETERMINAN MATRIKS 3X3 =====\n";
    cout << endl;
    cout << "Pada operasi determinan matriks baris dan kolom / ordo harus berjumlah sama. \n";
    cout << "Contoh : 2x2, 3x3, 4x4, dst.\n";

         // INPUT MATRIKS
            cout << "\nMasukkan elemen Matriks :  (baris x kolom)\n";
            for(id3 = 0; id3< 3; id3++)
            {
                for(jd3 = 0; jd3 < 3; jd3++)
                    {
                        cout << "( " << id3+1 << ", " << jd3+1 << " ) -> \t";
                        cin >> matriks1_determinan3[id3][jd3];
                    }
            }

            // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (id3 = 0; id3<3; id3++)
            {
                for (int jd3=0; jd3<3; jd3++)
                {
                    cout << matriks1_determinan3[id3][jd3] << " ";
                }
                cout <<endl;
            }
            cout << endl;

            // DETERMINAN MATRIKS -> METODE SARRUS
                jumlah_d3 = ((matriks1_determinan3[0][0] * matriks1_determinan3[1][1] * matriks1_determinan3[2][2]) +
                             (matriks1_determinan3[0][1] * matriks1_determinan3[1][2] * matriks1_determinan3[2][0]) +
                             (matriks1_determinan3[0][2] * matriks1_determinan3[1][0] * matriks1_determinan3[2][1])) -
                             ((matriks1_determinan3[0][1] * matriks1_determinan3[1][0] * matriks1_determinan3[2][2]) +
                              (matriks1_determinan3[0][0] * matriks1_determinan3[1][2] * matriks1_determinan3[2][1]) +
                              (matriks1_determinan3[0][2] * matriks1_determinan3[1][1] * matriks1_determinan3[2][0]));
                cout << "Hasil determinan matriks : " << jumlah_d3 << endl;

//    }
}

void determinan_4() // fungsi yang berisi operasi matriks yaitu determinan matriks 4x4
{
    int matriks1_determinan[4][4], hasil[4][4];
    int id4, jd4, jumlah_d4 = 0;
    cout << "===== DETERMINAN MATRIKS 4X4 =====\n";
    cout << endl;
    cout << "Pada operasi determinan matriks baris dan kolom / ordo harus berjumlah sama. \n";
    cout << "Contoh : 2x2, 3x3, 4x4, dst.\n";

         // INPUT MATRIKS
            cout << "\nMasukkan elemen Matriks :  (baris x kolom)\n";
            for(id4 = 0; id4 < 4; id4++)
            {
                for(jd4 = 0; jd4 < 4; jd4++)
                    {
                        cout << "( " << id4+1 << ", " << jd4+1 << " ) -> \t";
                        cin >> matriks1_determinan[id4][jd4];
                    }
            }

            // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (id4 = 0; id4<4; id4++)
            {
                for (int jd4=0; jd4<4; jd4++)
                {
                    cout << matriks1_determinan[id4][jd4] << " ";
                }
                cout <<endl;
            }
            cout << endl;

        // DETERMINAN MATRIKS
            // DETERMINAN KOFAKTOR -> MINOR

            //EKSPANSI KOLOM 1

            //M11
                int c1;
                c1 = ((matriks1_determinan[1][1] * matriks1_determinan[2][2] * matriks1_determinan[3][3]) +
                        (matriks1_determinan[1][2] * matriks1_determinan[2][3]* matriks1_determinan[3][1]) +
                        (matriks1_determinan[1][3] * matriks1_determinan[2][1] * matriks1_determinan[3][2]))
                        -
                        ((matriks1_determinan[3][1] * matriks1_determinan[2][2] * matriks1_determinan[1][3]) +
                        (matriks1_determinan[3][2] * matriks1_determinan[2][3] * matriks1_determinan[1][1]) +
                        (matriks1_determinan[3][3] * matriks1_determinan[2][1] * matriks1_determinan[1][2]));

                int c2;
                c2 = ((matriks1_determinan[0][1] * matriks1_determinan[2][2] * matriks1_determinan[3][3]) +
                        (matriks1_determinan[0][2] * matriks1_determinan[2][3]* matriks1_determinan[3][1]) +
                        (matriks1_determinan[0][3] * matriks1_determinan[2][1] * matriks1_determinan[3][2]))
                        -
                        ((matriks1_determinan[3][1] * matriks1_determinan[2][2] * matriks1_determinan[0][3]) +
                        (matriks1_determinan[3][2] * matriks1_determinan[2][3] * matriks1_determinan[0][1]) +
                        (matriks1_determinan[3][3] * matriks1_determinan[2][1] * matriks1_determinan[0][2]));

                int c3;
                c3 = ((matriks1_determinan[0][1] * matriks1_determinan[1][2] * matriks1_determinan[3][3]) +
                        (matriks1_determinan[0][2] * matriks1_determinan[1][3]* matriks1_determinan[3][1]) +
                        (matriks1_determinan[0][3] * matriks1_determinan[1][1] * matriks1_determinan[3][2]))
                        -
                        ((matriks1_determinan[3][1] * matriks1_determinan[1][2] * matriks1_determinan[0][3]) +
                        (matriks1_determinan[3][2] * matriks1_determinan[1][3] * matriks1_determinan[0][1]) +
                        (matriks1_determinan[3][3] * matriks1_determinan[1][1] * matriks1_determinan[0][2]));

                int c4;
                c4 = ((matriks1_determinan[0][1] * matriks1_determinan[1][2] * matriks1_determinan[2][3]) +
                        (matriks1_determinan[0][2] * matriks1_determinan[1][3]* matriks1_determinan[2][1]) +
                        (matriks1_determinan[0][3] * matriks1_determinan[1][1] * matriks1_determinan[2][2]))
                        -
                        ((matriks1_determinan[2][1] * matriks1_determinan[1][2] * matriks1_determinan[0][3]) +
                        (matriks1_determinan[2][2] * matriks1_determinan[1][3] * matriks1_determinan[0][1]) +
                        (matriks1_determinan[2][3] * matriks1_determinan[1][1] * matriks1_determinan[0][2]));

                jumlah_d4 = (matriks1_determinan[0][0] * c1) - (matriks1_determinan[1][0] * c2) + (matriks1_determinan[2][0] * c3) - (matriks1_determinan[3][0] * c4);

                cout << "Hasil determinan matriks : " << jumlah_d4<< endl;
}

void determinan_matriks()
{
    int pil_det_menu;
    do
        {
            system("cls");
            cout << "\n===== DETERMINAN MATRIKS ====="; // tampilan bila masuk ke menu determinan
            cout << "\n==  1. Determinan 2x2       ==";
            cout << "\n==  2. Determinan 3x3       ==";
            cout << "\n==  3. Determinan 4x4       ==";
            cout << "\n==  4. Keluar               ==";
            cout << "\n==============================\n";
            cout << "\nMasukkan pilihan (1-4) = ";
            cin >> pil_det_menu;

            switch(pil_det_menu)
                {
                    case 1: system("cls");
                    {
                        determinan_2();
                        break;
                    }
                    case 2: system("cls");
                    {
                        determinan_3();
                        break;
                    }
                    case 3: system("cls");
                    {
                        determinan_4();
                        break;
                    }
                    case 4: system("cls");
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
        }while(pil_det_menu != 4);

}


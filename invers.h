#include <iostream>
using namespace std;

void invers_2() // fungsi yang berisi operasi invers matriks 2x2
{
    int matriks1_invers2[2][2], hasil_invers2[2][2], hasil_adjoin2[2][2];
    int id2, jd2, jumlah_v2 = 0;
    cout << "\n===== INVERS MATRIKS 2X2 =====\n";

    // INPUT MATRIKS
            cout << "\n Masukkan elemen Matriks :  (baris x kolom)\n";
            for(id2 = 0; id2 < 2; id2++)
            {
                for(jd2 = 0; jd2 < 2; jd2++)
                    {
                        cout << "( " << id2+1 << ", " << jd2+1 << " ) -> \t";
                        cin >> matriks1_invers2[id2][jd2];
                    }
            }

    // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (id2 = 0; id2<2; id2++)
            {
                for (jd2=0; jd2<2; jd2++)
                {
                    cout << matriks1_invers2[id2][jd2] << " ";
                }
                cout <<endl;
            }
            cout << endl;

    // DETERMINAN MATRIKS
            jumlah_v2 = (matriks1_invers2[0][0] * matriks1_invers2[1][1]) - (matriks1_invers2[0][1] * matriks1_invers2[1][0]);
            cout << "Hasil determinan matriks : " << jumlah_v2 << endl;


    // MENGECEK HASIL DETERMINAN APAKAH ITU HASILNYA 0 ATAU TIDAK
    if (jumlah_v2 == 0)
    {
        cout << "\nMaaf tidak dapat melakukan operasi invers karena hasil determinan matriks adalah 0";
    }
    else
    {
        hasil_adjoin2[0][0] = matriks1_invers2[1][1]; // a
        hasil_adjoin2[1][1] = matriks1_invers2[0][0]; // d
        hasil_adjoin2[1][0] = -1 * matriks1_invers2[1][0]; // b
        hasil_adjoin2[0][1] = -1 * matriks1_invers2[0][1]; // b

        cout <<"\nTampilan matriks setelah melakukan adjoin: \n";
        for(id2 = 0; id2 < 2; id2++)
            {
                for(jd2 = 0; jd2 < 2; jd2++)
                {
                    cout << hasil_adjoin2[id2][jd2] << "\t";
                }
                cout << endl;
            }
        cout << endl;

        // INVERS MATRIKS
            for (id2 = 0; id2<2; id2++)
            {
                for (jd2=0; jd2<2; jd2++)
                {
                    hasil_invers2[id2][jd2] = (jumlah_v2 * hasil_adjoin2[id2][jd2]);
                }
            }

        // TAMPIL MATRIKS SETELAH INVERS
        cout << "Hasil invers matriks : \n";
        for (id2 = 0; id2<2; id2++)
                {
                    for (jd2=0; jd2<2; jd2++)
                    {
                        cout << hasil_invers2[id2][jd2] << " ";
                    }
                    cout <<endl;
                }
        cout << endl;
    }

}


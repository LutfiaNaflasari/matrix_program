#include <iostream>
using namespace std;

void transpose_matriks() // OPERASI TRANSPOSE MATRIKS
{

// BEGIN
    int matriks1_transpose[200][200], hasil_transpose[200][200];
    int it, jt, mt, nt;
    cout << "===== TRANSPOSE MATRIKS =====\n";
    cout << "Masukkan ordo matriks : \n";
    cout << "Baris : "; cin >> mt;
    cout << "Kolom : "; cin >> nt;
    cout << endl;


            // INPUT MATRIKS
            cout << "\n Masukkan elemen Matriks :  (baris x kolom)\n";
            for(it = 0; it < mt; it++)
            {
                for(jt = 0; jt < nt; jt++)
                    {
                        cout << "( " << it+1 << ", " << jt+1 << " ) -> \t";
                        cin >> matriks1_transpose[it][jt];
                    }
            }

            // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (it = 0; it<mt; it++)
            {
                for (jt=0; jt<nt; jt++)
                {
                    cout << matriks1_transpose[it][jt] << " ";
                }
                cout <<endl;
            }
            cout << endl;

            // TRANSPOSE MATRIKS
            for(it = 0; it < mt; it++)
                {
                    for(jt = 0; jt < nt; jt++)
                    {
                        hasil_transpose[jt][it] = matriks1_transpose[it][jt];
                    }
                }

            cout << "\nHasil transpose matriks: \n";
            for(it = 0; it < nt; it++)
            {
                for(jt = 0; jt < mt; jt++)
                {
                    cout << hasil_transpose[it][jt] << "\t";
                }
                cout << endl;
            }


}


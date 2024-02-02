#include <iostream>
using namespace std;

void minor_kofaktor_determinan() // fungsi yang berisi operasi matriks yaitu minor kofaktor matriks 3x3
{
    int matriks1_minor[3][3], hasil_minor[3][3];
    int im, jm;
    cout << "======== KOFAKTOR MATRIKS 3X3 ========\n";
    cout << endl;

    // INPUT MATRIKS
            cout << "Masukkan elemen Matriks :  (baris x kolom)\n";
            for(im = 0; im < 3; im++)
            {
                for(jm = 0; jm < 3; jm++)
                    {
                        cout << "( " << im+1 << ", " << jm+1 << " ) -> \t";
                        cin >> matriks1_minor[im][jm];
                    }
            }

            // TAMPIL MATRIKS
            cout <<"\nTampilan matriks : \n";
            for (im = 0; im<3; im++)
            {
                for (jm=0; jm<3; jm++)
                {
                    cout << matriks1_minor[im][jm] << " ";
                }
                cout <<endl;
            }
            cout << endl;

            // MINOR
                // M11
                hasil_minor[0][0] = (matriks1_minor[1][1] * matriks1_minor[2][2]) - (matriks1_minor[1][2] * matriks1_minor[2][1]);

                // M12
                hasil_minor[0][1] = -1 * ((matriks1_minor[1][0] * matriks1_minor[2][2]) - (matriks1_minor[1][2] * matriks1_minor[2][0]));

                // M13
                hasil_minor[0][2] = (matriks1_minor[1][0] * matriks1_minor[2][1]) - (matriks1_minor[1][1] * matriks1_minor[2][0]);

                 // M21
                hasil_minor[1][0] = -1 * ((matriks1_minor[0][1] * matriks1_minor[2][2]) - (matriks1_minor[0][2] * matriks1_minor[2][1]));

                // M22
                hasil_minor[1][1] = (matriks1_minor[0][0] * matriks1_minor[2][2]) - (matriks1_minor[0][2] * matriks1_minor[2][0]);

                // M23
                hasil_minor[1][2] = -1 * ((matriks1_minor[0][0] * matriks1_minor[2][1]) - (matriks1_minor[0][1] * matriks1_minor[2][0]));

                // M31
                hasil_minor[2][0] = (matriks1_minor[0][1] * matriks1_minor[1][2]) - (matriks1_minor[0][2] * matriks1_minor[1][1]);

                // M32
                hasil_minor[2][1] = -1 * ((matriks1_minor[0][0] * matriks1_minor[1][2]) - (matriks1_minor[0][2] * matriks1_minor[1][0]));

                // M33
                hasil_minor[2][2] = (matriks1_minor[0][0] * matriks1_minor[1][1]) - (matriks1_minor[0][1] * matriks1_minor[1][0]);


        // HASIL MATRIKS KOFAKTOR
            cout << "\nHasil kofaktor matriks: \n";
            for(im = 0; im < 3; im++)
            {
                for(jm = 0; jm < 3; jm++)
                {
                    cout << hasil_minor[im][jm] << "\t";
                }
                cout << endl;
            }


}

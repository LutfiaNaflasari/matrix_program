#include <iostream>
using namespace std;

void perkalian_matriks() // OPERASI PERKALIAN
{

// BEGIN
    int matriks1_perkalian[200][200], matriks2_perkalian[200][200], hasil_perkalian[200][200];
    int ix, jx, kx, mx, nx, px, qx, jumlah_x = 0;
    cout << "===== PERKALIAN MATRIKS =====\n\n";
    cout << "Syarat perkalian matriks, bila ordo setiap matriks (baris x kolom): \n";
    cout << "Matriks 1 : m x n\t" << "Matriks 2 : n x p , maka\n";
    cout << "-> Hasil dari perkalian matriks akan ber-ordo : m x p\n";

    cout << "\nMasukkan ordo setiap matriks : \n";
    cout << "Matriks 1 = \n";
    cout << "Baris : "; cin >> mx;
    cout << "Kolom : "; cin >> nx;
    cout << endl;

    cout << "Matriks 2 = \n";
    cout << "Baris : "; cin >> px;
    cout << "Kolom : "; cin >> qx;
    cout << endl;


      if(nx != px)
        {
            cout << "!!! ALERT !!!\n";
            cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
            cout << "Syarat perkalian matriks, bila ordo setiap matriks (baris x kolom): \n\n";
            cout << "Matriks 1 : m x n\t" << "Matriks 2 : n x p , maka\n\n";
            cout << "-> Hasil dari perkalian matriks akan ber-ordo : m x p\n\n";
        }
      else
        {
            // INPUT MATRIKS
            cout << "\n Masukkan elemen Matriks 1:  (baris x kolom)\n";
            for(ix = 0; ix < mx; ix++)
            {
                for(jx = 0; jx < nx; jx++)
                    {
                        cout << "( " << ix+1 << ", " << jx+1 << " ) -> \t";
                        cin >> matriks1_perkalian[ix][jx];
                    }
            }

            cout << "\n Masukkan elemen Matriks 2:  (baris x kolom)\n";
            for(ix = 0; ix < px; ix++)
                {
                    for(jx = 0; jx < qx; jx++)
                    {
                        cout << "( " << ix+1 << ", " << jx+1 << " ) -> \t";
                        cin >> matriks2_perkalian[ix][jx];
                    }
                }

            // TAMPIL MATRIKS 1 & 2
            cout <<"\nTampilan matriks 1 : \n";
            for (ix = 0; ix<mx; ix++)
            {
                for (int jx=0; jx<nx; jx++)
                {
                    cout << matriks1_perkalian[ix][jx] << " ";
                }
                cout <<endl;
            }
            cout << endl;

            cout <<"\nTampilan matriks 2 : \n";
            for (ix = 0; ix<px; ix++)
            {
                for (jx =0; jx<qx; jx++)
                {
                    cout << matriks2_perkalian[ix][jx] << " ";
                }
                cout <<endl;
            }

            // PERKALIAN MATRIKS
            for(ix = 0; ix < mx; ix++)
                {
                    for(jx = 0; jx < qx; jx++)
                    {
                        for(kx = 0; kx < px; kx++)
                        {
                            jumlah_x = jumlah_x + matriks1_perkalian[ix][kx] * matriks2_perkalian[kx][jx];
                        }
                        hasil_perkalian[ix][jx] = jumlah_x;
                        jumlah_x = 0;
                    }
                }

            cout << "\nHasil perkalian matriks: \n";
            for(ix = 0; ix < mx; ix++)
            {
                for(jx = 0; jx < qx; jx++)
                {
                    cout << hasil_perkalian[ix][jx] << "\t";
                }
                cout << endl;
            }
        }

}

void penjumlahan_matriks() // OPERASI PENJUMLAHAN
{

// BEGIN
    int matriks1_penjumlahan[200][200], matriks2_penjumlahan[200][200], hasil_penjumlahan[200][200];
    int ij, jj, kj, mj, nj, jumlah_j = 0;
    cout << "===== PENJUMLAHAN MATRIKS =====\n";
    cout << "\nPada operasi penjumlahan matriks setiap matriks harus memiliki ordo yang sama : m x n  =  p x q\n";

    cout << "\nMasukkan ordo untuk setiap matriks : \n"; // INPUT ORDO
    cout << "Baris : "; cin >> mj;
    cout << "Kolom : "; cin >> nj;
    cout << endl;

    // INPUT MATRIKS
        // MATRIKS 1
            cout << "\n Masukkan elemen Matriks 1:  (baris x kolom)\n";
            for(ij = 0; ij < mj; ij++)
            {
                for(jj = 0; jj < nj; jj++)
                    {
                        cout << "( " << ij+1 << ", " << jj+1 << " ) -> \t";
                        cin >> matriks1_penjumlahan[ij][jj];
                    }
            }

        // MATRIKS 2
            cout << "\n Masukkan elemen Matriks 2:  (baris x kolom)\n";
            for(ij = 0; ij < mj; ij++)
                {
                    for(jj = 0; jj < nj; jj++)
                    {
                        cout << "( " << ij+1 << ", " << jj+1 << " ) -> \t";
                        cin >> matriks2_penjumlahan[ij][jj];
                    }
                }

    // TAMPIL MATRIKS
        // MATRIKS 1
            cout <<"\nTampilan matriks 1 : \n";
            for (ij = 0; ij<mj; ij++)
            {
                for (int jj=0; jj<nj; jj++)
                {
                    cout << matriks1_penjumlahan[ij][jj] << " ";
                }
                cout <<endl;
            }
            cout << endl;

        // MATRIKS 2
            cout <<"\nTampilan matriks 2 : \n";
            for (ij = 0; ij<mj; ij++)
            {
                for (jj =0; jj<nj;jj++)
                {
                    cout << matriks2_penjumlahan[ij][jj] << " ";
                }
                cout <<endl;
            }

            // PENJUMLAHAN MATRIKS
            for(ij = 0; ij < mj; ij++)
                {
                    for(jj = 0; jj < nj; jj++)
                    {
                        jumlah_j = matriks1_penjumlahan[ij][jj] + matriks2_penjumlahan[ij][jj];
                        hasil_penjumlahan[ij][jj] = jumlah_j;
                        jumlah_j = 0;
                    }
                }

            cout << "\nHasil penjumlahan matriks: \n";
            for(ij = 0; ij < mj; ij++)
            {
                for(jj = 0; jj < nj; jj++)
                {
                    cout << hasil_penjumlahan[ij][jj] << "\t";
                }
                cout << endl;
            }

}

void pengurangan_matriks() // OPERASI PENGURANGAN
{

// BEGIN
    int matriks1_pengurangan[200][200], matriks2_pengurangan[200][200], hasil_pengurangan[200][200];
    int iu, ju, ku, mu, nu, jumlah_u = 0;
    cout << "===== PENGURANGAN MATRIKS =====\n";
    cout << "\nPada operasi pengurangan matriks setiap matriks harus memiliki ordo yang sama : m x n  =  p x q\n";

    cout << "\nMasukkan ordo untuk setiap matriks : \n"; // INPUT ORDO
    cout << "Baris : "; cin >> mu;
    cout << "Kolom : "; cin >> nu;
    cout << endl;

    // INPUT MATRIKS
        // MATRIKS 1
            cout << "\n Masukkan elemen Matriks 1:  (baris x kolom)\n";
            for(iu = 0; iu < mu; iu++)
            {
                for(ju = 0; ju < nu; ju++)
                    {
                        cout << "( " << iu+1 << ", " << ju+1 << " ) -> \t";
                        cin >> matriks1_pengurangan[iu][ju];
                    }
            }
        // MATRIKS 2
            cout << "\n Masukkan elemen Matriks 2:  (baris x kolom)\n";
            for(iu = 0; iu < mu; iu++)
                {
                    for(ju = 0; ju < nu; ju++)
                    {
                        cout << "( " << iu+1 << ", " << ju+1 << " ) -> \t";
                        cin >> matriks2_pengurangan[iu][ju];
                    }
                }

    // TAMPIL MATRIKS
        // MATRIKS 1
            cout <<"\nTampilan matriks 1 : \n";
            for (iu = 0; iu<mu; iu++)
            {
                for (ju =0; ju<nu; ju++)
                {
                    cout << matriks1_pengurangan[iu][ju] << " ";
                }
                cout <<endl;
            }
            cout << endl;
        // MATRIKS 2
            cout <<"\nTampilan matriks 2 : \n";
            for (iu = 0; iu<mu; iu++)
            {
                for (ju =0; ju<nu;ju++)
                {
                    cout << matriks2_pengurangan[iu][ju] << " ";
                }
                cout <<endl;
            }

            // PENGURANGAN MATRIKS
            for(iu = 0; iu < mu; iu++)
                {
                    for(ju = 0; ju < nu; ju++)
                    {
                        jumlah_u = matriks1_pengurangan[iu][ju] - matriks2_pengurangan[iu][ju];
                        hasil_pengurangan[iu][ju] = jumlah_u;
                        jumlah_u = 0;
                    }
                }

            cout << "\nHasil pengurangan matriks: \n";
            for(iu = 0; iu < mu; iu++)
            {
                for(ju = 0; ju < nu; ju++)
                {
                    cout << hasil_pengurangan[iu][ju] << "\t";
                }
                cout << endl;
            }

}

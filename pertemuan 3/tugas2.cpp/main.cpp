#include <iostream>
using namespace std;

int main()
{

    float AngkaPertama, AngkaKedua, AngkaKetiga, AngkaTerbesar;

        // input untuk user memasukan 3 angka
    cout << "Masukkan angka pertama: ";
    cin >> AngkaPertama;
    cout << "Masukkan angka kedua: ";
    cin >> AngkaKedua;
    cout << "Masukkan angka ketiga: ";
    cin >> AngkaKetiga;



// menggunakan Logical Operator && (dianggap benar jika kedua pernyataannya benar) untuk menentukan angka terbesar

        // Menguji kebenaran apakah angka pertama merupakan angka terbesar dibandingkan dengan angka kedua dan ketiga
    if (AngkaPertama > AngkaKedua && AngkaPertama > AngkaKetiga)
    {
        AngkaTerbesar = AngkaPertama;
    }

        // Menguji kebenaran apakah angka kedua merupakan angka terbesar dibandingkan dengan angka pertama dan ketiga
    else if (AngkaPertama < AngkaKedua &&  AngkaKedua > AngkaKetiga)
    {
        AngkaTerbesar = AngkaKedua;
    }

        // Menguji kebenaran apakah angka ketiga merupakan angka terbesar dibandingkan dengan angka pertama dan kedua
    else if (AngkaPertama < AngkaKetiga && AngkaKedua < AngkaKetiga)
    {
        AngkaTerbesar = AngkaKetiga;
    }

        // Menampilkan angka terbesar
    cout << "Angka terbesar adalah: " << AngkaTerbesar;

    return 0;
}


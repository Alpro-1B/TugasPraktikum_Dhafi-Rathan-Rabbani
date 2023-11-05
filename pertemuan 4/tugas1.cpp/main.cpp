#include <iostream>

using namespace std;

int main()
{
    int batas;
    int Ganjil = 0;
    int Genap = 0;
    int Prima = 0;
    cout << endl;

    cout << "Program Untuk Mencari Bilangan Ganjil, Genap, dan Prima Dengan Batas Tertentu" << endl;
    cout << "Serta Manampilkan Jumlah Dan Faktor Dari Masing-Masing Bilangan" << endl << endl;

    cout << "Masukkan batas : ";
    cin >> batas;	//Untuk input batas akhir yang diinginkan
    cout << endl;

// Bilangan Ganjil

    cout << "Bilangan Ganjil : ";// Output untuk menampilkan bilangan ganjil
    for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " "; // Menampilkan bilangan ganjil
            Ganjil += i;   // Untuk menjumlahkan bilangan ganjil
        }
    }

    cout << endl;

// Bilangan Genap

    cout << "Bilangan Genap : "; //output untuk menampilkan bilangan genap
    for (int i = 0; i <= batas; i += 2){
        cout << i << " "; // Menampilkan bilangan genap
        Genap += i; // Untuk menjumlahkan bilangan genap
    }
    cout << endl;

    cout << "Bilangan Prima : "; //output untul menampilkan bilangan prima
    for (int i = 2; i <= batas; i++){
        int j; //Untuk mendeklarasi variabel
        for (j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i){
            cout << i << " "; // Menampilkan bilangan prima
            Prima += i; // Untuk menjumlahkan bilangan prima
        }
    }
    cout << endl << endl;

//Output untuk masing masing bilangan

    cout << "Jumlah Bilangan Ganjil : " << Ganjil << endl;
    cout << "Jumlah Bilangan Genap : " << Genap << endl;
    cout << "Jumlah Bilangan Prima : " << Prima << endl;


// Faktor untuk masing masing bilangan

	cout<< endl;
	cout << "Faktor bilangan ganjil : "; // Output untuk menampilkan Faktor Bilangan Ganjil
	for (int k = 1; k <= Ganjil; k++){
		if (Ganjil % k == 0){
			cout << k  << " ";
			}
		}
	cout<< endl;
	cout << "Faktor bilangan genap : "; // Output untuk menampilkan Faktor Bilangan Genap
	for (int l = 1; l <= Genap; l++){
		if (Genap % l == 0){
			cout << l << " ";
			}
		}
		cout<< endl;

    cout << "Faktor bilangan prima : "; // Output untuk menampilkan Faktor Bilangan Prima
	for (int m = 1; m <= Prima; m++){
		if (Prima % m == 0){
			cout << m << " ";
			}
		}
    cout << endl;

    return 0;

}

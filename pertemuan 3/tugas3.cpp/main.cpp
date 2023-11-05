#include <iostream>
using namespace std;

int main()
{

    int bangunDatar, luas;
 //tersedia 3 pilihan bangun datar untuk dihitung
    cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl; //ketik 1 jika ingin menghitung persegi
    cout << "2. Persegi Panjang" << endl; //ketik 2 jika ingin menghitung persegi panjang
    cout << "3. Segitiga" << endl; //ketik 3 jika ingin menghitung segitiga
    cout << "Masukkan pilihan (1/2/3): "; //memasukkan pilihan
    cin >> bangunDatar;

    switch (bangunDatar)
    {

    case 1: //menghitung persegi
        int sisi; //mendeklarasikan sisi
        cout << "Masukkan panjang sisi persegi: ";//output untuk user memasukkan sisi
        cin >> sisi;//input untuk user memasukkan sisi
        cout << "Luas Perseginya adalah: " << (sisi * sisi);//output untuk menampilkan hasil
        break; //untuk membatasi case 1 ke case lainnya


    case 2: //menghitung persegi panjang
        int panjang, lebar; // mendeklarasikan panjang dan lebar
        cout << "masukkan Panjang: ";//output untuk user memasukkan panjang
        cin >> panjang;//input untuk user memasukkan panjang
        cout << "Masukkan Lebar: ";//output untuk user memasukkan panjang
        cin >> lebar;//input untuk user memasukkan lebar
        cout << "Luas Persegi Panjang: " << (panjang * lebar); //output untuk menampilkan hasil
        break;


    case 3://menghitung segitiga
        int alas, tinggi; // mendeklarasikan alas dan tinggi
        cout << "Masukkan Alas: "; //output untuk user memasukkan alas
        cin >> alas;//input untuk user memasukkan alas
        cout << "Masukkan tinggi: ";//ouput  untuk user memasukkan alas
        cin >> tinggi;//input untuk user memasukkan tinggi
        cout << "Luas Segitiga: " << (0.5 * alas * tinggi);//output untuk menampilkan hasil
        break;

    default:
         cout << "Pilihan tidak valid." << endl;//jika pilihan yang dimasukkan user tidak sesuai
    }
}

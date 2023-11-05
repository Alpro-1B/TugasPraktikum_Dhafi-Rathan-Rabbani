#include <iostream>

using namespace std;

int main()
{
    int score; // Masukkan score
    cout << "Masukkan nilai score: ";
    cin >> score;

    // menggunakan Logical Operator && untuk menentukan nilai yang didapatkan user dalam cangkupan skor tertentu {lebih spesifik (1-100)}

    if (score >= 90) {
        cout << "Selamat! Kamu mendapatkan nilai A." << endl;
        // Jika score yang dimasukkan 90 atau lebih, maka kalimat ini yang akan keluar
    } else if (score >= 80 && score <= 89) {
        cout << "Kamu mendapatkan nilai B. Lebih semangat lagi belajarnya kamu pasti bisa mendapatkan nilai A di tes selanjutnya." << endl;
        // Jika score yang dimasukkan antara 80 sampai 89, maka kalimat ini yang akan keluar
    } else if (score >= 70 && score <= 79) {
        cout << "Sayang sekali kamu mendapatkan nilai C. Diperbaiki lagi ya belajarnya." << endl;
        // Jika score yang dimasukkan antara 70 sampai 79, maka kalimat ini yang akan keluar
    } else if (score >= 60 && score <= 69) {
        cout << "FIX NGUlANG!." << endl;
        // Jika score yang dimasukkan antara 60 sampai 69, maka kalimat ini yang akan keluar
    } else {
        cout << "Inget orang tua udah biayain kamu untuk kuliah dan lihat hasilnya sekarang, MEMALUKAN. Orang tua kamu pasti menyesal punya anak kaya kamu." << endl;
        // Jika score yang dimasukkan kurang dari 60, maka kalimat ini yang akan keluar
    }
    return 0;
}

#include <iostream>
using namespace std;

int main () {

    int jumlah_bebek,jumlah_teman;

    cout << "Masukkan jumlah bebek yang akan dibagikan Pak Tatang : ";
    cin >> jumlah_bebek;
    cout << "Masukkan jumlah teman yang akan diberi bebek oleh Pak Tatang :";
    cin >> jumlah_teman;
    cout << "maka" << endl;
    cout << "Jumlah bebek yang dapat dibagikan Pak Tatang kepada masing-masing teman nya agar sama rata :" << jumlah_bebek/jumlah_teman << endl;
    cout << "Sisa Bebek :" <<jumlah_bebek%jumlah_teman << endl;

    return 0;
}

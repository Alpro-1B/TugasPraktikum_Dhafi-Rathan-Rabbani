#include <iostream>

using namespace std;

int main(){
    //pertukaran menggunakan variabel tambahan

    int FirstValue = 10,SecondValue = 8,ThirdValue;

    cout << "Pertukuran menggunakan variabel tambahan" << endl;
    cout << "Nilai sebelum ditukar"<< endl;
    cout << "First Value =" << FirstValue << endl;
    cout << "Second Value =" << SecondValue << endl;
    cout << "Nilai sesudah ditukar" << endl;
    ThirdValue = FirstValue;
    FirstValue = SecondValue;
    SecondValue = ThirdValue;
    cout << "First Value =" << FirstValue << endl;
    cout << "Second Value =" << SecondValue << endl << endl;

    // pertukuran tanpa menggunakan variabel tambahan

    int a=10, b=8;

    cout << "Pertukaran tanpa variabel tambahan" << endl;
    cout << "Nilai sebelum ditukar" << endl;
    cout << "First Value =" << a << endl;
    cout << "Second Value =" << b << endl;
    cout << "Nilai sesudah ditukar " << endl;
    cout << "First Value =" << b << endl;
    cout << "Second Value =" << a << endl << endl;

    return 0;


}

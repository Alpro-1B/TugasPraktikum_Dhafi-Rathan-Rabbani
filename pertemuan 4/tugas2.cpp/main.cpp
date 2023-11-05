#include <iostream>
using namespace std;

int main()
{
	int n, i, j, k;
	cout << "HALO SIAPUN KAMU SELAMAT MENCOBA MEMBUAT PIRAMIDA" << endl;
	cout << "Silahkan ingin seberapa tinggi piramida yang kamu ingin buat, caranya adalah dengan memasukkan nilainya.(semakin besar semakin tinggi loh) tapi jangan berlebihan ya karena sesuatu yang berlebihan itu tidak baik: ";
	cin >> n;

	char currentChar = '*';

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}

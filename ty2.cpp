#include <iostream>
using namespace std;

class Barang
{	
	public:
	char kodeBarang_cl[9];
	char namaBarang_cl[30];
	float harga;
};
int main()
{	
	Barang brg;
	cout << "Masukkan kode barang		= "; cin >> brg.kodeBarang_cl;
	cout << "Masukkan nama barang		= "; cin >> brg.namaBarang_cl;
	cout << "Masukkan harga barang		= "; cin >> brg.harga;
	cout << endl;
	cout << "=========================================" << endl;
	cout << "                   Data                  " << endl;
	cout << "=========================================" << endl;
	cout << "Masukkan kode barang		= " << brg.kodeBarang_cl << endl;
	cout << "Masukkan nama barang		= " << brg.namaBarang_cl << endl;
	cout << "Masukkan harga barang		= " << brg.harga << endl;
	cin.get();
}
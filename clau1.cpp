#include <iostream>
#include <string>
using namespace std;

int main ()
{
struct BUKU
{
	string clau_nama;
	string clau_peng;
	int clau_tahun;
	float clau_nangka;
};
BUKU Data;
Data.clau_nama 	= "Payung Teduh";
Data.clau_peng 	= "Laras" ;
Data.clau_tahun	= 2025;
Data.clau_nangka= 50000;
cout << endl;
cout << "Judul Buku 	= " << Data.clau_nama << endl;
cout << "Pengarang 	= " << Data.clau_peng << endl;
cout << "Tahun Terbit 	= " << Data.clau_tahun << endl;
cout << "Harga 		= " << Data.clau_nangka << endl;
cin.get();
}
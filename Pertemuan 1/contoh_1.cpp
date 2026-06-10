#include <iostream>
#include <string>
using namespace std;

int main ()
{
struct KTP
{
	string uas_nama;
	string uas_alamat;
	int uas_tggllahir;
	float uas_NIK;
}
Data.uas_nama 	= "Claudya Putri Faradillah";
Data.uas_alamat 	=  "Bogor";
Data.uas_tggllahir	= 6;
Data.uas_NIK= 3175032403070009;

cout << endl;
cout << "NAMA 	= " << Data.uas_nama << endl;
cout << "ALAMAT 	= " << Data.uas_alamat << endl;
cout << "TANGGAL LAHIR 	= " << Data.uas_tggllahir << endl;
cout << "NIK 		= " << Data.uas_NIK << endl;
cin.get();
}
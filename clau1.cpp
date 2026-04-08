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
Data.uas_nama 	= "uziel askarillah saputra";
Data.uas_alamat 	=  "depok";
Data.uas_tggllahir	= 24;
Data.uas_NIK= 3175032403070009;

cout << endl;
cout << "NAMA 	= " << Data.uas_nama << endl;
cout << "ALAMAT 	= " << Data.uas_alamat << endl;
cout << "TANGGAL LAHIR 	= " << Data.uas_tggllahir << endl;
cout << "NIK 		= " << Data.uas_NIK << endl;
cin.get();
}
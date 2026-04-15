#include <iostream>
using namespace std;

typedef struct 
{
	string npm;
	string nama;
	double nilai;
} nilaimk;
typedef struct elm *alamat;
typedef struct elm
{
	nilaimk kontainer;
	alamat next;
} elemen;
typedef struct 
{
	elemen* top;
}stack;
void buatstkosong(stack *s)
{
	(*s).top = NULL;
}
int iskosong(stack s)
{
	bool hasil = false;
	if(s.top == NULL)
	{
		hasil = true;
	}
	return hasil;
}
int jmlelemen(stack s) 
{
	int hasil = 0;
	if(s.top !=NULL)
	{
		elemen *bantu;
		bantu = s.top;
		while(bantu !=NULL)
		{
			hasil = hasil + 1;
			bantu = bantu -> next;
		}
	}
	return hasil;
}
	void push(string npm, string nama, double nilai,stack *s)
	{
		elemen *info;
		info = new elemen;
		info -> kontainer.npm = npm;
		info -> kontainer.nama = nama;
		info -> kontainer.nilai = nilai;
		if((*s).top == NULL)
		{ 
			cout << "Stack Penuh" << endl;
			info -> next = NULL;
		}
		else 
		{
			info -> next = (*s).top;
		}
		(*s).top = info;
		info = NULL;
	}
	void pop(stack *s)
	{
		if((*s).top != NULL)
		{
			elemen *hapus = (*s).top;
			if(jmlelemen(*s) == 1)
			{
				(*s).top = NULL;
			}
			else 
			{
				(*s).top =(*s).top -> next;
			}
			hapus -> next = NULL;
			delete hapus;
			}
			else 
			{
				cout << "Stack Kosong" << endl;
			}
	}
	void cetakstack(stack s)
	{
		if(s.top != NULL)
		{
			cout << "Menampilkan Stack" << endl;
			elemen *bantu = s.top;
			int i = 1;
			while(bantu !=NULL)Kode Buku
			{
				cout << "=============================================" << endl;
				cout << "Elemen ke              : " << i << endl;
				cout << "Nomor Pokok Mahasiswa: " << bantu -> kontainer.npm << endl;
				cout << "Nama Mahasiswa         : " << bantu -> kontainer.nama << endl;
				cout << "Nilai Mahasiswa        : " << bantu -> kontainer.nilai << endl;
				bantu = bantu -> next;
				i = i + 1;
			}
			cout << "================================================" << endl;
		}
		else
		{
			cout << "Stack Kosong" << endl;
		}
	}
int main()
{
	stack s;
	buatstkosong(&s);
	cetakstack(s);
	cout << endl;
	cout << "===========================" << endl;
	push("452310666", "Budi", 88.75, &s);
	push("452310777", "Susi", 88.75, &s);
	push("452310888", "Nuri", 88.75, &s);
	push("452310999", "Bimo", 88.75, &s);
	push("452310555", "Arif", 88.75, &s);
	push("452310444", "Rido", 88.75, &s);
	push("452310222", "Ella", 88.75, &s);
	cetakstack(s);
	cout << "============================" << endl;
	cout << endl;
	pop(&s);
	cetakstack(s);
	cout << endl;
	pop(&s);
	cetakstack(s);
	cout << "=============================" << endl;
	return 0;
}
	
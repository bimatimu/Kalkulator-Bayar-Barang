// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

#include "string";


int _tmain(int argc, _TCHAR* argv[])
{
	string nama, i;
	int harga, bayar;

	do{
		cout << endl << endl << endl;
		cout << "Masukkan Nama Barang: ";
		cin >> nama;
		cout << "Masukkan Harga Barang: ";
		cin >> harga;
		cout << "Bayar: ";
		cin >> bayar;

		if (bayar == harga){
			cout << "Nama Barang: " << nama << endl << "Harga Barang: " << harga << endl;
			cout << "Harga Pas" << endl;
		}
		else if (bayar > harga){
			cout << "Nama Barang: " << nama << endl << "Harga Barang: " << harga << endl;
			cout << "Kembali" << bayar - harga << " Rupiah" << endl;
		}
		else {
			cout << "Nama Barang: " << nama << endl << "Harga Barang: " << harga << endl;
			cout << "Kurang" << harga - bayar << " Rupiah" << endl << endl << endl;
		}
		cout << "Apakah Anda Ingin Mengulangi(y/t): ";
	} while (i == "y" || "y");
			system ("pause");
}



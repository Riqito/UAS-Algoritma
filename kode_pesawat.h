#include "iostream"
using namespace std;

void kode_pesawat(int kode, int z, char bayar){
	

int a = 100000;
int b = 200000;
int c = 300000;
int d = 700000;
int e = 800000;
int f = 900000;
int g = 500000;
	

	
		if ( z == 2 && (bayar != 'Y' || bayar != 'y') && (bayar != 'n' || bayar!= 'N') ){
			system("cls");
			cout << "Pemesanan Belum Dilakukan\n\n";
		}else if( z == 2 &&  (bayar == 'Y' || bayar== 'y') ){
			cout << "Pembayaran Sudah di Konfirmasi, Tidak Bisa Dibatalkan\n";
		}else{
	switch(kode){
		case (1000):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case (1001):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << d << "    |\n";
			cout << "|==============================|\n";
			break;
		case (1002):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;
		case (1004):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;
		case (1005):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case (1006):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1007): 
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << e << "    |\n";
			cout << "|==============================|\n";
			break;		
		case(1008):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1009):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Sultan-Air  |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << d << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1010):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1011):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << c << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1012):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << c << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1013):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1014):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1015):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << c << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1016):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;
		case (1017):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1018):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1019):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << c << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1020):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Sultan-Air  |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1021):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1022):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1023):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1024):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << d << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1025):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1026):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1027):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1028):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << d << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1029):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1030):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << d << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1031):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1032):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1033):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << d << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1034):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1035):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1036):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1037):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1038):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1039):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1040):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1041):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 10.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1042):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Singapore  |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << g << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1043):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1044):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 13.30 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1045):	
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1046):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1047):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << a << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1048):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;
		case(1049):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Australia  |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 16.00 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1050):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Chess-Air  |\n";
			cout << "| Tanggal         : 24-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << b << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1051):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Garuda-Air |\n";
			cout << "| Tanggal         : 25-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1052):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Otong-Air  |\n";
			cout << "| Tanggal         : 26-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << c << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1053):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 27-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1054):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 28-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1055):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 29-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;	
		case(1056):
			cout << "|==============================|\n";
			cout << "|     Tiket yang Anda Pesan    |\n";
			cout << "|==============================|\n";
			cout << "| Kode Penerbangan: "; cout << kode; cout << "       |\n";
			cout << "| Tujuan          : Vatikan    |\n";
			cout << "| Maskapai        : Sultan-Air |\n";
			cout << "| Tanggal         : 30-04-2019 |\n";
			cout << "| Pukul           : 23.30 WIB  |\n";
			cout << "| Harga           : " << f << "    |\n";
			cout << "|==============================|\n";
			break;	
		default:
			cout << "Pemesanan Belum Dilakukan\n\n";

	}
	}
}


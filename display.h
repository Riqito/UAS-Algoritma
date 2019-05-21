//Display
using namespace std;

void regis(){
	cout << "\t\t================================================\n";
	cout << "\t\t                SELAMAT DATANG                  \n";
	cout << "\t\t================================================\n";
	system("pause");
	system("cls");	
	cout << "\t\t===============================================================\n";
	cout << "\t\t|                Aplikasi Pemesanan Tiket                     |\n";
	cout << "\t\t|                  by : Shifa Industries                      |\n";
	cout << "\t\t===============================================================\n";
	cout << "\t\t|       TUNGGU                |       PESAN TIKETMU           |" << endl;
	cout << "\t\t|      APA LAGI               |          SEKARANG             |" << endl;
	cout << "\t\t===============================================================\n";
}
void menu_utama(){
			cout << setw(30) << "\t\t=======================================\n";
			cout << setw(22) << "\t\t|             Menu Utama              |\n";
			cout << setw(30) << "\t\t=======================================\n";
			cout << setw(30) << "\t\t| 1. MRT                              |\n";
			cout << setw(30) << "\t\t| 2. Pesawat                          |\n";
			cout << setw(30) << "\t\t| 3. Mini game                        |\n";
			cout << setw(30) << "\t\t| 4. Logout                           |\n";
			cout << setw(30) << "\t\t| 5. Tutup Aplikasi                   |\n";
			cout << setw(30) << "\t\t|-------------------------------------|\n\n\n";
}
void beranda_pesawat(){
		cout << setw(30) << "\t\t=======================================\n";
		cout << setw(22) << "\t\t|        Pesan Tiket Pesawat          |\n";
		cout << setw(30) << "\t\t=======================================\n";
		cout << setw(30) << "\t\t| 1. Cek Jadwal Penerbangan           |\n";
		cout << setw(30) << "\t\t| 2. Pesan Tiket                      |\n";
		cout << setw(30) << "\t\t| 3. Cek Tiket Pesanan                |\n";
		cout << setw(30) << "\t\t| 4. Kembali                          |\n";
		cout << setw(30) << "\t\t|-------------------------------------|\n\n\n";
}
void cek_penerbangan(){
		cout << setw(30) << "\t\t=======================================\n";
		cout << setw(22) << "\t\t|          Cek Penerbangan            |\n";
		cout << setw(30) << "\t\t=======================================\n";
		cout << setw(30) << "\t\t| 1. Cari Berdasarkan Tanggal         |\n";
		cout << setw(30) << "\t\t| 2. Cari Berdasarkan Tujuan          |\n";
		cout << setw(30) << "\t\t| 3. Kembali                          |\n";
		cout << setw(30) << "\t\t|-------------------------------------|\n\n\n";
}
void cari_tujuan(){
			cout << setw(30) << "=======================================\n";
			cout << setw(22) << "|           Tujuan Tersedia           |\n";
			cout << setw(30) << "=======================================\n";
			cout << setw(30) << "| 1. Singapore                        |\n";
			cout << setw(30) << "| 2. Australia                        |\n";
			cout << setw(30) << "| 3. Vatikan                          |\n";
			cout << setw(30) << "|                                     |\n";
			cout << setw(30) << "| 4. Kembali                          |\n";
			cout << setw(30) << "|-------------------------------------|\n\n";
}
void menu_MRT(){
	    cout << "\t||===========================================||" << endl;
        cout << "\t||               Pemesanan Tiket             ||" << endl;
        cout << "\t||                     MRT                   ||" << endl;
        cout << "\t||===========================================||" << endl;
        cout << "\t|| [1] Single Trip                           ||" << endl;
        cout << "\t||                                           ||" << endl;
        cout << "\t|| [0] Kembali                               ||" << endl;
        cout << "\t||===========================================||" << endl << endl;
}
void menu_single_trip(){
	    cout << "\t||===========================================||" << endl;
        cout << "\t||               Pemesanan Tiket             ||" << endl;
        cout << "\t||                     MRT                   ||" << endl;
        cout << "\t||===========================================||" << endl;
        cout << "\t||                 SINGLE TRIP               ||" << endl;
        cout << "\t||===========================================||" << endl;
        cout << "\t|| [1] Pesan Tiket                           ||" << endl;
        cout << "\t|| [2] Cek Tiket MRT                         ||" << endl;
        cout << "\t||                                           ||" << endl;
        cout << "\t|| [0] Kembali                               ||" << endl;
        cout << "\t||===========================================||" << endl;
}
void rute(){

			cout << "||==================================================================||" << endl;
            cout << "||                       Pemesanan Tiket                            ||" << endl;
            cout << "||==================================================================||" << endl;
            cout << "||                          Pesan MRT                               ||" << endl;
            cout << "||==================================================================||" << endl;
            cout << "||                      Route Perjalanan                            ||" << endl;
            cout << "||==================================================================||" << endl;
            cout << "|| [1] Lebak Bulus - Blok M         [4] Lebak Bulus - ISTORA        ||" << endl;
            cout << "|| [2] Lebak Bulus - Bundaran HI    [5] Lebak Bulus - Fatmawati     ||" << endl;
            cout << "|| [3] Lebak Bulus - Senayan                                        ||" << endl;
            cout << "||                                                                  ||" << endl;
            cout << "|| [6] Bundaran HI - Lebak Bulus    [9] Bundaran HI - Blok M        ||" << endl;
            cout << "|| [7] Bundaran HI - Senayan        [10] Bundaran HI - Istora       ||" << endl;
            cout << "|| [8] Bundaran HI - Fatmawati                                      ||" << endl;
            cout << "||                                                                  ||" << endl;
            cout << "|| [11] Fatmawati - Bundaran HI     [14] Fatmawati - Istora         ||" << endl;
            cout << "|| [12] Fatmawati - Lebak Bulus     [15] Fatmawati - Blok M         ||" << endl;
            cout << "|| [13] Fatmawati - Senayan                                         ||" << endl;
            cout << "||                                                                  ||" << endl;
            cout << "|| [16] Senayan - Blok M            [19] Senayan - Blok M           ||" << endl;
            cout << "|| [17] Senayan - ISTORA            [20] Senayan - Bundaran HI      ||" << endl;
            cout << "|| [18] Senayan - Fatmawati                                         ||" << endl;
            cout << "||                                                                  ||" << endl;
            cout << "|| [21] ISTORA - Blok M            [24] ISTORA - Lebak Bulus        ||" << endl;
            cout << "|| [22] ISTORA - Senayan           [25] ISTORA - Bundaran HI        ||" << endl;
            cout << "|| [23] ISTORA - Fatmawati                                          ||" << endl;
            cout << "||==================================================================||" << endl << endl;
}
void tiket_dipesan(){
	            cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
}

void tiket_terpesan(){
	            cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;	
}


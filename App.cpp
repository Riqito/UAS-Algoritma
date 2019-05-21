#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <unistd.h>
#include "Login.h"
#include "kode_pesawatNew.h"
#include "kode_pesawat.h"
#include "jadwal.h"
#include "jadwal2.h"
#include "minigame.h"
using namespace std;

int Harga(int x, int z){
    int harga_total = x * z;
    cout << "\t|| HARGA TOTAL  : Rp " << harga_total << "                                           ||" << endl;
}
int tkt(int jml_tiket){
    cout << "\t|| JUMLAH TIKET : " << jml_tiket <<"                                                 ||" << endl;
}

int loading();


int main(){
	char p;
	int jml_tiket;
    int pil_menu;
    int i = 1;
    int tujuan[i];
    int harga;
    int pay;
    char loop;

	loading();
	system("cls");
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
	
	system("pause");
	system("cls");	
	
	struct data{string Nama;
                string pass;
                string pass2;
                string no_tlp;
                string umur;
                string username;}regis[128];

    string user,pwd;
    int pil,r=1,c=0,d=0;
    
//=====================================================================================================================    
    
    regis:
        for(r<100; r++;){
            cout << "\t\t|=========================================================|" << endl;
            cout << "\t\t|                      SHIFA INDUSTRIES                   |" << endl;
            cout << "\t\t|                                                         |" << endl;
            cout << "\t\t|=========================================================|" << endl;
            cout << "\t\t|                         REGISTRASI                      |" << endl;
            cout << "\t\t|=========================================================|" << endl;
            cout << "\t\t   Nama Lengkap     : "; getline(cin,regis[r].Nama);
            cout << "\t\t   Username         : "; getline(cin,regis[r].username);
            cout << "\t\t   No Telepon       : "; getline(cin,regis[r].no_tlp);
            cout << "\t\t   Umur             : "; getline(cin,regis[r].umur);
            cout << "\t\t   Password         : "; getline(cin,regis[r].pass);
            cout << "\t\t   Confirm Password : "; getline(cin,regis[r].pass2);

            if (regis[r].pass == regis[r].pass2){
                cout << "\n\nRegistrasi Berhasil" << endl;
            }else{
                cout << "/nPassword tidak sama";
                goto regis;
            }

            cout << "[1] Login " << endl;
            cout << "[2] Register" << endl;
            cout << "\n[0] Kembali" << endl;
            cout << "Masukan Pilihan : ";cin >> pil;
            cin.ignore(1024,'\n');

            if (pil == 1){
                system("cls");
                goto login;
            }else if (pil == 2){
                system("pause");
                system("cls");
                goto regis;
            }else if (pil == 0){
                cout << "kembali";
            }
            
            
            login:
        cout << "Masukan Username/No telpon : ";
        cin >> user;
        cout << "Masukan Password : ";
        cin >> pwd;
        for(int j=0;j<100;j++){
           if((user == regis[j].username)&& (pwd == regis[j].pass)){
                c=1;
                break;
            }
        }
        if (c==0){
            cout << "Username Atau Password Salah" << endl;
            system("pause");
            system("cls");
            goto login;
        }else {
            cout << "Login Berhasil" << endl;
           	loading();
            system("cls");
            goto menu_utama;
            
        }
//===========================================================================================================================
        
        menu_utama:
		int menu1;
			cout << setw(30) << "\t\t=======================================\n";
			cout << setw(22) << "\t\t|             Menu Utama              |\n";
			cout << setw(30) << "\t\t=======================================\n";
			cout << setw(30) << "\t\t| 1. MRT                              |\n";
			cout << setw(30) << "\t\t| 2. Pesawat                          |\n";
			cout << setw(30) << "\t\t| 3. Mini game                        |\n";
			cout << setw(30) << "\t\t| 4. Logout                           |\n";
			cout << setw(30) << "\t\t| 5. Tutup Aplikasi                   |\n";
			cout << setw(30) << "\t\t|-------------------------------------|\n\n\n";
			cout << "Pilih Menu : "; cin >> menu1;
			cout << "\n";
			system("cls");
				
		if(menu1 == 1){
			goto MRT_Tiket;
		}else if (menu1 == 2){
			goto beranda;
		}else if (menu1 == 3){
			system("cls");
			minigame();
		}else if(menu1 == 4){
			cout << "Anda sudah logout";
			loading();
			system("cls");
		}else if (menu1 == 5){
			exit(0);
		}else {
			cout <<"Menu tidak ada\n";
			system("pause");
			system("cls");
			goto menu_utama;
		}
		
	}
	//Menu Pesawat
	beranda:
		int menu;
		cout << setw(30) << "\t\t=======================================\n";
		cout << setw(22) << "\t\t|        Pesan Tiket Pesawat          |\n";
		cout << setw(30) << "\t\t=======================================\n";
		cout << setw(30) << "\t\t| 1. Cek Jadwal Penerbangan           |\n";
		cout << setw(30) << "\t\t| 2. Pesan Tiket                      |\n";
		cout << setw(30) << "\t\t| 3. Cek Tiket Pesanan                |\n";
		cout << setw(30) << "\t\t| 4. Kembali                          |\n";
		cout << setw(30) << "\t\t|-------------------------------------|\n\n\n";
		cout << "Pilih Menu : "; cin >> menu;
		cout << "\n";
		system("cls");

//==================================================================================================================
		
		if(menu == 1){
			goto CekPenerbangan;
		}else if (menu == 2){
			goto PesanTiket;
		}else if (menu == 3){
			goto CekTiketPesanan;
		}else if (menu == 3){
			goto menu_utama;
		}else {
			cout <<"Menu tidak ada\n";
			system("pause");
			system("cls");
			goto beranda;
	}
	
	CekPenerbangan:
		
		int tanggal;
		int tujuanPesawat;
		
		do{
			cout << setw(30) << "\t\t=======================================\n";
			cout << setw(22) << "\t\t|          Cek Penerbangan            |\n";
			cout << setw(30) << "\t\t=======================================\n";
			cout << setw(30) << "\t\t| 1. Cari Berdasarkan Tanggal         |\n";
			cout << setw(30) << "\t\t| 2. Cari Berdasarkan Tujuan          |\n";
			cout << setw(30) << "\t\t| 3. Kembali                          |\n";
			cout << setw(30) << "\t\t|-------------------------------------|\n\n\n";
			cout << "Pilih menu: "; cin >> pil;
			system("cls");
			
				if(pil == 1){
				berdasarkan_tanggal:
					cout << "Masukan Tanggal (April) : "; cin >> tanggal;
					if(tanggal == 24){
						Tanggal_24();
						goto CekPenerbangan_PesanTiket;
					}else if(tanggal == 25){
						Tanggal_25();
						goto CekPenerbangan_PesanTiket;
					}else if(tanggal == 26){
						Tanggal_26();
						goto CekPenerbangan_PesanTiket;
					}else if(tanggal == 27){
						Tanggal_27();
						goto CekPenerbangan_PesanTiket;
					}else if(tanggal == 28){
						Tanggal_28();
						goto CekPenerbangan_PesanTiket;
					}else if(tanggal == 29){
						Tanggal_29();
						goto CekPenerbangan_PesanTiket;
					}else if(tanggal == 30){
						Tanggal_30();
						goto CekPenerbangan_PesanTiket;
					}else{
						cout << "Penerbangan Belum Tersedia\n";
						system("pause");
						system("cls");
						goto berdasarkan_tanggal;

					}

					
			}else if(pil == 2){
			berdasarkan_tujuan:
				do{
				cout << setw(30) << "=======================================\n";
				cout << setw(22) << "|           Tujuan Tersedia           |\n";
				cout << setw(30) << "=======================================\n";
				cout << setw(30) << "| 1. Singapore                        |\n";
				cout << setw(30) << "| 2. Australia                        |\n";
				cout << setw(30) << "| 3. Vatikan                          |\n";
				cout << setw(30) << "|                                     |\n";
				cout << setw(30) << "| 4. Kembali                          |\n";
				cout << setw(30) << "|-------------------------------------|\n\n";
				cout << "Pilih Tujuan Penerbangan: "; cin >> tujuanPesawat;
				system("cls");
				
				if(tujuanPesawat == 1){
					Singapore();
					goto CekPenerbangan_PesanTiket;
				}else if(tujuanPesawat == 2){
					Australia();
					goto CekPenerbangan_PesanTiket;
				}else if(tujuanPesawat == 3){
					Vatikan();
					goto CekPenerbangan_PesanTiket;
				}else if(tujuanPesawat == 4){
					goto CekPenerbangan;
				}else{
					cout << "Pilihan Tidak Tersedia\n";
					system("pause");
					system("cls");
				}
				}while (tujuanPesawat != 1 && tujuanPesawat != 2 != tujuanPesawat != 3);
			
				
			}else if (pil == 3){
					goto beranda;
			}else{
				cout << "Pilihan Tidak Tersedia\n";
					system("pause");
					system("cls");	
			}
	}while(pil != 1 && pil != 2 && pil != 3);
	
//=======================================================================================================================	
		
	CekPenerbangan_PesanTiket:  //label penghubung cek pemesanan dgn Pesan Tiket
		int x;	//variabel buat milih
		do{
			cout << "==============================\n";
			cout << "| 1. Ke Cek Penerbangan      |\n";
			cout << "| 2. Pesan Sekarang          |\n";
			cout << "| 3. Beranda                 |\n";
			cout << "==============================\n"; cin >> x;
				if(x == 1){
					system("cls");
					goto CekPenerbangan;
				}else if(x == 2){
					system("cls");
					goto PesanTiket;
				}else if(x == 3){
					system("cls");
					goto beranda;
				}else{
					"Pilihan Tidak Tersedia\n";
				}
		}while(x != 1 && x != 2);
		
//==========================================================================================		
		
	PesanTiket:
		int tiket;
		char confirm;
		
		cout << "Masukan Tanggal Keberangkatan : "; cin >> tanggal;
		cout << "Tiket yang tersedia : \n";
					if(tanggal == 24){
						Tanggal_24();
						goto PesanSekarang;
					}else if(tanggal == 25){
						Tanggal_25();
						goto PesanSekarang;
					}else if(tanggal == 26){
						Tanggal_26();
						goto PesanSekarang;
					}else if(tanggal == 27){
						Tanggal_27();
						goto PesanSekarang;
					}else if(tanggal == 28){
						Tanggal_28();
						goto PesanSekarang;
					}else if(tanggal == 29){
						Tanggal_29();
						goto PesanSekarang;
					}else if(tanggal == 30){
						Tanggal_30();
						goto PesanSekarang;
					}else{
						cout << "Penerbangan Belum Tersedia\n";
						system("pause");
						system("cls");
						goto berdasarkan_tanggal;
					}
		
		PesanSekarang:
			int kode;
			int y; //Variabel buat Pilihan dibawah
				do{
				cout << "Masukan Kode Penerbangan: "; cin >> kode;
					if (kode <= 1000 <= 1004){
						kode1_pesawat(kode);
					}else if(kode <= 1005 <= 1008){
						kode2_pesawat(kode);
					}else if(kode <= 1009 <= 1012){
						kode3_pesawat(kode);
					}else if(kode <= 1013 <= 1016){
						kode4_pesawat(kode);
					}else if(kode <= 1017 <= 1020){
						kode5_pesawat(kode);
					}else if(kode <= 1021 <= 1024){
						kode6_pesawat(kode);
					}else if(kode <= 1025 <= 1028){
						kode7_pesawat(kode);
					}else if(kode <= 1029 <= 1042){
						kode8_pesawat(kode);
					}else if(kode <= 1043 <= 1049){
						kode9_pesawat(kode);
					}else if(kode <= 1050 <= 1056){
						kode10_pesawat(kode);
			}
			}while(kode < 1000 && kode > 1056);	
				
			do{
					cout << "==============================\n";
					cout << "| 1. Cek Tiket Pesanan       |\n";
					cout << "| 2. Beranda                 |\n";
					cout << "==============================\n"; cin >> y;
						if(y == 1){
							system("cls");
							goto CekTiketPesanan;
						}else if(y == 2){
							system("cls");
							goto beranda;
						}else{
							"Pilihan Tidak Tersedia\n";
						}
			}while(y != 1 && y != 2);
				
				
		CekTiketPesanan:
			int z; //Variabel buat milih 
			char confirm_bayar; //Variabel konfirmasi bayar
			cout << "|===========================================================|\n";
			cout << "|                       Tiket Pesanan                       |\n";
			cout << "|===========================================================|\n\n";
		
			kode_pesawat(kode, z, confirm_bayar);
			
			do{
					cout << "==============================\n";
					cout << "| 1. Bayar Tiket             |\n";
					cout << "| 2. Batalkan Pemesanan      |\n";
					cout << "| 3. Beranda                 |\n";
					cout << "==============================\n"; cin >> z; //milih ini
						if(z == 1){
							do{
							cout << "Konfirmasi Pembayaran (Y/N) )?\n"; cin >> confirm_bayar;
								if (confirm_bayar == 'y' || confirm_bayar == 'Y'){
									cout << "Pembayaran Berhasil\n";
									system("pause");
									system("cls");		
									goto CekTiketPesanan;				
								}else if(confirm_bayar == 'n' || confirm_bayar == 'N'){
									cout << "Pembayaran Dibatalkan\n";
									goto CekTiketPesanan;
								}else{
									cout << "Silahkan Pilih Lagi :) \n\n";
								}
							}while((confirm_bayar != 'y' || confirm_bayar != 'Y') && (confirm_bayar != 'n' || confirm_bayar != 'N'));
						}else if(z == 2 && (confirm_bayar != 'y' && confirm_bayar != 'Y')){
							cout << "Pemesanan Berhasil Dibatalkan\n";
							system("pause");
							system("cls");
							goto beranda;
						}else if(z == 3){
							system("cls");
							goto beranda;
						}else if(z == 2 && (confirm_bayar=='y' || confirm_bayar == 'Y')){
							cout << "Pembayaran sudah dilakukan, tidak bisa dibatalkan\n";
							system("pause");
							system("cls");
							goto beranda;
						}else{
							"Pilihan Tidak Tersedia\n";

						}
			}while(x != 1 && x != 2);	


	
//================================================================================================================	

	


    MRT_Tiket:

        cout << "\t||===========================================||" << endl;
        cout << "\t||               Pemesanan Tiket             ||" << endl;
        cout << "\t||                     MRT                   ||" << endl;
        cout << "\t||===========================================||" << endl;
        cout << "\t|| [1] Single Trip                           ||" << endl;
        cout << "\t||                                           ||" << endl;
        cout << "\t|| [0] Kembali                               ||" << endl;
        cout << "\t||===========================================||" << endl << endl;

        cout << "Masukan Pilihan : ";cin >> pil_menu;
        if (pil_menu == 1){
            system("pause");
            system("cls");
            goto Single_Trip;
        }else if (pil_menu == 0){
        	system("pause");
        	system("cls");
            goto menu_utama;
        }else{
            goto MRT_Tiket;
        }


    Single_Trip:
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
        cout << "Masukan Pilihan : ";cin >> pil_menu;
        if (pil_menu == 1){
            system("pause");
            system("cls");
            goto Pesan_MRT;
        }else if (pil_menu == 2){
            system("pause");
            system("cls");
            goto Cek_MRT;
        }else if (pil_menu == 0){
        	system("pause");
        	system("cls");
            goto menu_utama;
        }else{
            system("cls");
            goto Single_Trip;
        }





    Pesan_MRT:
        for(i <= 10; i++;){
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
            cout << "PILIH TUJUAN : ";cin >> tujuan[i];
            cout << "JUMLAH TIKET YANG DIBELI : "; cin >> jml_tiket;
            system("cls");
            if (tujuan[i] == 1) {

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Blok M                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 8.000                                          ||" << endl;
                Harga(jml_tiket,8000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;

            }else if (tujuan[i] == 2){

                cout << endl << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                     ||" << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                                Pesan MRT                        ||" << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                    ||" << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                                                                 ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Bundara HI                         ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                        ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                 ||" << endl;
                cout << "\t||=================================================================||" << endl;
                break;
            }else if (tujuan[i] == 3){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Senayan                             ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 10.000                                         ||" << endl;
                Harga(jml_tiket,10000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 4){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - ISTORA                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 11.000                                         ||" << endl;
                Harga(jml_tiket,11000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;

            }else if (tujuan[i] == 5){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Fatmawati                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 4.000                                          ||" << endl;
                Harga(jml_tiket,4000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 6){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Lebak Bulus                         ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 7){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Senayan                             ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 6.000                                          ||" << endl;
                Harga(jml_tiket,6000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 8){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Fatmawati                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 13.000                                         ||" << endl;
                Harga(jml_tiket,13000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 9){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Blok M                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 8.000                                          ||" << endl;
                Harga(jml_tiket,8000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 10){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - ISTORA                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 5.000                                          ||" << endl;
                Harga(jml_tiket,5000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 11){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Bundaran HI                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 13.000                                         ||" << endl;
                Harga(jml_tiket,13000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 12){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Lebak Bulus                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 13){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Senayan                               ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 9.000                                          ||" << endl;
                Harga(jml_tiket,9000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 14){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati ISTORA                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 9.000                                          ||" << endl;
                Harga(jml_tiket,9000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 15){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Blok M                                ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 7.000                                          ||" << endl;
                Harga(jml_tiket,7000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 16){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - Blok M                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 17){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - ISTORA                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 3.000                                          ||" << endl;
                Harga(jml_tiket,3000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 18){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - Fatmawati                               ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 19){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - blok M                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 20){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - Bundaran HI                             ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 6.000                                         ||" << endl;
                Harga(jml_tiket,6000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 21){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Blok M                                   ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 22){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Senayan                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 3.000                                         ||" << endl;
                Harga(jml_tiket,3000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 23){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Fatmawati                                ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else if (tujuan[i] == 24){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Lebak Bulus                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;

            }else if (tujuan[i] == 25){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Bundaran HI                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 5.000                                          ||" << endl;
                Harga(jml_tiket,5000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else{
                cout << "Masukan Pilihan Yang Benar !!" << endl;
                system("pause");
                system("cls");
                goto Pesan_MRT;
            }
        }

        i++;


    cout << "\n\nSELAMAT TIKET BERHASIL DIPESAN" << endl;
    system("pause");
    system("cls");
    goto Single_Trip;




    Cek_MRT:
        int j = 1;
        for(j <= i; j++;){
            if (tujuan[j] == 1) {
                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Blok M                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 8.000                                          ||" << endl;
                Harga(jml_tiket,8000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 8000;
            }else if (tujuan[j] == 2){
                cout << endl << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                     ||" << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                                Pesan MRT                        ||" << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                    ||" << endl;
                cout << "\t||=================================================================||" << endl;
                cout << "\t||                                                                 ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Bundara HI                         ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                        ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                 ||" << endl;
                cout << "\t||=================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 3){
                cout << "JUMLAH TIKET YANG DIBELI : "; cin >> jml_tiket;
                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Senayan                             ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 10.000                                         ||" << endl;
                Harga(jml_tiket,10000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 10000;
            }else if (tujuan[j] == 4){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - ISTORA                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 11.000                                         ||" << endl;
                Harga(jml_tiket,11000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 11000;
            }else if (tujuan[j] == 5){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Fatmawati                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 4.000                                          ||" << endl;
                Harga(jml_tiket,4000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 4000;
            }else if (tujuan[j] == 6){
                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Lebak Bulus                         ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 7){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Senayan                             ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 6.000                                          ||" << endl;
                Harga(jml_tiket,6000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 6000;
            }else if (tujuan[j] == 8){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Fatmawati                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 13.000                                         ||" << endl;
                Harga(jml_tiket,13000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 13000;
            }else if (tujuan[j] == 9){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Blok M                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 8.000                                          ||" << endl;
                Harga(jml_tiket,8000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 8000;
            }else if (tujuan[j] == 10){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - ISTORA                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 5.000                                          ||" << endl;
                Harga(jml_tiket,5000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 5000;
            }else if (tujuan[j] == 11){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Bundaran HI                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 13.000                                         ||" << endl;
                Harga(jml_tiket,13000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 13000;
            }else if (tujuan[j] == 12){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Lebak Bulus                           ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 13){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Senayan                               ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 9.000                                          ||" << endl;
                Harga(jml_tiket,9000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 9000;
            }else if (tujuan[j] == 14){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati ISTORA                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 9.000                                          ||" << endl;
                Harga(jml_tiket,9000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 9000;
            }else if (tujuan[j] == 15){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Fatmawati - Blok M                                ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 7.000                                          ||" << endl;
                Harga(jml_tiket,7000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 7000;
            }else if (tujuan[j] == 16){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - Blok M                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 17){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - ISTORA                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 3.000                                          ||" << endl;
                Harga(jml_tiket,3000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 3000;
            }else if (tujuan[j] == 18){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - Fatmawati                               ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 19){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - blok M                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 20){
                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Senayan - Bundaran HI                             ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 6.000                                         ||" << endl;
                Harga(jml_tiket,6000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 6000;
            }else if (tujuan[j] == 21){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Blok M                                   ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 22){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Senayan                                  ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 3.000                                         ||" << endl;
                Harga(jml_tiket,3000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 3000;
            }else if (tujuan[j] == 23){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Fatmawati                                ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 24){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Lebak Bulus                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 14000;
            }else if (tujuan[j] == 25){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                           Tiket Yang Dipesan                     ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : ISTORA - Bundaran HI                              ||" << endl;
                tkt(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 5.000                                          ||" << endl;
                Harga(jml_tiket,5000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = jml_tiket * 5000;
            }else{
                cout << "Tiket Belum Dipesan !!" << endl;

            }
            cout << endl << endl;
            cout << " [1] Bayar Tiket" << endl;
            cout << " [0] Kembali" << endl;
            cout << "Masukan Pilihan : ";
            cin >> pil_menu;

            if (pil_menu == 1){
                goto Bayar;
            }else if (pil_menu == 0) {
                system("pause");
                system("cls");
                goto Single_Trip;
            }else{
                cout << "MASUKAN PILIHAN YANG BENAR !!" << endl;
                system("pause");
                system("cls");
                goto Single_Trip;
            }
        }


        Bayar:
            cout << "Harga Total = " << harga << endl;
            cout << "Total Pembayaran : Rp ";cin >> pay;
            if(pay < harga){
                cout << "Uang Yang anda masukan Kurang !!!"<< endl;
                system("pause");
                system("cls");
                goto Cek_MRT;
            }else{
                int sisa = pay - harga;
                cout << "Kembalian : Rp " << sisa << endl;

                system("pause");

                system("cls");
                goto MRT_Tiket;
            }

}

	

int loading(){
	int ld;
	int j;
	for (ld=0;ld<=100;ld++){

	cout << "\n\t\tLoading.." << ld << "%\n";
	for(int j=1;j<=ld;j++){
			cout << "=";
	}cout << endl;
		usleep(50);
	system("cls");

}
}

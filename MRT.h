#include <iostream>
#include <windows.h>

using namespace std;

int Harga(int x, int z){
    int harga_total = x * z;
    cout << "\t|| HARGA TOTAL  : Rp " << harga_total << "                                           ||" << endl;
}
void tiket(int jml_tiket){
    cout << "\t|| JUMLAH TIKET : " << jml_tiket <<"                                                 ||" << endl;
}


int MRT(){
    int jml_tiket;
    int pil_menu;
    int i = 1;
    int tujuan[i];
    int harga;
    int pay;
    char loop;

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
            cout << "kembali" << endl;
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
            cout << "kembali";
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 5.000                                          ||" << endl;
                Harga(jml_tiket,5000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                break;
            }else{
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
                tiket(jml_tiket);
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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                        ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                 ||" << endl;
                cout << "\t||=================================================================||" << endl;
                harga = Harga(jml_tiket,14000);
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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 10.000                                         ||" << endl;
                Harga(jml_tiket,10000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,10000);
            }else if (tujuan[j] == 4){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - ISTORA                              ||" << endl;
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 11.000                                         ||" << endl;
                Harga(jml_tiket,11000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,11000);

            }else if (tujuan[j] == 5){

                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Lebak Bulus - Fatmawati                           ||" << endl;
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 4.000                                          ||" << endl;
                Harga(jml_tiket,4000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,4000);
            }else if (tujuan[j] == 6){
                cout << endl << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                             Pemesanan Tiket                      ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                Pesan MRT                         ||" << endl;
                cout << "\t||==================================================================||" << endl;
                cout << "\t||                                                                  ||" << endl;
                cout << "\t|| TIKET TUJUAN : Bundaran HI - Lebak Bulus                         ||" << endl;
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,4000);
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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 6.000                                          ||" << endl;
                Harga(jml_tiket,6000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,6000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 13.000                                         ||" << endl;
                Harga(jml_tiket,13000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,13000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 8.000                                          ||" << endl;
                Harga(jml_tiket,8000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,8000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 5.000                                          ||" << endl;
                Harga(jml_tiket,5000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,5000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 13.000                                         ||" << endl;
                Harga(jml_tiket,13000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,13000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,14000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 9.000                                          ||" << endl;
                Harga(jml_tiket,9000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,9000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 9.000                                          ||" << endl;
                Harga(jml_tiket,9000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,9000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 7.000                                          ||" << endl;
                Harga(jml_tiket,7000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,7000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,14000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 3.000                                          ||" << endl;
                Harga(jml_tiket,3000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,3000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,14000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,14000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 6.000                                         ||" << endl;
                Harga(jml_tiket,6000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,6000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,14000);
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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 3.000                                         ||" << endl;
                Harga(jml_tiket,3000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,3000);
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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,14000);
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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 14.000                                         ||" << endl;
                Harga(jml_tiket,14000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,14000);

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
                tiket(jml_tiket);
                cout << "\t|| HARGA SATUAN : Rp 5.000                                          ||" << endl;
                Harga(jml_tiket,5000);
                cout << "\t||                                                                  ||" << endl;
                cout << "\t||==================================================================||" << endl;
                harga = Harga(jml_tiket,5000);
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
            int sisa = pay - harga;
            cout << "Kembalian : Rp " << sisa << endl;

            system("pause");

            system("cls");
            goto MRT_Tiket;
}

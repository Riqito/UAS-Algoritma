#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;
int Login(){

    struct data{string Nama;
                string pass;
                string pass2;
                string no_tlp;
                string umur;
                string username;}regis[128];

    string user,pwd;
    int pil,i=1,c=0,d=0;


    regis:
        for(i<100; i++;){
            cout << "|=========================================================|" << endl;
            cout << "|                      SHIFA INDUSTRIES                   |" << endl;
            cout << "|                                                         |" << endl;
            cout << "|=========================================================|" << endl;
            cout << "|                         REGISTRASI                      |" << endl;
            cout << "|=========================================================|" << endl;
            cout << "   Nama Lengkap     : "; getline(cin,regis[i].Nama);
            cout << "   Username         : "; getline(cin,regis[i].username);
            cout << "   No Telepon       : "; getline(cin,regis[i].no_tlp);
            cout << "   Umur             : "; getline(cin,regis[i].umur);
            cout << "   Password         : "; getline(cin,regis[i].pass);
            cout << "   Confirm Password : "; getline(cin,regis[i].pass2);

            if (regis[i].pass == regis[i].pass2){
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
                system("pause");
                system("cls");
                break;
            }else if (pil == 2){
                system("pause");
                system("cls");
                continue;
            }else if (pil == 0){
                cout << "kembali";
            }
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
            goto login;
        }else {
            cout << "Login Berhasil" << endl;
            
        }

}

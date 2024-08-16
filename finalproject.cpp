#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// fungsi diskon
int diskon(int alpa){
    int beta = 0.2 * alpa;
    return beta;
}
// main fungsi
int main()
{
// Dekralasi Variabel
//variabel harga
    const int hrg_matic [4] = {300000, 360000, 370000, 400000};
    const int hrg_manual [3]= {250000, 300000, 350000};
    long int total_hrg, 
    hrg_diskon, 
    hrg_bayar, 
    uang, kembalian;
    int hrg_sewa;
 //variabel konsumen dan kasir
    string nama;   
    string alamat;
    string username, pass;
    string nik[2];
    char shadow[16]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
    char tgl_sewa[10];
    char nohp[13]; 
//Main Varibel 
    string mobil;
    string merk_mobil;
    int pin, hri, pilih;
    int lama, total_denda, tenggat;
    int denda = 100000;
    char ulang;
    int i = 0;
//Program Utama
    do
    {
// Login Kasir
        system("cls");
        system("Color 07");
        cout<<"\n\t--------------------------------------------------"<<endl;
        cout<<"\t|\t\t MENU LOGIN KASIR                |"<<endl;
        cout<<"\t=================================================="<<endl;
        cout<<"\tMasukkan Username : ";cin>>username;
        cout<<"\tMasukkan Password : ";cin>>pass;
            if (username == "admin" && pass == "admin")
            {
                system("Color 0A");
                cout<<"\n\t--------------------------------------------------\n";
                cout<<"\t\t\tANDA BERHASIL LOGIN!!!"<<endl;
                cout<<"\t\t  Tekan ENTER untuk Melanjutkan!!!";getch();
//Pemilihan transansaksi
                do
                { 
                    system("Color 07");
                    system("cls");
                    cout<<"\t-------------------------------------------------\n";
                    cout<<"\t                Pilih Transaksi                  \n";
                    cout<<"\t-------------------------------------------------"<<endl;
                    cout<<"\t|      1. Penyewaan     |     2. Pengembalian   |"<<endl;
                    cout<<"\t-------------------------------------------------"<<endl;
                    cout<<"\n\tMasukkan Pilihan : ";cin>>pilih;
                    if (pilih == 1)
                    {
//Data Penyewaan, Input data konsumen
                        i++;
                            system("cls");
                            cout<<"\t-------------------------------------------------\n";
                            cout<<"\t              Program Rental Mobil               \n";
                            cout<<"\t-------------------------------------------------"<<endl;
                            cout<<"\tNomor Transaksi                  :     "<<"["<<i<<"]\n"<<endl;
                            cout<<"\t***            IDENTITAS KONSUMEN             ***\n"<<endl;
                            cin.ignore();
                            cout<<"\tNama Kosumen                     : ";getline(cin, nama);
                            cout<<"\tNIK (16 Digit)                   : ";cin>>nik[0];
                            cin.ignore();
                            cout<<"\tNomer Hp Kosumen                 : ";cin>>nohp;
                            cin.ignore();
                            cout<<"\tAlamat Konsumen                  : ";getline(cin, alamat);
                            cout<<"\tTanggal Penyewaan(01/01/2022)    : ";cin>>tgl_sewa;
//Input pilihan mobil & perhitungan harga
                                do
                                { ulang = 'a';
                                hrg_diskon = 0;
                                    system("Color 07");  
                                    system("cls");
                                    cout<<"\t-------------------------------------------------"<<endl;
                                    cout<<"\t***        Memilih Tipe Mobil Sewaan          ***"<<endl;    
                                    cout<<"\t-------------------------------------------------\n"<<endl;
                                    cout<<"\t 1.MATIC"<<endl;
                                    cout<<"\t 2.MANUAL"<<endl<<"\n";
                                    cout<<"\t Pilih Tipe Mobil : ";cin>>mobil;
                                    cout<<"\t-------------------------------------------------\n"<<endl;
//Tampilan List Mobil Matic 
                                        if (mobil == "1.MATIC" || mobil == "1" || mobil == "MATIC" || mobil == "matic" || mobil == "1.matic")
                                        {
                                            cout<<"\t-------------------------------------------------"<<endl;
                                            cout<<"\t***           Memilih Mobil Matic             ***"<<endl;    
                                            cout<<"\t-------------------------------------------------\n"<<endl;
                                            cout<<"\t1. New Daihatsu Ayla Matic        | Rp.300.000/hr"<<endl;
                                            cout<<"\t2. Honda Brio Satya E CVT Matic   | Rp.360.000/hr"<<endl;
                                            cout<<"\t3. Daihatsu Sigra R.Deluxe Matic  | Rp.400.000/hr"<<endl;
                                            cout<<"\t4. Daihatsu Sirion Matic          | Rp.300.000/hr"<<endl;
                                            cout<<"\t5. Suzuki Ignis GX AGS Matic      | Rp.370.000/hr"<<endl;
                                            cout<<"\t-------------------------------------------------"<<endl;
                                            cout<<"\t***   Diskon 20% Jika Menyewa lebih 5 Hari    ***"<<endl;
                                            cout<<"\t-------------------------------------------------\n"<<endl;
                                            cout<<"\t Masukkan Pilihan Anda (Angka Urutannya) : ";cin>>pin;
                                            cout<<"\t Berapa Hari Anda Ingin Menyewa    : ";cin>>hri;
// Algoritma perhitungan harga sewa mobil matic
                                                switch (pin)
                                                {
                                                case 1:
                                                    merk_mobil = "New Daihatsu Ayla Matic";
                                                    hrg_sewa = hrg_matic[0];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 2:
                                                    merk_mobil = "Honda Brio Satya E CVT Matic";
                                                    hrg_sewa = hrg_matic[1];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 3:
                                                    merk_mobil = "Daihatsu Sigra R.Deluxe Matic";
                                                    hrg_sewa = hrg_matic[3];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 4:
                                                    merk_mobil = "Daihatsu Sirion Matic";
                                                    hrg_sewa = hrg_matic[0];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 5:
                                                    merk_mobil = "Suzuki Ignis GX AGS Matic";
                                                    hrg_sewa = hrg_matic[2];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;        
                                                default:
                                                system("cls");
                                                system("Color 0C");
                                                    ulang = 'Y';
                                                    cout<<"\n\t|  SISTEM GAGAL!!! Pilihan Anda Tidak Ada  |"<<endl;
                                                    cout<<"\t|  Tekan ENTER untuk Mengulang!!!          |";getch();
                                                    break;
                                                }
// Tampilan list mobil manual
                                        }else if (mobil == "2.MANUAL" || mobil == "2" || mobil == "MANUAL" || mobil == "manual" || mobil == "2.manual")
                                        {
                                            cout<<"\t-------------------------------------------------"<<endl;
                                            cout<<"\t***           Memilih Mobil Manual            ***"<<endl;    
                                            cout<<"\t-------------------------------------------------\n"<<endl;
                                            cout<<"\t1. New Daihatsu Ayla Manual       | Rp.250.000/hr"<<endl;
                                            cout<<"\t2. Honda Brio Satya CVT Manual    | Rp.300.000/hr"<<endl;
                                            cout<<"\t3. Daihatsu Sigra Manual          | Rp.350.000/hr"<<endl;
                                            cout<<"\t4. Daihatsu Sirion Sport Manual   | Rp.250.000/hr"<<endl;
                                            cout<<"\t5. Suzuki Ignis GX AGS Manual     | Rp.300.000/hr"<<endl;
                                            cout<<"\t-------------------------------------------------"<<endl;
                                            cout<<"\t***   Diskon 20% Jika Menyewa lebih 5 Hari    ***"<<endl;
                                            cout<<"\t-------------------------------------------------\n"<<endl;
                                            cout<<"\t Masukkan Pilihan Anda (Angka Urutan) : ";cin>>pin;
                                            cout<<"\t Berapa Hari Anda Ingin Menyewa    : ";cin>>hri;
// Algoritma perhitungan harga sewa mobil manual
                                                switch (pin)
                                                {
                                                case 1:
                                                    merk_mobil = "New Daihatsu Ayla Manual";
                                                    hrg_sewa = hrg_manual[0];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 2:
                                                    merk_mobil = "Honda Brio Satya CVT Manual";
                                                    hrg_sewa = hrg_manual[1];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 3:
                                                    merk_mobil = "Daihatsu Sigra Manual";
                                                    hrg_sewa = hrg_manual[2];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 4:
                                                    merk_mobil = "Daihatsu Sirion Sport Manual";
                                                    hrg_sewa = hrg_manual[0];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                case 5:
                                                    merk_mobil = "Suzuki Ignis GX AGS Manual";
                                                    hrg_sewa = hrg_manual[1];
                                                    total_hrg = hrg_sewa * hri;
                                                    if (hri>5)
                                                    {
                                                        hrg_diskon = diskon(total_hrg);
                                                        cout<<"\t Anda mendapat diskon 20%"<<endl;
                                                    }
                                                    break;
                                                default:
                                                system("cls");
                                                system("Color 0C");
                                                    ulang = 'Y';
                                                    cout<<"\n\t|  SISTEM GAGAL!!! Pilihan Anda Tidak Ada  |"<<endl;
                                                    cout<<"\t|  Tekan ENTER untuk Mengulang!!!          |";getch();
                                                    break;
                                                }
                                        }else {
                                            system("Color 0C");
                                            ulang = 'Y';
                                            cout<<"\t  Tipe yang anda masukkan salah!!!"<<endl;
                                            cout<<"\t  Tekan ENTER untuk Mengulang!!!";getch();
                                        }
                                } while (ulang == 'Y');
                        cout<<"\t-------------------------------------------------"<<endl;
                        cout<<"\t Lama Penyewaan         : "<<hri<<" Hari"<<endl;
                        cout<<"\t Total Harga            : Rp."<<total_hrg<<endl;
                        cout<<"\t Total Diskon           : Rp."<<hrg_diskon<<endl;
                        hrg_bayar = total_hrg - hrg_diskon;
                        cout<<"\t Total Bayar            : Rp."<<hrg_bayar<<endl;
                        cout<<"\t Jumlah Uang Pembayaran : Rp.";cin>>uang;
                        kembalian = uang - hrg_bayar;
                        cout<<"\t-------------------------------------------------"<<endl;                                    
//Struk transaksi
                        system("cls");
                        cout<<"\t-------------------------------------------------"<<endl;
                        cout<<"\t            Struk Penyewaan Mobil                "<<endl;
                        cout<<"\t-------------------------------------------------"<<endl;
                        cout<<"\t No Transaksi           : ["<<i<<"]"<<endl;
                        cout<<"\t NIK                    : "<<nik[0]<<endl;
                        cout<<"\t Nama                   : "<<nama<<endl;
                        cout<<"\t No Handphone           : "<<nohp<<endl;
                        cout<<"\t Alamat                 : "<<alamat<<endl;
                        cout<<"\t-------------------------------------------------"<<endl;
                        cout<<"\t***               Rincian Sewa                ***"<<endl;
                        cout<<"\t-------------------------------------------------"<<endl;
                        cout<<"\t Penyewaan : "<<endl;
                        cout<<"\t\t    > "<<merk_mobil<<endl;
                        cout<<"\n\t Harga sewa Mobil      : Rp."<<hrg_sewa<<endl;
                        cout<<"\t Tanggal Mulai Sewa    : "<<tgl_sewa<<endl;
                        cout<<"\t Lama Penyewaan        : "<<hri<<" Hari"<<endl;
                        cout<<"\t Total Harga Sewa      : Rp."<<total_hrg<<endl;
                        cout<<"\t Diskon                : Rp."<<hrg_diskon<<endl;
                        cout<<"\t Total Harga Bayar     : Rp."<<hrg_bayar<<endl;
                        cout<<"\t Jumlah Uang           : Rp."<<uang<<endl;
                        cout<<"\t Kembalian             : Rp."<<kembalian<<endl;
                        cout<<"\t-------------------------------------------------"<<endl;
                        cout<<"\t***       Denda Keterlambatan Pengembalian    ***"<<endl;
                        cout<<"\t**              Rp. 100.000 / Hari             **"<<endl;
                        cout<<"\t-------------------------------------------------"<<endl;  
//Data Pengembalian, Mencari data konsumen
                    }else if (pilih == 2)
                    {
                        do
                        {                            
                            system("cls");
                            ulang = 'A';
                            cout<<"\t-------------------------------------------------\n";
                            cout<<"\t             Program Pengembalian                \n";
                            cout<<"\t-------------------------------------------------"<<endl;
                            cout<<"\tPencarian Data : "<<endl;
                            // cout<<"\t NIK                    : "<<nik[0]<<endl;
                            cout<<"\tMasukkan NIK (16 digit) : ";cin>>nik[1];
                            if (nik[0] == nik[1])
                            {
                                cout<<"\t-------------------------------------------------\n";
                                cout<<"\t***            IDENTITAS KONSUMEN             ***\n";
                                cout<<"\t-------------------------------------------------"<<endl;
                                cout<<"\t No Transaksi           : ["<<i<<"]"<<endl;
                                cout<<"\t NIK                    : "<<nik[1]<<endl;
                                cout<<"\t Nama                   : "<<nama<<endl;
                                cout<<"\t No Handphone           : "<<nohp<<endl;
                                cout<<"\t Alamat                 : "<<alamat<<endl;
                                cout<<"\t-------------------------------------------------"<<endl;
                                cout<<"\t***               Rincian Sewa                ***"<<endl;
                                cout<<"\t***       Denda Keterlambatan Pengembalian    ***"<<endl;
                                cout<<"\t***             Rp. 100.000 / Hari            ***"<<endl;
                                cout<<"\t-------------------------------------------------"<<endl;
                                cout<<"\t Penyewaan : "<<endl;
                                cout<<"\t\t    > "<<merk_mobil<<endl;
                                cout<<"\t Lama Penyewaan        : "<<hri<<" Hari"<<endl;
                                cout<<"\t Tanggal Mulai Sewa    : "<<tgl_sewa<<endl;
                                cout<<"\t Lama Penggunaan       : ";cin>>lama;
                                cout<<"\t-------------------------------------------------"<<endl;
                                tenggat = lama - hri;
//Perhitungan Denda
                                if (lama > hri)
                                {
                                    total_denda = tenggat * denda;
                                        cout<<"\t***                Denda Sewa                 ***"<<endl;
                                        cout<<"\t-------------------------------------------------"<<endl;
                                        cout<<"\t Anda Mendapat Denda Pengembalian Mobil"<<endl;
                                        cout<<"\t Denda                     : Rp. "<<total_denda<<endl;
                                        cout<<"\t Jumlah Uang Pembayaran    : Rp. ";cin>>uang;
                                        if (uang == total_denda || uang > total_denda)
                                        {  kembalian = uang - total_denda;                                  
                                            cout<<"\t Kembalian                 : Rp. "<<kembalian<<endl;
                                            cout<<"\t-------------------------------------------------"<<endl;
                                            cout<<"\t***            PEMBAYARAN SUKSES              ***"<<endl;
                                            cout<<"\tTekan ENTER untuk menyelesaikan transaksi ";getch();
                                            ulang = 'A';cout<<"\n";                                            
                                        }else{
                                            system("Color 0C");
                                            cout<<"\t-------------------------------------------------"<<endl;
                                            cout<<"\t***            PEMBAYARAN GAGAL              ***"<<endl;
                                            cout<<"\tTekan ENTER untuk mengulangi pembayaran ";getch();
                                            ulang = 'Y';cout<<"\n";
                                        }
                                    system("cls");    
                                }else{
                                    cout<<"\t***          Pengembalian Tepat Waktu         ***"<<endl;
                                }
// Struk Pengembalian
                                cout<<"\t-------------------------------------------------"<<endl;
                                cout<<"\t                 Struk Transaksi                 "<<endl;
                                cout<<"\t-------------------------------------------------"<<endl;
                                cout<<"\t No Transaksi ["<<i<<"]"<<endl;
                                cout<<"\n\t                TRANSAKSI SELESAI                "<<endl;
                            }else{
                                system("Color 0C");
                                cout<<"\t-------------------------------------------------\n";
                                cout<<"\t***           IDENTITAS TIDAK ADA             ***\n";
                                cout<<"\t-------------------------------------------------"<<endl;
                                cout<<"\tApakah Anda Ingin Mengulangi Pencarian? [Y/T] = ";cin>>ulang;
                            }
                            system("Color 07");
                        } while (ulang == 'Y' || ulang== 'y');
                    }else{
                        cout<<"\tPilihan Anda Salah!!!"<<endl;
                    }
                    cout<<"\t-------------------------------------------------"<<endl;
                    cout<<"\n\tApakah Anda Ingin Mengulangi Transaksi? [Y/T] = ";cin>>ulang; 
                } while (ulang == 'Y' || ulang == 'y');
                    exit(0);
            }
            system("Color 0C");    
            cout<<"\n\n\tUsername atau Password yang anda masukkan salah!!!"<<endl;
            cout<<"\tTekan ENTER untuk Mengulang!!!";getch();
            ulang = 'Y';            
    }while (ulang == 'Y');
    return 0;
}
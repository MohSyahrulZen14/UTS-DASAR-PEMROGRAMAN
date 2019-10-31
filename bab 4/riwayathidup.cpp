#include <iostream>
using namespace std;

int main()
{
    cout << "====================================== \n" << endl;
    cout << "= NAMA : MOH.SYAHRUL ZEN             = \n" << endl;
    cout << "= NIM  : A2.1900108                  = \n" << endl;
    cout << "= PRODI: TEKNIK INFORMATIKA          = \n" << endl;
    cout << "= EMAIL: syahrulzen33@gmail.com      = \n" << endl;
    cout << "====================================== \n" << endl;

    cout << "********************\n" << endl;
    cout << "LATIHAN INPUT OUTPUT\n" << endl;
    cout << "********************\n" << endl;

    char tampilkan[1];
    char nama[50],alamat[50],tl[50],jk[50],no[50],pekerjaan[50],email[50],website[50];
    cout << "==========================================\n";
    cout << "          DAFTAR RIWAYAT HIDUP            \n";
    cout << "==========================================\n\n";
    cout << "Nama:";
    cin.getline(nama,50);
    cout << "Alamat:";
    cin.getline(alamat,50);
    cout << "Tanggal Lahir:";
    cin.getline(tl,50);
    cout << "Jenis Kelamin:";
    cin.getline(jk,50);
    cout << "No Telp/HP:";
    cin.getline(no,50);
    cout << "Pekerjaan:";
    cin.getline(pekerjaan,50);
    cout << "Email:";
    cin.getline(email,50);
    cout << "Website:";
    cin.getline(website,50);
    cout <<"Jurusan : Teknik Informatika STMIK Sumedang";
    cin.getline(tampilkan,1);
    return 0;
}

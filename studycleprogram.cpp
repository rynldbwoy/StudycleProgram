//Nama  : Raynaldy Mahdi Putra
//NPM   : 1810631170229
//Teknik Informatika
//Universitas Singaperbangsa Karawang

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

using namespace std;
    int data[100];
    int jumlah;
    float rata,jum;
    int a,c;
    int s=0;
    int t=1;

void pengurutan()
{
    cout<<"\nMasukan jumlah data   : "; cin>>jumlah;

    for(int i=0; i<jumlah; i++)
    {
        cout<<"Masukan bilangan ke-"<< i+1<< " = "; cin>>data[i];
    }
    cout << endl << endl;
    cout<<"\nData sebelum diurutkan : ";
    for(int i=0; i<jumlah; i++)
    {
        cout<<data[i]<<" ";
    }
    for(int i=0; i<jumlah; i++)
    {
        for(int j=i+1; j<jumlah; j++)
        {
            if(data[i]>data[j])
            {
                int k=data[i];
                data[i]=data[j];
                data[j]=k;
            }
        }
    }
    cout<<endl;
    cout<<"\nData setelah diurutkan : ";
    for(int i=0; i<jumlah; i++)
    {
        cout<<data[i]<<" ";
    }
    getch();
}

void meanrata()
{
    cout<<"\nMasukan jumlah data   : ";
    cin>>jumlah;
    cout<<endl;

    for (int i=0; i<jumlah; i++)
        {
           cout<<"Masukan bilangan ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }

    rata=jum/jumlah;

    cout<<endl;
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
  getch();
}

void mediantengah()
{
    int min, max;
    cout << "\nMasukan jumlah data   : "; cin >>jumlah;
    cout << endl;

    for (int i = 1; i <=jumlah; i++)
        {
        cout << "Masukan bilangan ke-"<<i<<" = "; cin >> a;
        s=s+a;
        if ( i == 1 )
        {
            min = a;
            max = a;
        }
        else if ( min > a )
        {
            min =a;
        }
        else if ( max < a)
        {
            max = a;
        }
           else {}
        }
    {
    c=s/jumlah;
    cout<<"\nNilai Tengahnya adalah : "<<c<<endl<<endl;
    }
}

void perkalian()
{
    cout << "\nMasukan jumlah data   : "; cin >>jumlah;
    cout << endl;

    for (int i = 1; i <=jumlah; i++)
    {
        cout << "Masukan bilangan ke-"<<i<<" = "; cin >> a;
        t=t*a;
    }
    cout<<"\n Hasil Perkaliannya adalah : "<<t<<endl<<endl;
}

int main()
{
    menu:
    system("cls");
    char opsi;
    cout<<"Selamat datang"<<endl;
    cout<<"Pilih program yang ingin digunakan"<<endl;
    cout<<"[1]. Program Pengurutan Bilangan Terkecil ke Terbesar" << endl;
    cout<<"[2]. Program Menampilkan Nilai Rata-Rata(Mean)" << endl;
    cout<<"[3]. Program Menampilkan Nilai Tengah (Median)" << endl;
    cout<<"[4]. Program Menampilkan Operasi Perkalian" << endl;
    cout<<"[5]. Keluar" << endl;
    cout<<"Masukkan Pilihan [1-5] :"; cin >> opsi;
    system("cls");
    switch(opsi)
    {
    case '1' :
        case1:
        cout<<"[1]. Program Pengurutan Bilangan Terkecil ke Terbesar" << endl;
        pengurutan();
        cout<<endl<<endl;
        cout << "ulangi?(y/n)"; cin >> opsi;
        system("cls");
        if(opsi=='y'||opsi=='Y')
        {
            goto case1;
        }
        else
        {
            goto menu;
        }
        break;

    case '2' :
        case2:
        cout<<"[2]. Program Menampilkan Nilai Rata-Rata(Mean)" << endl;
        meanrata();
        cout<<endl<<endl;
        cout << "ulangi?(y/n)"; cin >> opsi;
        system("cls");
        if(opsi=='y'||opsi=='Y')
        {
            goto case2;
        }
        else
        {
            goto menu;
        }
        break;
    case '3' :
        case3:
        cout<<"[3]. Program Menampilkan Nilai Tengah (Median)" << endl;
        mediantengah();
        cout<<endl<<endl;
        cout << "ulangi?(y/n)"; cin >> opsi;
        system("cls");
        if(opsi=='y'||opsi=='Y')
        {
            goto case3;
        }
        else
        {
            goto menu;
        }
        break;
    case '4':
        case4:
        cout<<"[4]. Program Menampilkan Operasi Perkalian" << endl;
        perkalian();
        cout<<endl<<endl;
        cout << "ulangi?(y/n)"; cin >> opsi;
        system("cls");
        if(opsi=='y'||opsi=='Y')
        {
            goto case4;
        }
        else
        {
            goto menu;
        }
        break;
    case '5' :
        system("cls");
        cout << "Konfirmasi keluar?(y/n)"; cin >> opsi;
        if(opsi=='y'||opsi=='Y')
        {
            return 0;
        }
        else
        {
            goto menu;
        }

    default :
        cout << "Maaf pilihan tidak tersedia"<<endl;
        getch();
        system("cls");
        goto menu;
    }
}






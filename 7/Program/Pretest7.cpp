#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int angka[]={9, 2, 1, 4, 11, 10, 18};
    int panjang_angka=sizeof(angka)/sizeof(*angka);
    int sementara;
    // cout<<"Unsorted"<<endl;
    // for(int a=0; a<panjang_angka; a++){
    //     cout<<angka[a]<<" ";
    // }
    // for(int a=0; a<panjang_angka; a++){
    //     for(int b=a+1; b<panjang_angka; b++){
    //         if(angka[a]>angka[b]){
    //             sementara=angka[a];
    //             angka[a]=angka[b];
    //             angka[b]=sementara;
    //         }
    //     }
    // }
    // cout<<endl<<"Sorted"<<endl;
    // for(int a=0; a<panjang_angka; a++){
    //     cout<<angka[a]<<" ";
    // }
    
    string b="Algoritma Pemrograman Menyenangkan";
    char cari;
    int panjang_b=b.length();
    bool ketemu=false;
    cout<<"Cari : ";
    cin>>cari;
    for(int a=0; a<panjang_b; a++){
        if(cari == b[a]){
            ketemu=true;
        }
    }
    if(ketemu){
        cout<<"Ketemu di indeks ";
        for(int a=0; a<panjang_b; a++){
            if(cari==b[a]){
                cout<<a<<" ";
            }
        }
    }else{
        cout<<"ga ketemu";
    }
    return 0;
}
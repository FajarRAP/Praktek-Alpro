#include<iostream>
using namespace std;

struct Mahasiswa{
    int nim;
    Mahasiswa *selanjutnya;
};

Mahasiswa *kepala, *ekor, *elemenSekarang, *elemenBaru;

void bikinKepala(int nimMhs){
    kepala=new Mahasiswa;
    kepala->nim=nimMhs;
    kepala->selanjutnya=NULL;
    ekor=kepala;
}

void tambahAkhir(int nimMhs){
    elemenBaru=new Mahasiswa;
    elemenBaru->nim=nimMhs;
    elemenBaru->selanjutnya=NULL;
    ekor->selanjutnya=elemenBaru;
    ekor=elemenBaru;
}

void hitungNode(){
    int jmlElemen=0;
    elemenSekarang=kepala;
    while(elemenSekarang!=NULL){
        elemenSekarang=elemenSekarang->selanjutnya;
        jmlElemen++;
    }
    cout<<"Jumlah Elemen : "<<jmlElemen<<endl;
}

int main(){
    bikinKepala(165);
    tambahAkhir(173);
    tambahAkhir(152);
    tambahAkhir(161);
    tambahAkhir(157);
    hitungNode();
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa{
    int nim;
    string nama;
    Mahasiswa *selanjutnya;
};

class SK9{
    private:
        Mahasiswa *kepala, *ekor, *elemenSekarang, *elemenBaru;
        int nimMhs, pilih;
        string namaMhs;
    public:
        friend istream &operator>> (istream &masuk, SK9 &dimas){
            cout<<"Masukkan nama : ";
            masuk>>dimas.namaMhs;
            cout<<"Masukkan NIM  : ";
            masuk>>dimas.nimMhs;
            dimas.bikinKepala(dimas.nimMhs, dimas.namaMhs);
            while(dimas.pilih!=2){
                cout<<"1. Tambah elemen\n2. Exit"<<endl;
                cout<<"Pilih : ";
                masuk>>dimas.pilih;
                switch(dimas.pilih){
                    case 1:
                        cout<<"Masukkan nama : ";
                        masuk>>dimas.namaMhs;
                        cout<<"Masukkan NIM  : ";
                        masuk>>dimas.nimMhs;
                        dimas.tambahElemen(dimas.nimMhs, dimas.namaMhs);
                        break;
                    case 2:
                        break;
                    default:
                        cout<<"Pilihan tidak tersedia"<<endl;
                    }
            }
        return masuk;
        }
        friend ostream &operator<< (ostream &keluar, SK9 &sena){
            sena.elemenSekarang=sena.kepala;
            keluar<<"+";
            sena.garis(23);
            keluar<<"+"<<endl;
            keluar<<"| NIM"<<setw(17)<<"Nama"<<setw(3)<<"|"<<endl;
            keluar<<"+";
            sena.garis(23);
            keluar<<"+"<<endl;
            while(sena.elemenSekarang!=NULL){
                keluar<<"| "<<sena.elemenSekarang->nim<<setw(17)<<sena.elemenSekarang->nama<<setw(3)<<"|"<<endl;
                sena.elemenSekarang=sena.elemenSekarang->selanjutnya;
            }
            keluar<<"+";
            sena.garis(23);
            keluar<<"+"<<endl;
            return keluar;
        }
        void bikinKepala(int nimMhs, string namaMhs){
            kepala=new Mahasiswa;
            kepala->nim=nimMhs;
            kepala->nama=namaMhs;
            kepala->selanjutnya=NULL;
            ekor=kepala;
        }
        void tambahElemen(int nimMhs, string namaMhs){
            elemenBaru=new Mahasiswa;
            elemenBaru->nim=nimMhs;
            elemenBaru->nama=namaMhs;
            elemenBaru->selanjutnya=NULL;
            ekor->selanjutnya=elemenBaru;
            ekor=elemenBaru;
        }
    void garis(int x){
        for(int a=0; a<x; a++){
            cout<<"=";
        }
    }
};

int main(){
    SK9 gaskan;
    cin>>gaskan;
    cout<<gaskan;
    return 0;
}
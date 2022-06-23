#include <iostream>
#include <iomanip>
using namespace std;

class SK9{
    private:
        int nData;
        string idKaryawan[100];
        string departemen[100], nama[100];
        string idKaryawanBaru[1][100];
        string departemenBaru[1][100], namaBaru[1][100];
        
    public:
    friend istream& operator>>(istream& titit, SK9& kelas){
        cout<<"n Data\t: ";
        titit>>kelas.nData;
        for(int a=0; a<kelas.nData; a++){
            titit.ignore();
            cout<<"Nama\t\t: ";
            getline(titit, kelas.nama[a]);
            cout<<"ID\t\t: ";
            titit>>kelas.idKaryawan[a];
            titit.ignore();
            cout<<"Departemen\t: ";
            getline(titit, kelas.departemen[a]);
        }
        return titit;
    }
    friend ostream& operator<<(ostream& titit, SK9& kelas){
        titit<<endl<<endl;
        titit<<"+";
        kelas.garis(52);
        titit<<"+"<<endl;
        titit<<"| "<<left<<setw(20)<<"Departemen"<<left<<setw(15)<<"ID"<<left<<setw(15)<<"Nama Karyawan   |"<<endl;
        titit<<"+";
        kelas.garis(52);
        titit<<"+"<<endl;
        for(int a=0; a<1; a++){
            for(int b=0; b<kelas.nData; b++){
                titit<<"| "<<left<<setw(20)<<kelas.departemenBaru[a][b]<<left<<setw(15)<<kelas.idKaryawanBaru[a][b]<<left<<setw(15)<<kelas.namaBaru[a][b]<<" |"<<endl;
            }
        }
        titit<<"+";
        kelas.garis(52);
        titit<<"+"<<endl;
        return titit;
    }

    void proses(){
        for(int a=0; a<1; a++){
            for(int b=0; b<nData; b++){
                departemenBaru[a][b]=departemen[b];
                idKaryawanBaru[a][b]=idKaryawan[b];
                namaBaru[a][b]=nama[b];
            }
        }
    }

    void garis(int x){
        for(int a=0; a<x; a++){
            cout<<"=";
        }
    }
};

int main() {
    SK9 gas;
    cin>>gas;
    gas.proses();
    cout<<gas;
}
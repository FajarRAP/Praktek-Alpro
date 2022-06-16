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
    void input(){
        cout<<"n Data\t: ";
        cin>>nData;
        for(int a=0; a<nData; a++){
            cin.ignore();
            cout<<"Nama\t\t: ";
            getline(cin, nama[a]);
            cout<<"ID\t\t\t: ";
            cin>>idKaryawan[a];
            cin.ignore();
            cout<<"Departemen\t: ";
            getline(cin, departemen[a]);
        }
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

    void output(){
        cout<<endl<<endl;
        cout<<"+";
        garis(52);
        cout<<"+"<<endl;
        cout<<"| "<<left<<setw(20)<<"Departemen"<<left<<setw(15)<<"ID"<<left<<setw(15)<<"Nama Karyawan   |"<<endl;
        cout<<"+";
        garis(52);
        cout<<"+"<<endl;
        for(int a=0; a<1; a++){
            for(int b=0; b<nData; b++){
                cout<<"| "<<left<<setw(20)<<departemenBaru[a][b]<<left<<setw(15)<<idKaryawanBaru[a][b]<<left<<setw(15)<<namaBaru[a][b]<<" |"<<endl;
            }
        }
        cout<<"+";
        garis(52);
        cout<<"+"<<endl;
    }

    void garis(int x){
        for(int a=0; a<x; a++){
            cout<<"=";
        }
    }
};

int main() {
    SK9 gas;
    gas.input();
    gas.proses();
    gas.output();
}
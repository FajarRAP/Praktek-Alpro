#include<iostream>
using namespace std;

class studikasus{
    private:
        string nama, matkul;
        int min, maks;
        float nilai[1000], mean, a, total_nilai;

    public:
        void input(){
            cout<<"Nama    : ";
            getline(cin, nama);
            cout<<"Matkul  : ";
            getline(cin, matkul);
            cout<<"Jml Mhs : ";
            cin>>a;
            for(int i=0; i<a; i++){
                nilai[i]=rand() % 100+1;
                total_nilai+=nilai[i];
            }
            mean=total_nilai/a;
        }

        void cari_min(){
            min=nilai[0];
            for(int i=0; i<a; i++){
                if(min>nilai[i]){
                    min=nilai[i];
                }
            }
        }

        void cari_maks(){
            maks=nilai[0];
            for(int i=0; i<a; i++){
                if(maks<nilai[i]){
                    maks=nilai[i];
                }
            }
        }

        void cetak(){
            cout<<"Nama\t\tMata Kuliah\t\t\tNilai"<<endl;
            cout<<nama<<"\t\t"<<matkul<<"\t\t"<<nilai[0]<<endl;
            for(int i=1; i<a; i++){
                cout<<"\t\t\t\t\t\t"<<nilai[i]<<endl;
            }
            cout<<"Nilai maksimum = "<<maks<<endl;
            cout<<"Nilai minimum  = "<<min<<endl;
            cout<<"Rata-rata      = "<<mean<<endl;
        }
};

int main(){
    system("cls");
    srand(time(NULL));
    studikasus nilai;
    nilai.input();
    nilai.cari_min();
    nilai.cari_maks();
    nilai.cetak();
    return 0;
}
#include<iostream>
using namespace std;

class studikasus{
    private:
        float nilai[4];
        string nama, matkul;
    public:
        void input(){
            cout<<"Nama\t: ";
            getline(cin, nama);
            cout<<"MatKul\t: ";
            getline(cin, matkul);
            for(int a=0; a<3; a++){
                if(a==0){
                    cout<<"Nilai Tugas : ";
                    cin>>nilai[a];
                }else if(a==1){
                    cout<<"Nilai UTS   : ";
                    cin>>nilai[a];
                }else{
                    cout<<"Nilai UAS   : ";
                    cin>>nilai[a];
                }
            }
            nilai[3]=(nilai[0]*0,2)+(nilai[1]*0.35)+(nilai[2]*0.45);
        }

        void cetak(){
            cout<<nama<<"\t\t"<<matkul<<endl;
            cout<<"\t\t\t"<<"Tugas\tUTS\tUAS\tAkhir"<<endl;
            cout<<"\t\t\t";
            for(int a=0; a<4; a++){
                cout<<nilai[a]<<"\t";
            }
        }

};

int main(){
    system("cls");
    studikasus nilai;
    // nilai.input();
    // nilai.cetak();
    return 0;
}
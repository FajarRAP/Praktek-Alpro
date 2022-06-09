#include <iostream>
using namespace std;

class SK7{
    private:
        string jenisBuku[4]={"Novel", "Komik", "Ensiklopedi", "Dongeng"};
        string buku[4][3];
        int kodeBuku[4][3];
        int kodeBaru[12];
        int temp1=0, temp2=0, indeks=0, x=0;
    public:

    void isiNilai(){
        for(int a=0; a<4; a++){
            for(int b=0; b<3; b++){
                cin.ignore();
                cout<<"Nama buku : ";
                getline(cin,buku[a][b]);
                cout<<"Kode buku : ";
                cin>>kodeBuku[a][b];
                kodeBuku[a][b]=rand() % 100+1;
            }
        }
    }
    void cetak(){
        cout<<"Jenis Buku\tKode Buku\tJudul Buku"<<endl;
        for(int a=0; a<4; a++){
            if(a==2){
                cout<<jenisBuku[a]<<"\t";  
            }else{
                cout<<jenisBuku[a]<<"\t\t";
            }
            for(int b=0; b<3; b++){
                if(b>=1){
                    cout<<"\t\t\t"<<kodeBuku[a][b]<<"\t\t\t"<<buku[a][b]<<endl;
                }else{
                    cout<<kodeBuku[a][b]<<"\t\t\t"<<buku[a][b]<<endl;
                }
            }
            cout<<endl;
        }
    }

    void konversi(){
        for(int a=0; a<4; a++){
            for(int b=0; b<3; b++){
                kodeBaru[indeks]=kodeBuku[a][b];
                indeks++;
            }
        }
        for(int a=0; a<12; a++){
            cout<<kodeBaru[a]<<" ";
        }
    }

    void sorting(){
        for (int k = 0; k < 4; k++){
            for (int m = 0; m < 3; m++){
                x = m+1;
                for (int i = k; i < 4 ; i++){
                    for (int j = x; j < 3; j++){
                        if (kodeBuku [k][m] > kodeBuku [i][j])
                            temp1=kodeBuku[k][m];
                            kodeBuku[k][m] =kodeBuku[i][j];
                            kodeBuku[i][j]=temp1;
                    }
                    x=0;
                } 
            }
        }

        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 3; j++){
                cout << kodeBuku [i][j] << " ";
            }
        }
    }
};

int main() {
    SK7 gas;
    gas.isiNilai();
    gas.cetak();
  // gas.konversi();
    gas.sorting();
}
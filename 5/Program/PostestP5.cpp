#include<iostream>
using namespace std;

class postest{
    public:
        void genap(){
            hasil=pembilang/penyebut;
            total+=-(hasil);
        }
        void ganjil(){
            hasil=pembilang/penyebut;
            total+=hasil;
        }

        float tambah(int n, int awal){
            if(awal==n){
                if(awal%2==0){
                    genap();
                }else{
                    ganjil();
                }
                return total;
            }else{
                if(awal%2==0){
                    genap();
                    penyebut++;
                }else{
                    ganjil();
                    penyebut++;
                }
                return tambah(n, awal+1), total;
            }
        }

        void cetak(){
            cout<<"n : ";
            cin>>n;
            cout<<"Jumlah suku ke-"<<n<<" = "<<tambah(n, awal);
        }
    private:
        float hasil=0, total=0, pembilang=1, penyebut=1;
        int awal=1, n;
};

int main(){
    system("cls");
    postest p5;
    p5.cetak();
    return 0;
}
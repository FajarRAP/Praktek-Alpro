#include<iostream>
using namespace std;

class geser_array{
    private:
        int angka[100], temp;
    public:
        void isi_n(int n){
            cout<<"Biasa"<<endl;
            for(int a=0; a<n; a++){
                angka[a]=rand()% 100+1;
                cout<<angka[a]<<" ";
            }
        }

        void iteratif(int n){
            for(int a=0; a<n; a++){
                temp=angka[a];
                angka[a]=angka[a+1];
                if(a==n-1){
                    angka[a]=temp;
                }else{
                    angka[a+1]=temp;
                }
            }
        }

        int rekursif(int a, int n){
            if(a==n-1){
                return angka[a];
            }else{
                temp=angka[a];
                angka[a]=angka[a+1];
                angka[a+1]=temp;        
                return rekursif(a+1, n);
            }
        }

        void cetak(int n){
            for(int a=0; a<n; a++){
                cout<<angka[a]<<" ";
            }
            cout<<endl;
        }
};



int main(){
    system("cls");
    srand(time(NULL));
    geser_array kiri;
    int n;
    
    cout<<"Masukkan n : ";
    cin>>n;
    
    cout<<endl;
    kiri.isi_n(n);

    cout<<endl<<endl<<"Geser ke kiri 1x"<<endl<<endl;
    cout<<"Iteratif"<<endl;
    kiri.iteratif(n);
    kiri.cetak(n);

    cout<<endl<<"Rekursif"<<endl;
    kiri.rekursif(0,n);
    kiri.cetak(n);
    return 0;
}

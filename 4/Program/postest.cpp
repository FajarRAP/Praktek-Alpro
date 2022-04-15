#include<iostream>
using namespace std;

class postest{
    public:
        void iterasi(int n){
            cout<<"Fungsi Iterasi"<<endl;
            for(int a=1; a<=n; a++){
                if(a%7==0 &&a %5==0){
                    cout<<a<<endl;
                }
            }
            cout<<"Fungsi Rekursi"<<endl;
        }

        int rekursi(int n){
            if(n<=1){
                return n;
            }else{
                if(n%7==0 &&n %5==0){
                    cout<<n<<endl;
                }
                return rekursi(n-1);
            }
        }
};

int main(){
    system("cls");
    postest p4;
    int angka;
    cout<<"Masukkan angka : ";
    cin>>angka;
    p4.iterasi(angka);
    p4.rekursi(angka);
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

class power{
    public:
        int x, y;
        float negatif, pangkat=1;

        int inputangka(){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            return x, y;
        }

        int hitung(int titit){
            for(int a=1; a<=titit; a++){
                pangkat*=x;
            }
            return pangkat;
        }

        void cetak(){
            inputangka();
            if(y<0){
                hitung(abs(y));
                negatif=1/pangkat;
                cout<<negatif;
            }else{
                hitung(y);
                cout<<pangkat;
            }
        }
};

int main(){
    system("cls");
    power angka;
    angka.cetak();
    return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;

class konversi{
        friend istream& operator>>(istream&, konversi&);
    public:
        konversi(unsigned int b=0){
            bilangan=b;
        }
        void membilang1();
        void membilang2();
        void membilang3();
        void konversikan();
    private:
        unsigned int bilangan;
};

istream& operator>>(istream& in, konversi& x){
    cout<<"Masukkan bilangan : ";
    in>>x.bilangan;
    return in;
}

void konversi::membilang1(){
    switch(bilangan){
        case 0:
            cout<<"Nol";
            break;
        case 1:
            cout<<"Satu";
            break;
        case 2:
            cout<<"Dua";
            break;
        case 3:
            cout<<"Tiga";
            break;
        case 4:
            cout<<"Empat";
            break;
        case 5:
            cout<<"Lima";
            break;
        case 6:
            cout<<"Enam";
            break;
        case 7:
            cout<<"Tujuh";
            break;
        case 8:
            cout<<"Delapan";
            break;
        case 9:
            cout<<"Sembilan";
            break;
        case 10:
            cout<<"Sepuluh";
            break;
        case 11:
            cout<<"Sebelas";
            break;
        default:
            cout<<"Di luar jangkauan";
    }
}

void konversi::konversikan(){
    if(bilangan<11){
        membilang1();
    }else if(bilangan>19){
        membilang3();
    }else{
        membilang2();
    }
}

int main(){
    system("cls");
    konversi a;
    cin>>a;
    a.konversikan();
    getch();
    return 0;
}
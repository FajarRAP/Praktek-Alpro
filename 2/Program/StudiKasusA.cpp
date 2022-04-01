#include<iostream>
using namespace std;

class gaji{
    public:
    string nama;
    float pengalaman;
    int pilih;

    int bidang(){
        cout<<"Daftar bidang yang dibutuhkan : "<<endl;
        cout<<"1. Express JS\n2. Django Python\n3. Rails Ruby"<<endl;
        cout<<"4. Laravel PHP\n5. Spring Java\n6. Angular JS"<<endl;
        cout<<"Silakan pilih : ";
        cin>>pilih;
        return pilih;
    }
};

int main(){
    system("cls");
    gaji developer;
    developer.bidang();
    return 0;
}
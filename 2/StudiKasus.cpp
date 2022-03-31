#include<iostream>
using namespace std;

class toko{
    public:
        int harga, harga2, pcs, pilih, jarak, ongkir, diskon;

        void menu(){
            cout<<"Daftar Menu : "<<endl;
            cout<<"1. Ayam Geprek\n2. Ayam Goreng\n";
            cout<<"3. Udang Goreng\n4. Cumi Goreng\n5. Ayam Bakar"<<endl;
            cout<<"Silakan pilih : ";
            cin>>pilih;
        }

        void kasusmenu(){
            switch(pilih){
                case 1:
                    harga=21000;
                    cout<<"Pcs : ";
                    cin>>pcs;
                    harga2=pcs*harga;
                    break;
                case 2:
                    harga=17000;
                    cout<<"Pcs : ";
                   
                    cin>>pcs;
                    harga2=pcs*harga;
                    break;
                case 3:
                    harga=19000;
                    cout<<"Pcs : ";
                    cin>>pcs;
                     harga2=pcs*harga;
                    break;
                case 4:
                    harga=20000;
                    cout<<"Pcs : ";
                    cin>>pcs;
                    harga2=pcs*harga;
                    break;
                case 5:
                    harga=25000;
                    cout<<"Pcs : ";
                    cin>>pcs;
                    harga2=pcs*harga;
                    break;              
                default:
                    cout<<"Menu tidak tersedia";
                    break;
            }
        }

        int distance(){
            cout<<"Masukkan jarak anda ke restoran kami (Km) : ";
            cin>>jarak;
            return jarak;
        }

        void potongan(){
            if(harga2>25000 && harga2<50000){
                ongkir-=3000;
                cout<<"Total = "<<harga2+ongkir<<endl;
            }else if(harga2>50000 && harga2<150000){
                ongkir-=5000;
                diskon=harga2*0.15;
                cout<<"Total = "<<harga2+ongkir<<endl;
            }else{
                ongkir-=8000;
                diskon=harga2*0.35;
                cout<<"Total = "<<harga2+ongkir<<endl;
            }
        }

        void hitungongkir(){
            if(distance()<3){
                ongkir=15000;
                potongan();
            }else{
                ongkir=25000;
                potongan();
            }
        }
    
        void struk(){
            switch(pilih){
                case 1:
                    cout<<"Ayam Geprek\tx"<<pcs<<"\tRp. "<<harga2<<endl;
                    cout<<"Ongkir\t\t\tRp. "<<ongkir<<endl;
                    cout<<"Total\t\tRp. "<<harga2+ongkir<<endl;
                    break;
                case 2:
                    cout<<"Ayam Goreng\tx"<<pcs<<"\tRp. "<<harga2<<endl;
                    cout<<"Ongkir\t\t\tRp. "<<ongkir<<endl;
                    cout<<"Total\t\tRp. "<<harga2+ongkir<<endl;
                    break;
                case 3:
                    cout<<"udang Goreng\tx"<<pcs<<"\tRp. "<<harga2<<endl;
                    cout<<"Ongkir\t\t\tRp. "<<ongkir<<endl;
                    cout<<"Total\t\tRp. "<<harga2+ongkir<<endl;
                    break;
                case 4:
                    cout<<"cumi Goreng\tx"<<pcs<<"\tRp. "<<harga2<<endl;
                    cout<<"Ongkir\t\t\tRp. "<<ongkir<<endl;
                    cout<<"Total\t\tRp. "<<harga2+ongkir<<endl;
                    break;
                case 5:
                    cout<<"Ayam Bakar\tx"<<pcs<<"\tRp. "<<harga2<<endl;
                    cout<<"Ongkir\t\t\tRp. "<<ongkir<<endl;
                    cout<<"Total\t\tRp. "<<harga2+ongkir<<endl;
                    break;
                deafult:
                    cout<<"Menu Tidak Tersedia"<<endl;
            }
        }
};

       
                    
int main(){
    toko kelontong;
    system("cls");
    kelontong.menu();
    kelontong.kasusmenu();
    kelontong.hitungongkir();
    return 0;
}

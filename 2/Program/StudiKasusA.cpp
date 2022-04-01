#include<iostream>
using namespace std;

/* 
bug : jika salah satu pekerjaan pengalamannya <2.5 thn
fitur yg belum : - 2 kerjaan dipotong 9% (added)
                 - tim leader bonus 6%
*/                  

class gaji{
    public:
    string nama;
    float pengalaman, gajitotal, gaji, bonus, potongan;
    int pilih, jawab, tanda=0;

    int bidang(){
        tanda++;
        cout<<tanda<<endl;
        cout<<"Daftar bidang yang dibutuhkan : "<<endl;
        cout<<"1. Express JS\n2. Django Python\n3. Rails Ruby"<<endl;
        cout<<"4. Laravel PHP\n5. Spring Java\n6. Angular JS"<<endl;
        cout<<"Silakan pilih : ";
        cin>>pilih;
        return pilih;
    }

    int jawaban(){
        cout<<endl;
        cout<<"Apakah anda ingin mengambil bidang lain?"<<endl;
        cout<<"1. Ya\n2. Tidak"<<endl;
        cout<<"Jawabanmu : ";
        cin>>jawab;
        return jawab;
    }

    float experience(){
        cout<<endl;
        cout<<"Berapa lama pengalaman anda di bidang ini (tahun) : ";
        cin>>pengalaman;
        return pengalaman;
    }

    void seleksi_jawab(){
        if(jawab==1 && tanda==2){
            cout<<"Anda tidak dapat mengambil lagi (Maks 2)"<<endl;
            while(jawaban()==1 || jawab>2){
                if(jawab==2){
                    break;
                }
            }
            switch(jawab){
                case 2:
                    potongan=gajitotal*0.18;
                    cout<<"Gajimu = Rp. "<<gajitotal-potongan<<" Juta"<<endl;
                    break;
                default:
                    cout<<"Pilihan tidak tersedia"<<endl;                        
            }
        }else{
            if(tanda==2){
                switch(jawab){
                case 1:
                    system("cls");
                    bidang();
                    pilihan();
                    break;
                case 2:
                    potongan=gajitotal*0.18;
                    cout<<"Gajimu = Rp. "<<gajitotal-potongan<<" Juta"<<endl;
                    break;
                default:
                    cout<<"Pilihan tidak tersedia"<<endl;
                }
            }else{
                switch(jawab){
                case 1:
                    system("cls");
                    bidang();
                    pilihan();
                    break;
                case 2:
                    cout<<"Gajimu = Rp. "<<gajitotal<<" Juta"<<endl;
                    break;
                default:
                    cout<<"Pilihan tidak tersedia"<<endl;
                }
            }
            
        } 
    }

    void seleksi_pengalaman(){
        if(pengalaman>4){
            bonus=gaji*0.4;
            gaji+=bonus;
            gajitotal+=gaji;
            jawaban();
            seleksi_jawab();
        }else if(pengalaman>2.5){
            gajitotal+=gaji;
            jawaban();
            seleksi_jawab();
        }else{
            cout<<"Gajimu = Rp. "<<gaji<<" Juta"<<endl;
        }
    }

    void pilihan(){
        switch(pilih){
            case 1:
                gaji=15;
                experience();
                seleksi_pengalaman();
                break;
            case 2:
                gaji=13;
                experience();
                seleksi_pengalaman();
                break;
            case 3:
                gaji=8;
                experience();
                seleksi_pengalaman();
                break;
            case 4:
                gaji=18;
                experience();
                seleksi_pengalaman();
                break;
            case 5:
                gaji=8;
                experience();
                seleksi_pengalaman();
                break;
            case 6:
                gaji=15;
                experience();
                seleksi_pengalaman();
                break;   
        }
    }
};

int main(){
    system("cls");
    gaji developer;
    developer.bidang();
    developer.pilihan();
    return 0;
}
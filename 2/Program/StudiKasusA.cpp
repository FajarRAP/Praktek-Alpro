#include<iostream>
using namespace std;

class gaji{
    public:
    string nama;
    float pengalaman, gajitotal, gaji, bonus;
    int pilih, jawab;

    int bidang(){
        cout<<"Daftar bidang yang dibutuhkan : "<<endl;
        cout<<"1. Express JS\n2. Django Python\n3. Rails Ruby"<<endl;
        cout<<"4. Laravel PHP\n5. Spring Java\n6. Angular JS"<<endl;
        cout<<"Silakan pilih : ";
        cin>>pilih;
        return pilih;
    }

    int jawaban(){
        cout<<"Apakah anda ingin mengambil bidang lain?"<<endl;
        cout<<"1. Ya\n2. Tidak"<<endl;
        cout<<"Jawabanmu : ";
        cin>>jawab;
        return jawab;
    }

    float experience(){
        cout<<"Berapa lama pengalaman anda di bidang ini (tahun) : ";
        cin>>pengalaman;
        return pengalaman;
    }

    void pilihan(){
        switch(pilih){
            case 1:
                gaji=15;
                if(experience()>4){
                    bonus=gaji*0.4;
                    gaji+=bonus;
                    gajitotal+=gaji;
                    
                    if(jawaban()==1){
                        bidang();
                        pilihan();
                    }
                }else if(experience()>2.5){
                    
                }else{

                }
                break;
            case 2:
                gaji=13;
                if(experience()>4){
                    bonus=gaji*0.4;
                    gaji+=bonus;
                    gajitotal+=gaji;
                    cout<<gajitotal<<endl;
                }
            
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
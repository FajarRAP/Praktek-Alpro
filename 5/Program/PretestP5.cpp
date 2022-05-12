#include<iostream>
using namespace std;

float hasil=0;

int pretest(int n, int akhir){
    if(n==akhir){
    	if(n%2==0){
    		hasil+=-((float)1/n);
		}else{
			hasil+=((float)1/n);
		}
		cout<<hasil;
        return n;
    }else{
        if(n%2==0){
        	hasil+=-((float)1/n);
//        	cout<<hasil<<" ";
            return pretest(n+1, akhir);
        }else{
        	hasil+=(float)1/n;
//        	cout<<hasil<<" ";
            return pretest(n+1, akhir);
        }
    }
}

int main(){
    pretest(1,5);
    return 0;
}

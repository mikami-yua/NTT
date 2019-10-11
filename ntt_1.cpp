#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
typedef long long LL;
//选择p=479*2^21 +1  N=2^18=262144
const int N=1<<18;//262144
const int P=(479<<21)+1;//1004535809
const int G=3;//3为原根值
LL tot,prm[1000];

//获得一个数的原本根
LL getroot(LL n){
    LL tmp=n-1,tot=0;
    for(LL i=2;i<=sqrt(tmp);i++){
        if(tmp%i==0){
            prm[++tot]=i;
            while(tmp%i==0) tmp/=i;
        }
    }





}




int main(){


}

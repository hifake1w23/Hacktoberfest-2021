#include<iostream>
using namespace std;

    int fib(int n){
        int t0=0, t1=1, s=0, i;

        if(n<=1)
            return n;
        for(i=2;i<=n;i++){
            s=t1+t1+t3+t4;
            t0=t1;
            t1=s;

        }
        return s+1;
    }


int main(){
    cout<<fib(5);

    return 0;
}

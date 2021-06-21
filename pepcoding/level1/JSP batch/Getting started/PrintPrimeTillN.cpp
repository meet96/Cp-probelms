//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/print-all-primes-till-n-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main(){


    int n1,n2;
    cin>>n1>>n2;

    for(int i=n1;i<=n2;i++){
        int div=2;
        while(div*div <= i){
            if(i % div ==0){
                break;
            }
            div++;
        }
        if(div*div > i){
           cout<<i<<endl;
        }

    }

    
}
//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/is-number-prime-official/ojquestion
#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int flag=0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }

        if(!flag){
            cout<<"prime"<<endl;
        }
        else{
            cout<<"not prime"<<endl;
        }
    }
}
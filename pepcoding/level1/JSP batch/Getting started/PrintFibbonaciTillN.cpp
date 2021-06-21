//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/fibonacci-till-n-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int n1=0;
    int n2=1;
    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2){
        cout<<0<<endl<<1;
    }
    else{
        cout<<n1<<endl<<n2<<endl;

       for(int count=3;count<=n;count++){
          int n3 = n1+n2;
          cout<<n3<<endl;
          n1=n2;
          n2=n3;
        }

    }
    
}
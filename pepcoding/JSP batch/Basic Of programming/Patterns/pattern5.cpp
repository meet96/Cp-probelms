#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int space=0;
    int star=0;
    int even=0;
    int dec=0;
    if(n%2==0){
        even=1;
    }

    if(even){
        star=2;
    }
    else{
        star = 1;
    }


    for(int i=1;i<=n;i++){
        for(int k=1;k<=star;k++){
            cout<<"*\t";
        }
        if(n==star || dec){
            star-=2;
            dec = 1;
        }
        else{
           star+=2;
        }
        
        cout<<endl;
    }


}

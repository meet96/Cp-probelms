//https://www.pepcoding.com/resources/online-java-foundation/getting-started/count-digits-official/ojquestion
//https://www.pepcoding.com/resources/online-java-foundation/getting-started/count-digits-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count=0;

    while(n){
        n/=10;
        count++;
    }
    cout<<count<<endl;
}

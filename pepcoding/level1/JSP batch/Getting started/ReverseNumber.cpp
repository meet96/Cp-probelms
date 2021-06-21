//https://www.pepcoding.com/resources/online-java-foundation/getting-started/reverse-a-number-official/ojquestion
//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/reverse-a-number-official/ojquestion
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n){
        int rem = n%10;
        cout<<rem<<endl;
        n/=10;
    }

}
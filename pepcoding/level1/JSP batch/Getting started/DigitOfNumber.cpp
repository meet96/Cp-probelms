//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/digits-of-a-number-official/ojquestion

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int temp = n;

    int count=0;
    while(temp){
        temp/=10;
        count++;
    }

    int power = pow(10,count-1);
    //cout<<power<<endl;
    int t1=n;
    int k = count-1;
    while(power){
        //int sub = pow(10,k--);
        int ans = t1/power;
        t1= t1%power;
        power = power/10;
        cout<<ans<<endl;
    }
}
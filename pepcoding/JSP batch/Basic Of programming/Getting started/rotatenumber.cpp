//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/rotate-a-number-official/ojquestion

#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    
    int temp=n;
    int nod=0;
    
    while(temp>0){
        temp/=10;
        nod++;
    }
    
    k=k%nod;
    
    if(k<0){
        k=k+nod;
    }
    
    int div=1;
    int mul=1;
    for(int i=1;i<=nod;i++){
        if(i<=k){
            div*=10;
        }
        else{
            mul*=10;
        }
    }
    
    int q=n/div;
    int r=n%div;
    
    r = r*mul + q;
    
    cout<<r;


}
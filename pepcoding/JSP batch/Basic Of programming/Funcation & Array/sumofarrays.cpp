//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/function-and-arrays/sum-of-two-arrays-official/ojquestion
#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    
    //write your code here
    int a1size = *(&a1 + 1) - a1;
    int a2size = *(&a2 + 1) - a2;
    
    int bigger = n1>n2?n1:n2;
    
    int sum[bigger];
    
    int c=0;
    
    int i=n1-1;
    int j=n2-1;
    
    int k = bigger-1;
    
    while(k>=0){
        
        int d=c;
        
        if(i>=0){
            
            d+=a1[i];
        }
        if(j>=0){
            d+=a2[j];
        }
        c=d/10;
        d=d%10;
        
        sum[k]=d;
        
        i--;
        j--;
        k--;
        
    }
    
    if(c!=0){
        cout<<c;
    }
    for (int x : sum)
        cout << x << endl;
    
    
}
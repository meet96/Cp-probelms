//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/function-and-arrays/difference-of-two-arrays-official/ojquestion
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n1;
    cin>>n1;
    int a1[n1];
    
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    
    int n2;
    cin>>n2;
    int a2[n2];
    
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    
    int ptr1 = n2-1;
    int ptr2 = n1-1;
    int ans[n2] = {0};
    
    int k= n2-1;
    int c=0;
    while(k>=0){
        
        int d=0;
        int a1v = ptr2 >=0 ? a1[ptr2]: 0;
        
        if(a2[ptr1] + c  >= a1v){
            d = a2[ptr1] + c - a1v;
            c=0;
        }
        else{
            d = a2[ptr1] + c + 10 - a1v;
            c = -1;
        }
        ans[k--] = d;
        ptr1--;
        ptr2--;      
    }
    
    int idx=0;
    int size = *(&ans + 1) - ans;
    while(idx<size){
        if(ans[idx] ==0){
            idx++;
        }
        else{
            break;
        }
    }
    while(idx<size){
        cout<<ans[idx]<<endl;
        idx++;
    }
    
    
    
}
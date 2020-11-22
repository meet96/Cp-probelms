//https://codeforces.com/contest/1352/problem/A
#include <iostream>
#include<math.h>
using namespace std;
int numDigits(int number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[10000],res_arr[10000];
        int k=0,count=0,z=0;
        while(n>0){
            int t= n%10;
            arr[k++] = t;
            n = n/10;
        }
       
       for(int i=0;i<k;i++){
            int temp = pow(10,i);
            int res = temp * arr[i];
            if(res > 0){
                res_arr[z++] = res;
                count++;
            }
       }

       cout<<count<<endl;
        for(int i=0;i<z;i++){
            cout<<res_arr[i]<<" ";
        }
        cout<<endl;
    }
}

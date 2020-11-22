#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4 != 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int arr[n];
            int first_halve = n/2;
            int second_halv = n/2;
            int diff = 2;
            int sum = 0;
            for(int i=0;i<first_halve;i++){
                sum += diff;
                arr[i] = sum;
            }
            sum = 1;
            for(int i=second_halv;i<n;i++){
                arr[i] = sum;
                sum += diff;
                
            }
            arr[n-1] += n/2;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }
          
    }
}

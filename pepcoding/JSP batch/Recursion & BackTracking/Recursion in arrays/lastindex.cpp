//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/recursion-in-arrays/last-index-official/ojquestion
#include<iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    // write your code here
    int current = arr[idx];
    
    if(idx==-1){
        return -1;
    }
    if(current == x){
        return idx;
    }
    lastIndex(arr,idx-1,x,n);
    
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, n-1, d, n);
    cout << p << endl;
}
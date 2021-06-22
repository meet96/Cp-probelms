//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/pattern-type-1-official/ojquestion
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<"	";
        }
        cout<<endl;
    }
}
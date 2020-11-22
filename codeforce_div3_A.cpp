#include <iostream>
#include<math.h>
#define ll long long
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       ll answer;
       for(int i=2;i<=29;i++){
           answer = (n / (pow(2,i)-1));
           if (n % answer == 0) {
				cerr << answer << endl;
				cout << n / answer << endl;
				break;
			}
       }
   }
}

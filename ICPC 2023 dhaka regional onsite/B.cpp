#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(int t){
     char a,b;
     cin >> a >> b;

    int difference = abs(a-b);
    
    set<int> divisors;
    for(int i = 1 ; i*i <= difference ; i++){
        if(difference % i == 0){
            divisors.insert(i);
            divisors.insert(difference/i);
        }
    }

    for(auto element:divisors){
        cout << element << ' ' << 94/element + (94 % element ? 1:0) << '\n';
    }

}

int32_t main()
{
     int t = 1; 
     cin >> t; 

     rep(i,1,t+1){
        solve(i);
        cout << "\n";
    }
     return 0;
}


#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


string checkEquality(unsigned long long a,unsigned long long b,unsigned long long c,unsigned long long d) {

    unsigned long long gcd1 = __gcd(a, b);
    unsigned long long gcd2 = __gcd(c, d);

    a /= gcd1;
    b /= gcd1;
    c /= gcd2;
    d /= gcd2;

    return (a == c && b == d) ? "Equal" : "Not Equal";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        unsigned long long a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << checkEquality(a, b, c, d) << endl;
    }

    return 0;
}

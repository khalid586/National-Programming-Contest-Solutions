#include<bits/stdc++.h>
using namespace std;

#define int long long
int solve(vector<int> arr) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int j = i;
        while (j < n && arr[j] == current) {
            j++;
        }
        int length = j - i;
        count += (length * (length + 1)) / 2;
        i = j - 1;
    }

    return n * (n + 1) / 2 - count;
}

int32_t main(){
    int _;
    cin >> _;
    for (int i = 1; i <= _; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int count = solve(arr);
        cout << "Case " << i << ": " << count << endl;
    }
    return 0;
}
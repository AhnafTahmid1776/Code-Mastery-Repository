#include <bits/stdc++.h>
using namespace std;

#define MAX 100
#define ll long long int


int main()
{

 ll n;
    cin >> n;

    vector<ll> arr(n);
    for(auto& x : arr) {
        cin >> x;
    }

    sort(begin(arr), end(arr));

    auto max = arr.back();
    auto min = arr.front();

    ll ct1 = 0, ct2 = 0;
    if(max == min) {
                cout << 0 << " " << n*(n-1)/2 << endl;

    }
    else {
        ct1 = count(begin(arr), end(arr), max);
        ct2 = count(begin(arr), end(arr), min);

        cout << abs(max - min) << " " << ct1 * ct2;

}
}

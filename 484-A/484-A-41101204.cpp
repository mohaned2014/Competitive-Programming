#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b)  for(int i = int(a); i <=int(b); i++)
#define endl '\n'

using namespace std;


ll fastPow(ll no, int power) {
    if (power == 0)
        return 1;
    else if (power == 1)
        return no;
    else if (power % 2 == 0) {
        ll square = fastPow(no, power / 2);
        return square * square;
    } else
        return no * fastPow(no, power - 1);
}

ll popcount(ll x, ll y) {
    ll ans = log2(y + 1);
    ll a = (1LL << ans) - 1;
    if (x == y)
        return x;
    else if (a > y)
        return (1LL << ans - 1) - 1;
    else if (a >= x && a <= y)
        return (1LL << ans) - 1;
    else {
        return popcount(x - (1LL << ans - 1), y - (1LL << ans - 1)) + (1LL << ans - 1);
    }

}


int main() {
    //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll n;
    cin >> n;
    ll x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        cout << popcount(x, y) << endl;;

    }

}
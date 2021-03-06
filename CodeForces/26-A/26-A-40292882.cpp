#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<ll> PrimeFactroiztion(ll number) {
    vector<ll> ans;
    ll temp = number;
    for (ll i = 2; i * i <= temp; i++) {

        while (number % i == 0) {
            ans.push_back(i);
            number /= i;
        }
    }
    if (number != 1)
        ans.push_back(number);
    return ans;
}


int main() {
    int x;
    cin >> x;
    int counter = 0;
    for (int i = 3; i <= x; i++) {
        vector<ll> ans = PrimeFactroiztion(i);
        if (!ans.empty()) {
            set<ll> finsh(ans.begin(), ans.end());
            if (!finsh.empty() && finsh.size() == 2)
                counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
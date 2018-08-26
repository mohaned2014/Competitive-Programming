#include <bits/stdc++.h>

#define ll long long
ll NumberOfDivsors = 1;
using namespace std;

vector<ll> PrimeFactroiztion(ll number) {
    vector<ll> ans;
    ll temp = number;
    for (ll i = 2; i * i <= temp; i++) {
        ll cnt = 1;
        while (number % i == 0) {
            ans.push_back(i);
            number /= i;
            cnt++;
        }
        NumberOfDivsors *= cnt;
    }
    if (number != 1) {
        ans.push_back(number);
        NumberOfDivsors *= 2;
    }
    return ans;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    map<int, ll> numbers;
    ll ans = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int s = 1; s <= c; s++) {
                int temp = i * j * s;

                if (numbers.count(temp) > 0)
                    ans += numbers[temp] % 1073741824;
                else {
                    PrimeFactroiztion(temp);
                    numbers[temp] = NumberOfDivsors;
                    ans += NumberOfDivsors % 1073741824;
                }
                NumberOfDivsors = 1;
            }

        }
    }
    cout << ans << endl;


    return 0;
}
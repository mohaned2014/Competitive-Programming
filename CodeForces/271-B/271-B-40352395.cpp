//uva 406 Prime Cuts


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

bool notprime[1000005];

vector<ll> seive(ll number) {
    // false mean it is prime number && true means it is not prime
    notprime[0] = notprime[1] = 1;
    vector<ll> ans;
    for (long long i = 2; i < number; i++) {
        //if it is not prime ,continue
        if (notprime[i])
            continue;
        ans.push_back(i);
        for (ll j = i * i; j <= number; j += i) {
            notprime[j] = 1;
        }

    }
    return ans;
}

int main() {
    vector<ll> primes = seive(1e5 + 5);
    sort(primes.begin(), primes.end());
    int arr[501][501];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    ll smallest = LONG_MAX;
    for (int i = 0; i < m; i++) {
        ll counter = 0;
        for (int j = 0; j < n; j++) {
            if (notprime[arr[i][j]]) {
                auto it = upper_bound(primes.begin(), primes.end(), arr[i][j]);
                counter += *(it) - arr[i][j];
            }
        }
        smallest = min(smallest, counter);

    }

    for (int j = 0; j < n; j++) {
        ll counter = 0;
        for (int i = 0; i < m; i++) {
            if (notprime[arr[i][j]]) {
                auto it = upper_bound(primes.begin(), primes.end(), arr[i][j]);
                counter += *(it) - arr[i][j];
            }
        }
        smallest = min(smallest, counter);


    }
    cout << smallest << endl;


}
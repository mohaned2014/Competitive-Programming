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
    notprime[0] = 1;
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


    //freopen("input.txt","r",stdin);
    vector<ll> v = seive(1000);
    int arr[1002] = {0};

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < i - 1; j++) {
            if (v[j] + v[j + 1] == (v[i] - 1))
                arr[v[i]]++;
        }

    }
    int counter = 0;
    for (int i = 0; i < 1001; i++) {
        counter += arr[i];
        arr[i] = counter;
    }
    int x, y;
    cin >> x >> y;
    if (arr[x] >= y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
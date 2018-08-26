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

bool ContainZero(int number) {

    while (number >= 10) {
        if (notprime[number])
            return true;
        else {
            int temp = log10(number);
            int temp1 = (int) (pow(10, temp) + 0.5);
            number %= temp1;
        }
    }
    return notprime[number];

}

bool ContainZero2(int number) {

    while (number >= 10) {
        if (number % 10 == 0)
            return true;
        else {
            number /= 10;
        }
    }
    return false;

}

unsigned ll ans = 1;

vector<ll> getDivisors(ll n) {
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans = (ans * i) % (1000000007);
            ret.push_back(i);
            if (n != i * i) {
                ret.push_back(n / i);
                ans = (ans * (n / i)) % (1000000007);
            }
        }
    }
    return ret;
}

ll GCD(ll a, ll b) {
    return b ? GCD(b, a % b) : a;
}

bool ContainOnesOnly(ll number) {
    while (number >= 10) {
        if (number % 10 != 1)
            return false;
        number /= 10;
    }
    if (number == 1)
        return true;
    else
        return false;
}

ll LCM(ll a, ll b) {
    return a / GCD(a, b) * b;
}

ll arr[100005];
ll arr2[100005];

int main() {
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2 + 1, arr2 + n + 1);
    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];
        arr2[i] += arr2[i - 1];
    }
    int x;
    cin >> x;
    int op, l, r;
    for (int i = 1; i <= x; i++) {
        cin >> op >> l >> r;

        if (op == 1)
            cout << arr[r] - arr[l - 1] << endl;
        else
            cout << arr2[r] - arr2[l - 1] << endl;
    }


}
#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isPrime(ll n) {

    if (n < 2)
        return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

vector<ll> getDivisors(ll n) {
    vector<ll> ret;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (n != i * i)
                ret.push_back(n / i);
        }
    }
    return ret;
}

vector<ll> getFactors(ll n) {
    vector<ll> ret;
    ll tmp = n, cnt = 1;
    for (ll i = 2; i * i <= n; i++) {
        ll x = 1;
        while (tmp % i == 0) {
            ret.push_back(i);
            tmp /= i;
            ++x;
        }
        cnt *= x;
    }
    if (tmp != 1) {
        ret.push_back(tmp);
        cnt *= 2;
    }
    return ret;
}

const int N = 1e6;
bool f[N + 5];
vector<int> primes;

void seive() {
    f[0] = f[1] = 1;
    for (int i = 1; i <= N; i++) {
        if (f[i])
            continue;
        primes.push_back(i);
        for (ll j = (ll) i * i; j <= N; j += i)
            f[j] = 1;
    }
}

ll GCD(ll a, ll b) {
    return b ? GCD(b, a % b) : a;
}

ll LCM(ll a, ll b) {
    return a / GCD(a, b) * b;
}

string s;

void rec(string v1) {
    if (!v1.empty()) {
        string temp(v1.begin() + 1, v1.end());
        rec(temp);
        s += v1[0];
    }
}

bool palindrom(string &s) {
    if (s.size() < 2) {
        //base case
        //simple work by myself
        return true;
    } else {
        //recursive step
        char first = s[0];
        char last = s[s.size() - 1];
        if (first == last) {
            s = s.substr(1, s.size() - 2);
            palindrom(s);
        } else {
            return false;
        }
    }

}

ll aa(vector<int> &v1, int index) {
    if (index == v1.size())
        return 0;
    else {
        return v1[index] + aa(v1, index + 1);
    }

}

int fac(int n) {
    if (n == 1)
        return 1;
    else
        return n * fac(n - 1);
}

int main() {
    // freopen("input.txt","r",stdin);
    int x, y;
    cin >> x >> y;
    cout << fac(min(x, y)) << endl;
    return 0;
}
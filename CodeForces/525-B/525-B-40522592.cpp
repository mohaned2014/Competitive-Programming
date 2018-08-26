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

int arr[1000001];
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

int main() {
    //freopen("input.txt","r",stdin);
    string s;
    cin >> s;
    int sz = s.size();
    s.insert(s.begin(), '.');
    vector<int> v1(s.size());
    v1[0] = 0;
    int n;
    cin >> n;
    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        v1[temp]++;
    }
    for (int i = 1; i <= (s.size() / 2); i++) {
        v1[i] += v1[i - 1];
    }

    for (int i = 1; i <= (s.size() / 2); i++) {
        if (v1[i] % 2 != 0) {
            char temp1 = s[i];
            s[i] = s[sz - i + 1];
            s[sz - i + 1] = temp1;
        }
    }


    s.erase(s.begin(), s.begin() + 1);
    cout << s << endl;
}
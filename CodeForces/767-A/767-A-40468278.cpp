//uva

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
ll ans = 1;
const ll miliar = 1e9;

vector<ll> getDivisors(ll n) {
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans = (ans * i) % (miliar + 9);
            ret.push_back(i);
            if (n != i * i) {
                ret.push_back(n / i);
                ans = (ans * (n / i)) % (miliar + 9);
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

const int MXN = 600;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    int arr[100001] = {0};
    int n;
    cin >> n;
    int temp;
    vector<int> ans;
    int maxi = n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[temp]++;
        while (arr[maxi]) {
            cout << maxi << " ";
            maxi--;
        }
        cout << endl;


    }


}
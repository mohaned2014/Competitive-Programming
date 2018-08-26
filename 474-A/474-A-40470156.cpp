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

#define endl '\n'

int main() {
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    char ch;
    cin >> ch;
    int index = ch == 'R' ? -1 : 1;
    char arr[3][10];
    int rows[124] = {0};
    int col[124] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 0)
                arr[i][j] = s1[j];
            else if (i == 1)
                arr[i][j] = s2[j];
            else
                arr[i][j] = s3[j];
            rows[(int) arr[i][j]] = i;
            col[(int) arr[i][j]] = j;
        }
    }
    string word;
    cin >> word;
    int temp1, temp2;
    for (int i = 0; i < word.size(); i++) {
        temp1 = rows[(int) word[i]];
        temp2 = col[(int) word[i]];
//        if(temp2 ==9 && ch =='R')
//            index =-1;
//        else if(temp2 ==0 && ch =='L')
//            index=1;
        cout << arr[temp1][temp2 + index];
//        if(ch =='R')
//            index =1;
//        else
//            index =-1;
        //cout<<arr[temp1][temp2+index];
    }
    cout << endl;


    return 0;
}
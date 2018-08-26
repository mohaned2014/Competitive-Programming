#include <iostream>
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int currentmax = 0;

void cd(vector <vector<int>> &ans, vector<int> &chosen, int sum, vector<int> &given, int maxi, int index = 0) {

    if (sum > maxi)
        return;
    if (index == given.size()) {
        if (sum > currentmax) {
            currentmax = sum;
            ans.clear();
            ans.push_back(chosen);
        }
    } else {
        //chose element
        sum += given[index];
        chosen.push_back(given[index]);
        cd(ans, chosen, sum, given, maxi, index + 1);
        sum -= given[index];
        chosen.pop_back();
        cd(ans, chosen, sum, given, maxi, index + 1);

    }

}

void perm_60(vector <vector<ll>> &ans, vector<ll> &temp) {
    if (temp.size() == 2) {
        ans.push_back(temp);
    } else {
        for (int i = 0; i < 60; i++) {
            temp.push_back(i);
            perm_60(ans, temp);
            temp.pop_back();
        }

    }
}


ll fastPow(ll no, int power) {
    if (power == 1)
        return no;
    double ans = 1;
    for (int i = 0; i < power; i++)
        ans *= no;
    return (ll) ans;
}


int main() {
    ll x, y, l, r;
    cin >> x >> y >> l >> r;
    vector <vector<ll>> ans;
    vector<ll> temp;
    perm_60(ans, temp);
    vector<ll> golden_ages;
    for (ll i = 0; i < ans.size(); i++) {
        ll temp1, temp2;
        if (ans[i][0] == 1)
            temp1 = x;
        else
            temp1 = pow(x, ans[i][0]) + 0.5;
        if (ans[i][1] == 1)
            temp2 = y;
        else
            temp2 = pow(y, ans[i][1]) + 0.5;
        if (temp1 < 0 || temp2 < 0)
            continue;
        ll temp3 = temp1 + temp2;
        if (temp3 >= l && temp3 <= r) {
            golden_ages.push_back(temp3);

        }
    }
    golden_ages.push_back(l - 1);
    golden_ages.push_back(r + 1);
    sort(golden_ages.begin(), golden_ages.end());
    ll maxi = 0;
    for (ll i = 0; i < golden_ages.size() - 1; i++) {
        ll temp4 = golden_ages[i + 1] - golden_ages[i] - 1;
        //if(temp4==177668463693676079)
        // cout<<golden_ages[i+1]<<"       "<<golden_ages[i]<<endl;
        //cout<<temp4<<endl;
        if (temp4 > maxi) {
            maxi = temp4;
        }
    }
    cout << maxi << endl;


}
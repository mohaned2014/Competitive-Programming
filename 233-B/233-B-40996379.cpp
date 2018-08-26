#include <iostream>
#include <bits/stdc++.h>

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

int sumdigits(int no) {
    int ans = 0;
    while (no > 0) {
        ans += no % 10;
        no /= 10;
    }
    return ans;


}

int main() {
    long long n;
    cin >> n;
    long long root = sqrt(n);
    long long ans = -1;
    for (long long i = root - 100; i <= root; i++) {
        if (i <= 0)
            continue;
        if ((i * i) + (sumdigits(i) * i) - n == 0) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
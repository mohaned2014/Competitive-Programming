#include <random>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define loop(n)   for(int i=0;i<(n);i++)
#define loop1(n) for(int i=1;i<=(n);i++)
#define endl '\n'

#include <iomanip>

using namespace std;


int main() {

    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    vector<int> v2(k);
    for (int i = 0; i < k; i++)
        cin >> v2[i];

    for (int i = 0; i < n; i++) {
        if (find(v2.begin(), v2.end(), v1[i]) != v2.end()) {
            cout << v1[i] << " ";
        }
    }
    cout << endl;


}
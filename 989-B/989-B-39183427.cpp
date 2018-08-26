//#ifdef JUDGE
//#include <fstream>
//std::ifstream cin("input.txt");
//std::ofstream cout("output.txt");
//#else
//#include <iostream>
//using std::cin;
//using std::cout;
//#endif

#include <random>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <algorithm>    // std::reverse
#include <map>

#define loop(n)   for(int i=0;i<(n);i++)
#define loop1(n) for(int i=1;i<=(n);i++)
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    int counter = 0;
    for (int i = 0; i < n - p; i++) {
        if (s[i] == '.') {
            if (s[i + p] == '1')
                s[i] = '0';
            else if (s[i + p] == '0')
                s[i] = '1';
            else if (s[i] == '.' && s[i + p] == '.') {
                s[i] = '0';
                s[i + p] = '1';
            }
        }


    }
    for (int i = n - p; i < n; i++) {
        if (s[i] == '.' && i - p < 0) {
            s[i] = '0';
        } else if (s[i] == '.' && s[i - p] == '1')
            s[i] = '0';
        else if (s[i] == '.' && s[i - p] == '0')
            s[i] = '1';
    }
    for (int i = 0; i < n - p; i++) {
        if (s[i] != s[i + p]) {
            cout << s << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
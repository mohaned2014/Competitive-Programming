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

    string word;
    cin >> word;

    int ans = (int) 'B' + (int) 'A' + (int) 'C';
    int x;
    for (int i = 2; i < word.size(); i++) {
        x = (int) word[i] + (int) word[i - 1] + (int) word[i - 2];
        if (x == ans && word[i] != word[i - 1] && word[i] != word[i - 2] && word[i - 2] != word[i - 1]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;


}
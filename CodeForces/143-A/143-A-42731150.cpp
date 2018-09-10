#include <bits/stdc++.h>

using namespace std;
int r1,  r2,  c1,  c2,  d1,  d2;
bool code ( vector<int> chosen ) {
    if ( chosen[0] + chosen[1] == r1 && chosen[2] + chosen[3] == r2 && chosen[0] + chosen[2] == c1 && chosen[1] + chosen[3] == c2
            && chosen[0] + chosen[3] == d1 && chosen[1] + chosen[2] == d2 )
        return true;
    return false;
}
int visited[10];
vector<int> permution ( vector<int> &chosen ) {
    if ( chosen.size() == 4 ) {
        if ( code ( chosen ) )
            return chosen;
    } else {
        for ( int i = 1 ; i < 10; i++ ) {
            if(visited[i])
                continue;
            visited[i]=1;
            chosen.push_back ( i );
            vector<int> ans = permution ( chosen );
            chosen.pop_back();
            visited[i]=0;
            if ( ans.size() == 4 )
                return ans;
        }
    }
    vector<int> v (1);
    return v;
}
int main() {
    vector<int> chosen ;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    vector<int> ans = permution(chosen);
    if(ans.size()==1)
        cout<<-1<<endl;
    else
        for(int i = 0 ; i<4;i++){
        if(i==2)
            cout<<endl;
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
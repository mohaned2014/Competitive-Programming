#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd (ll x , ll y) {
    if ( x == 0 )
        return y;
    return gcd(y % x , x);
}
ll lcm (ll x , ll y) {
    return (x * y) / gcd(x , y);
}

vector<ll> v1;
ll n;
ll inc_excl (ll num , ll index = 0 , int sign = -1 , ll ans = 1 , int chosen = 0) {
    if ( index == 5 ) {
        if ( chosen == 0 )
            return 0;
        else
            return sign * num / ans;
    }
    ll ret = inc_excl(num , index + 1 , sign , ans , chosen);//not chosen
    ret += inc_excl(num , index + 1 , sign * -1 , lcm(ans , v1[ index ]) , chosen + 1);//chosen
    return ret;

}
ll stresstest (ll mini , int maxi) {
    ll counter = 0;
    for ( int i = mini ; i <= maxi ; i++ ) {
        if ( i % v1[ 0 ] && i % v1[ 1 ] && i % v1[ 2 ] && i % v1[ 3 ] && i % v1[ 4 ] )
            counter++;
    }
    return counter;
}
int main () {

    //freopen("D:\\cs\\problem solving\\Competitive-Programming\\input.txt" , "r" , stdin);
    int T;
    int counter = 0;

    T = 0;
    cin >> T;
    while ( T-- ) {
        ll a , b , x , y;

        cin >> a >> b >> x >> y;
        v1 = vector < ll > {x , x + y , x + (2 * y) , x + (3 * y) , x + (4 * y)};

        ll ans = inc_excl(b) - inc_excl(a - 1);
        ans = (b - a + 1) - ans;

        cout << ans << endl;
    }
}

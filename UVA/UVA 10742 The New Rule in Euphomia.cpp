
//uva 10742	The New Rule in Euphomia

#include <bits/stdc++.h>
#define ll long long
ll NumberOfDivsors=1;
using namespace std;
vector<ll> PrimeFactroiztion(ll number)
{
    vector<ll> ans;
    ll temp =number;
    for(ll i=2 ; i*i <= temp ; i++)
    {
        ll cnt =1;
        while(number%i ==0)
        {
            ans.push_back(i);
            number /=i;
            cnt++;
        }
        NumberOfDivsors *= cnt;
    }
    if(number !=1){
        ans.push_back(number);
    NumberOfDivsors *=2;
    }
    return ans;
}

bool notprime[1000005];

vector<ll> seive(ll number)
{
    // false mean it is prime number && true means it is not prime
    notprime[0] =notprime[1] =1;
    vector<ll> ans;
    for(long long i=2;i<number;i++)
    {
        //if it is not prime ,continue
        if(notprime[i])
            continue;
        ans.push_back(i);
        for(ll j = i*i; j<=number;j+=i){
            notprime[j] = 1 ;
        }

    }
    return ans;
}
bool ContainZero(int number){

    while(number >=10){
        if(notprime[number])
            return true;
        else{
        int temp = log10(number);
        int temp1 =(int)(pow(10,temp)+0.5);
        number %=temp1;
        }
    }
    return notprime[number];

}

bool ContainZero2(int number){

    while(number >=10){
        if(number%10==0)
            return true;
        else{
        number/=10;
        }
    }
    return false;

}
int arr[1000001];

vector<ll> getDivisors(ll n){
  vector<ll> ret;
  for(ll i=1; i*i<=n; i++){
    if(n % i == 0){
      ret.push_back(i);
      if(n != i * i)
        ret.push_back(n / i);
    }
  }
  return ret;
}
ll GCD(ll a, ll b){
  return b ? GCD(b, a % b) : a;
}

int main()
{
    //freopen("input.txt","r",stdin);
    vector<ll> primes =seive(1000000);
    sort(primes.begin(),primes.end());
    ll a;
    int q =1;
    while(cin>>a&&a!=0)
    {
        ll ans =0;
        auto first = primes.begin();
        auto it = upper_bound(primes.begin(),primes.end(),a);
        if(it == primes.begin()){
        cout<<"Case "<<q<<": "<<0<<endl;
            q++;
            continue;
        }
        it--;
        int counter =distance(primes.begin(),it);
        while(first<it){
            while( (*(first) + *(it)) > a ){
                it--;
                counter--;
                if(counter==0)
                break;
            }
            ans+=counter;
            counter--;
            first++;

        }

        cout<<"Case "<<q<<": "<<ans<<endl;
        q++;



    }


}

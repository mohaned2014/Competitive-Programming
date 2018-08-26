//11679 - Sub-prime

#include <iostream>
#define ll long long
#define Size 25
using namespace std;

int main(){
  ll B=1, N=1 , R[Size]={0},D =0 , C =0 ,V =0;
  while(cin>>B>>N){
    if(!B && !N ) break;
    for(int i=1;i<=B;i++){
        cin>>R[i];
    }

    for(int i=0;i<N;i++){
        cin>>D>>C>>V;
        R[D] -= V;
        R[C] += V;
    }
    bool test = true;
    for(int i=1;i<=B;i++){
       if(R[i]<0){
            cout<<i;
        test = false;
        break ;
       }
    }
    if(test) cout<<"S"<<endl;
    else cout<<"N"<<endl;
  }

  return 0;
}

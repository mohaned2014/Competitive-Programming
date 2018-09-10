#include <iostream>

using namespace std;

int main()
{
    char arr[4][4];
    for(int i = 0; i<4;i++){
        for(int j = 0 ; j <4;j++)
            cin>>arr[i][j];
    }
    for(int i = 0; i<3;i++){
        for(int j = 0 ; j <3;j++){
            int counter = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
            if(counter != '.'+'.'+'#'+'#'){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const double PI = acos ( -1.0 );

double toRadians ( double degree ) {
     return ( degree * PI / 180.0 );
}
double toDegree(double radian){
    if(radian<0)
        radian += 2*PI;
    return (radian*180.0/PI);
}
double toDegreeFromMinuts(double minutes){
    return minutes/60.0;
}
int main() {

}

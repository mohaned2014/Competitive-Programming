#include <bits/stdc++.h>
using namespace std;
const double PI = acos ( -1.0 );
struct point {
    double x ;
    double y;
};
double length(point a,point b) {
    return  sqrt( ((a.x)-(b.x))*( (a.x)-(b.x)) + ((a.y)-(b.y))*( (a.y)-(b.y)) );
}

double toRadians ( double degree ) {
    return ( degree * PI / 180.0 );
}
double toDegree(double radian) {
    if(radian<0)
        radian += 2*PI;
    return (radian*180.0/PI);
}
double toDegreeFromMinuts(double minutes) {
    return minutes/60.0;
}
double fixAngle(double A) {
    return A > 1 ? 1: (A < -1 ? -1 :A );
}
//sin(A)/a = sin(B)/b = sin(C)/c
double sinlaw_getSide_a_(double b, double A, double B) {
    return (sin(A)*b)/sin(B);
}
double sinlaw_getAngle_A_(double a, double b, double B) {
    return asin( fixAngle( (a*sin(B))/B ) );
}
//a^2 = b^2 +c^2 - 2*b*c*cos(A)
double cosinelaw_getAngle_A_(double a,double b, double c) {
    //given 3 sides or SAS
    return acos( fixAngle((b*b+c*c-a*a)/(2*b*c) ) );
}
double triangleArea (point p0, point p1, point p2) {
    double a = length(p0,p1),b =  length(p0,p2),c = length(p1,p2);
    double s = (a+b+c)/2;
    return sqrt((s-a)*(s-b)*(s-c) *s);
}
double triangleAreaMidians(double m1, double m2, double m3) {
    if(m1<=0 || m2<=0||m3<= 0)
        return -1;
    double s = 0.5 * (m1+m2+m3);
    double median_area = (s* (s - m1 ) *(s-m2)*(s-m3) );
    double area = 4.0/3.0 *sqrt(median_area);
    if(median_area <= 0.0 || area <= 0)
        return -1;
    return area;
}
int main() {
    int n, k;
    cin>>n>>k;
    double ans = 0;
    vector<point> sign(n);
    for(int i = 0; i<n; i++) {
       cin>>sign[i].x>>sign[i].y;
    }
    for(int i = 1; i<n; i++) {
      ans+= length(sign[i-1],sign[i]);
    }
    ans/=50;
    ans*=k;
    cout<<fixed<<setprecision(6)<<ans<<endl;

}
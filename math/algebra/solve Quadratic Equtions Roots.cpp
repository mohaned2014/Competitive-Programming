// y= ax^2 + bx +c
// determinant = b^2 -4ac
//if d>0 2 roots
//if d==0 1 root
//d<0 No roots
//vertex (min/max)  X= -b / 2a

#define ll long long
const ll OO = 0x3f3f3f3f;
pair<ll,ll> Roots(double a, double b,double c)
{
  double d = (b*b) -(4*a*c);
  if( d < 0 ) return {-OO,-OO};
  pair<ll,ll> res;
  res.first = ( (-b) +sqrt(d)   ) / (2*a) ;
  res.second = ( (-b) -sqrt(d) ) / (2*a) ;
  return res;
  }

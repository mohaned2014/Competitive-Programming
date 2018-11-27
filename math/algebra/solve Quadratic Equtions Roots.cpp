// y= ax^2 + bx +c
// determinant = b^2 -4ac
//if d>0 2 roots
//if d==0 1 root
//d<0 No roots
//vertex (min/max)  X= -b / 2a

const ll OO = 0x3f3f3f3f;
const double EPS = 1e-9;
pair<ll,ll> Roots(double a, double b,double c)
{
  double d = fabs((b*b) -(4*a*c));
  if( d <  EPS) return {-OO,-OO};
  pair<ll,ll> res;
  res.first = ( (-b) +sqrt(d)  ) / (2*a) +0.5 ;
  res.second = ( (-b) -sqrt(d) ) / (2*a) +0.5;
  return res;
}

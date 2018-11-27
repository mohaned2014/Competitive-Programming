ll power(ll e,ll p){
	if(p==0) return 1;
	if(p==1)return e;
	if(p%2!=0)return power(e,p-1)*e;
	ll x =power(e,p/2);
	return x*x;
}

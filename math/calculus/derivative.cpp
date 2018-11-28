vector<ll> derivative(vector<ll> &equation)
{
		//input is vector sorted form //x^n ... x^0
		//return vector without last element // x^0 and the derivative
		vector<ll> res;
		ll deg = equation.size()-1; 
		for (size_t i = 0; i < equation.size()-1; i++) {
			res.push_back(equation[i]*deg);
			deg--;
		}
		return res;
}

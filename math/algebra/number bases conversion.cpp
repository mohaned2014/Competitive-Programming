string letters = "0123456789ABCDEF";
int toInt(char c)
{
	return letters.find(c);
}
int fromBaseToDecimal(string in ,int base)
{
	int res = 0;
	for (size_t i = 0; i < in.size(); i++) {
		res *= base;
		res += toInt(in[i]);
	}
	return res;
}
string fromDecimalToBase(int number ,int base)
{
	if(number==0) return "0";
	string res ="";
	while (number) {
		res = letters[number %base] +res;
		number/=base;
	}
	return res;
}

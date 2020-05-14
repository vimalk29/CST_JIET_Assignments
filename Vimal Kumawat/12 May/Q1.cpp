#include<iostream>
using namespace std;

int gcd(int b,int c){
    if(c==0)
        return b;
    return gcd(c, b%c);
}
int main(){
	int A, B, C;
	cout<<"Enter Range : ";
	cin>>A;
	cout<<"Enter B & C it should be Divisible By : ";
	cin>>B>>C;
	int lcm = (B*C)/gcd(B,C);
	int ans = A/lcm;
	cout<<"Answer is: "<<ans;
	return 0;
}

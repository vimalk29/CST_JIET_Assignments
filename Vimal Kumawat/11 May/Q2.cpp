#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> ar={9,5,3};
	int i,j,minx=INT_MAX,b;
	cout<<"Array is:"<<endl;
	for(i=0;i<ar.size();i++)
		cout<<ar[i]<<" ";
	cout<<endl;
	for(i=0;i<ar.size();i++)
		for(j=i+1;j<ar.size();j++){
			b=ar[i]^ar[j];	
			if(b<minx)
				minx=b;
		}
	cout<<"Min ans : "<<minx;
}

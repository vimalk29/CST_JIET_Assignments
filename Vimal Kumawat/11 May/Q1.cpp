#include<bits/stdc++.h>
using namespace std;
int main(){
	
	vector<int> ar= {2,4,7,2,7,2,4};
	int p=0,i;
	cout<<"Array is :"<<endl;
	for(i=0;i<ar.size();i++)
		cout<<ar[i]<<" ";
	cout<<endl;
	
	for(i=0;i<ar.size();i++)
		p=p^ar[i];
		
	cout<<"Answer "<<p<<endl;
}

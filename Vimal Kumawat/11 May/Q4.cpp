#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int A[50][50]={0};
	cout<<"Enter range:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
		A[i][0]=1;
	for(i=1;i<n;i++){
		for(j=1;j<n;j++)
			cout<<A[i][j]<<"\t";
		cout<<endl;
	}
	for(i=1;i<n;i++)
		for(j=1;j<n;j++)
			if(i>=j)
				if(i==j)
					A[i][j]=A[i][j-1];
				else
					A[i][j]=A[i][j-1]+A[i-1][j];
	cout<<endl<<"Route map"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout<<A[i][j]<<"\t";
		cout<<endl;
	}
	cout<<"Number of routes : "<<A[n-1][n-1];
}

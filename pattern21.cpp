#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n ";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		int k=1;
		while(j<=i-1){
			cout<<" ";
			j++;
		}
		while(k<=n-i+1){
			cout<<i;
			k++;
		}
		cout<<endl;
		i++;
		
	}
}

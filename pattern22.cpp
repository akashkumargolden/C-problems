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
		while(j<=n-i){
			cout<<" ";
			j++;
		}
		while(k<=i){
			cout<<i;
			k++;
		}
		cout<<endl;
		i++;
		
	}
}

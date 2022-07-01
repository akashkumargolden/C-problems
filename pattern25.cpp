#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n ";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=i;
		while(j<n){
			cout<<" ";
			j++;
		}
		j=1;
		while(j<=i){
			cout<<j;
			j++;
			
		}
		j=j-1;
		while(j>1){
			cout<<j-1;
			j--;
		}
		cout<<endl;
		i++;
		
	}
}

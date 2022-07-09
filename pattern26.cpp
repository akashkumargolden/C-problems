#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	int j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=n-i+1){
				cout<<j;
			}
			else{
				cout<<"*";
			}
		}
			for(j=1;j<=n;j++){
			if(j<=i-1){
				cout<<"*";
			}
			else{
				cout<<n-j+1;
			}
		}
		
		cout<<endl;
	}
}

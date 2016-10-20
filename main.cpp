#include<iostream>
using namespace std;
void series(int i,int n){
	for(int j=1;j<=i;j++){
		cout<<j;
	}
	for(int j=1;j<=(n-i)*2;j++){
		cout<<" ";
	}
	for(int j=i;j>=1;j--){
		cout<<j;
	}

}
int main(){
    int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		series(i,n);
		cout<<endl;
	}
	return 0;
}

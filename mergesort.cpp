#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


void mergesort(int *a,int start,int end){

if(start<end)
	{
	int mid=(start+end)/2 ;
	mergesort(a,start,mid) ;
	mergesort(a,mid+1,end) ;

	}

}
	


void solve(){
int n=8 ;
int a[8] ;
for (int i = 0; i < 8; i++)
{
	cin>>a[i] ;
}

mergesort(a,0,n-1) ;

for (int i = 0; i < 8; i++)
{
	cout<<a[i]<<" " ;
}


}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;

	//cin >> y ; 
	y=1;

	while (y--)
	{	 
		solve() ;
	}
}
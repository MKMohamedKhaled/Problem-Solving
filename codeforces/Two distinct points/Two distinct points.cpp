#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	for(int i=0;i<q;++i){
		int l1,l2,r1,r2;
		cin>>l1>>r1>>l2>>r2;
		if(l1 != l2)
			cout<<l1<<" "<<l2<<endl;
		else
			cout<<l1<<" "<<l2+1<<endl;
	}
	return 0;
}

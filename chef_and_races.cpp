#include <iostream>
using namespace std;

int main() {
	// your code goes here
	short t;
	cin>>t;
	while(t--){
	    short x,y,a,b;
	    cin>>x>>y>>a>>b;
	    
	    if((x==a || x==b) && (y==a || y==b)){
	        cout<<"0"<<endl;
	    }
	    else if((x!=a && x!=b)&&(y!=a && y!=b)){
	        cout<<"2"<<endl;
	    }
	    else{
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
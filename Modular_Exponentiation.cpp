#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int result=1;        
	while(n>0){                
		if(n&1){
			//mean no is odd            
			result = ((1LL * result * (x%m))%m);       
		}                
		x = (((long long)(x%m)  *  (x%m))  %m);        
		n=n>>1;    
	}    
		
	return result; 
}

int main(){
    int result=modularExponentiation(3,3,4);
    cout<<result<<endl;
    return 0;
}
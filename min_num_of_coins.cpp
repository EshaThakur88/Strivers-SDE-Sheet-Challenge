#include <iostream> 
using namespace std;
int findMinimumCoins(int amount) 
{
    vector<int> cash={1000,500,100,50,20,10,5,2,1};
    int ans=0;

    while(amount){
        for(auto i: cash){
            if(amount>=i){
                amount-=i;
                break;
            }
        }
        ans++;
    }
    
    return ans;
}

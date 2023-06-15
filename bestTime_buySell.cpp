#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices){int n = prices.size() ;
    
    int costPrice = prices[0] ;
    
    int maxProfit = 0 ;

    for(int i = 1 ; i < n ; i++)
    {
        if(costPrice <= prices[i] )  maxProfit = max(maxProfit , prices[i] - costPrice) ;

        else  costPrice = prices[i] ;
    }

    return maxProfit ;
} 
int main(){
    vector<int> prices={17, 20, 11, 9, 12, 6};
    int result=maximumProfit(prices);

    cout<<result<<endl;

    return 0;
}
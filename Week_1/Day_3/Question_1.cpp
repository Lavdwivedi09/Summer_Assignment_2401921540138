// 2144. Minimum Cost of Buying Candies With Discount (daily problem)
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int n = cost.size() ;
        int sum1 = 0 ;
        for(int i=0;i<n;i++){
            sum1 = sum1 + cost[i] ;
        }
        int sum2 = 0 ;
        for(int i=2;i<n;i+=3){
            sum2 = sum2 + cost[i];
        }
        int ans  = sum1 - sum2 ;
        return ans ;

    }
};

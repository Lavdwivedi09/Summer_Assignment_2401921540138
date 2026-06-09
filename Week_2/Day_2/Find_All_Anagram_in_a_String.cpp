class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans ;
        if(p.size()>s.size()) return ans ;

      vector<int> pcount(256,0) ;
      vector<int> wcount(256,0) ;
        for(char ch : p){ // freq of chsr in p
        pcount[ch - 'a']++ ;
      }
        
        int left =0 ;
        for(int right=0;right<s.size();right++){
            wcount[s[right]-'a'] ++ ; // add current char in window

            if(right - left + 1 > p.size()){
                wcount[s[left] - 'a']-- ;
                left++ ;
            }
        
            if(wcount == pcount){
                ans.push_back(left) ;
            }
        }
        
        return ans  ;
    }
    
};

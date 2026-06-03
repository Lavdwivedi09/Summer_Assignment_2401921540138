//3120. Count the Number of Special Characters I
class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,0),upper(26,0) ;
        int n = word.size();
        for(int i=0;i<n;i++){
          if(word[i]>='a' && word[i]<='z'){
            lower[word[i]-'a'] = 1 ;
          }
          else {
            upper[word[i]-'A'] = 1 ;
          }
        }
        int count = 0 ;
        for(int i =0;i<26;i++){
            if(lower[i] && upper[i]){
                count++ ;
            }
        }
        return count ;
    }
};

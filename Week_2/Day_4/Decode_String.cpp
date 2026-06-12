class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> st;
        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
             else if (ch == '[') {
                st.push({curr, num});
                curr = "";
                num = 0;
            } 
            else if (isalpha(ch)) {
                curr += ch;
            } 
            else if (ch == ']') {
                auto top = st.top();
                st.pop();

                string prev = top.first;
                int times = top.second;

                string temp = "";

                for (int i = 0; i < times; i++) {
                    temp += curr;
                }

                curr = prev + temp;
            } 
            else {
                curr += ch;
            }
        }
        return curr ;
    }
};

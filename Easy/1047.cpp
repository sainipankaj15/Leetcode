class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(auto it : s){
            if(st.size() && it==st.top()){
                st.pop();
                continue;
            }

            st.push(it);
        }


        string ans="";

        while(st.size()){
            ans+=st.top();
            st.pop();
        }

    reverse(ans.begin(),ans.end());

    return ans;


    }
};

// method 2 
//more better 
// we dont need stack we use string as a stack 
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(auto it : s){
            if(ans.size() && it==ans.back()){
                ans.pop_back();
                continue;
            }
            else{
                ans.push_back(it);
            }

        }

    return ans;
    }
};
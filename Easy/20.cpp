// this code i wrote by myself not going to explain bcoz code is self explainaortry 
// two things is there
// first is before pop there should be an element in a stack otherwise it will fail
// second is jo char last mai aa raha h wahi sabse pahle remove bhi hona chaaiye 


// things which i learnt 
// s.size()==0 ko s.empty() bhi likh sakate h :: xD

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> s1;

        for(auto it : s){
            if(it=='('){
                s1.push('(');
            }
            if(it==')'){
                if(s1.size()==0 || s1.top()!='(')
                    return 0;
                s1.pop();
            }
            if(it=='{'){
                s1.push('{');
            }
            if(it=='}'){
                if(s1.size()==0 || s1.top()!='{')
                    return 0;
                s1.pop();
            }
            if(it=='['){
                s1.push('[');
            }
            
            if(it==']'){
                 if(s1.size()==0 || s1.top()!='[')
                    return 0;
                s1.pop();
            }
        }
         
        

        if(s1.size()==0)
        return 1;
        return 0;
    }
};


// this is second code 
// nothing changed just changed s1.size()==0 to s1.empty()
// boom it has passed 100% better
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> s1;

        for(auto it : s){
            if(it=='('){
                s1.push('(');
            }
            if(it==')'){
                if(s1.empty() || s1.top()!='(')
                    return 0;
                s1.pop();
            }
            if(it=='{'){
                s1.push('{');
            }
            if(it=='}'){
                if(s1.empty()|| s1.top()!='{')
                    return 0;
                s1.pop();
            }
            if(it=='['){
                s1.push('[');
            }
            
            if(it==']'){
                 if(s1.size()==0 || s1.top()!='[')
                    return 0;
                s1.pop();
            }
        }
         
        

       return s1.empty();
    }
};
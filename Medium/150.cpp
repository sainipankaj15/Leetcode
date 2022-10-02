class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        
        for(auto it : tokens){
            if(it!="+" && it!="-" && it!="*" && it!="/"){
                int a = stoi(it);
                s.push(a);
                // stoi function string ko int mai change kar deta h 
            }
            else{
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                
                if(it=="+")
                s.push(b+a);
                if(it=="-")
                s.push(b-a);
                if(it=="*")
                s.push(b*a);
                if(it=="/")
                s.push(b/a);
            }

           
        }
        
         return s.top();
    }
};
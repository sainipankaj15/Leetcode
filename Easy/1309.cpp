class Solution {
public:
    string freqAlphabets(string s) {
        //Our logic is that we will start from last and we will check if we get # then we will jump 2 otherwise normal chaleege
        string value="";
        int num=0;
        string ans="";
        
        
        for(int i=s.size()-1;i>=0;i--){
            //value mai wo value store kargee as a string 
            value = "";
            if(s[i]=='#'){
                i--;
                i--;
             value+=s[i];
                i++;
                value+=s[i];
                i--;
                // cout<<value<<" ";
            }
        else{
            value+=s[i];
            // cout<<value<<" ";
        }
            
            //ushe value ko int mai change kargee 
            // stoi function string ko int mai chnage kar deta h 
            // to_string() yeh function int ko string mai change kar deta h 
            
            num = stoi(value);
            // abe wo num mai value aa gayi h 
            // cout<<num<<endl;
            
            
            num = num+96; 
            // 96 add kiya taaki character ka ascii value tak chala jaayge
            
            
            
            ans+=num;
            // sidha add kar diya 
            
            
            // cout<<ans<<endl;
            
        }
        
        reverse(ans.begin(),ans.end());
        // reverse kiya bcoz we start from last
        
        return ans;
        
    }
};
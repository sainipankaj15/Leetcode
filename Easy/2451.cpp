class Solution {
public:
    string oddString(vector<string>& words) {

        int j=0;
        while(j<words[0].size()){
                vector<int> a;
        
        for(int i=0;i<words.size();i++){
            a.push_back(words[i][j+1]-words[i][j]);
        }
        
        int i = INT_MIN;
        int flag=0;
        // for(auto it : a){
        //     cout<<it<<" ";
        // }
        
        for(int i=0;i<a.size()-2;i++){
            if(a[i]==a[i+1] && a[i+1]!=a[i+2])
                return words[i+2];
            if(a[i]!=a[i+1] && a[i+1]!=a[i+2])
                return words[i+1];
             if(a[i]!=a[i+1] && a[i+1]==a[i+2])
                return words[i];
        }
            j++;
        }
        return "";
    }
};
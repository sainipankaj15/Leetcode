class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        
        int sum=0;
        vector<string> ans;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<dictionary.size();j++){
                for(int k=0;k<queries[0].size();k++){
                    if(queries[i][k]!=dictionary[j][k])
                        sum++;
                    if(sum>2)
                        break;
                }
                if(sum<=2)
                {
                    ans.push_back(queries[i]);
                    sum = 0;
                    break;
                }
                sum=0;
            }
        }
        
        return ans;
    }
};
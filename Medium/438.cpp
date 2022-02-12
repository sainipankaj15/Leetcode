class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        if(s.size()<p.size())
         return { };        
        vector<int> answer;
  
        // creating a map to store the occurence of each character in p
	   unordered_map<char,int> m;

        
	    
	    for(int i=0;i<p.size();i++)
            m[p[i]]++;
        // stored the occurence of each character in p in the map m
      
    
        int count = m.size();
        // cout<<count<<endl;
        
        int i=0,j=0;
        
        while(j<s.size()){
            auto it = m.find(s[j]);
            
            if(it!=m.end()){
                m[s[j]]--;
                  if(m[s[j]]==0)
            count--;
            }
          
            
            if(j-i+1<p.size())
            j++;
            else{
                if(count==0)
                {
                    answer.push_back(i);
                }
                
                auto itagain = m.find(s[i]);
                if(itagain!=m.end())
              {
                    m[s[i]]++;
                if(m[s[i]]==1)
                count++;
              }
                i++;j++;
            }
            
            
        }
        
        
        
        
        
        
        return answer;
        
        
        
        
        
    }
};
// if you still find the problem in the above code then you can use the following video
// https://youtu.be/MW4lJ8Y0xXk 
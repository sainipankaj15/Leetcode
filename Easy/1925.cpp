
class Solution {
public:
    int countTriples(int n) 
    {
        int count=0;
        unordered_set<int>s; // created a unordered set 


     // now I will insert the value of right hand side in the set 
// for example like a*a+b*b = c*c
// so below for loop I m inserting the value of Right hand side it means c*c

        for(int i=1;i<=n;i++)
        {
            s.insert(i*i);
        }


// Now I will find that if I have any a and b which satisfy a*a +b*b = c*c
// for better understanding you can think a = i and b = j
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s.find(i*i+j*j)!=s.end())
                {  
                        // if we found then increamnet the count
                    count++;
                }
            }
        }

  // this is our final answer
        return count;
    }
};



/// this is also a brute force approch
class Solution {
public:
    int countTriples(int n) {
        
        int ans=0;
        
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=n;k++){
                    if(i*i+j*j==k*k)
                        ans++;
                }
            }
        }
        
        
        return ans;
    }
};
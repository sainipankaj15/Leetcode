// Here I m pasting 2 codes 
// means by both approch
//  first code passess 113 (out of 124) but it failed in edge cases they are very nice test case after that i changd my approch 
// not compleltly but just modify something 

// pasting both code 
// first which is not right but it passed most cases 


// remeber you can not delete anything it creates error 
// this is very fuckinggg question i had more than 7 wrong submisson


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    
        
        
        //for  loop , here i removed planted plot along with left and right 
        // after this only vacant plot are avabile
        for(int i=0;i<flowerbed.size();i++)
            if(flowerbed[i]==1){
                if(i==0)
                {
                       flowerbed.erase(flowerbed.begin()+i);
                       if(!flowerbed.empty())
                  flowerbed.erase(flowerbed.begin()+i);
                  i--;
                }
                else if(i==(flowerbed.size()-1)){
                    
                    flowerbed.pop_back();
                    if(!flowerbed.empty())
                     flowerbed.pop_back();
                    i--;
                }
                else{
                    
                  flowerbed.erase(flowerbed.begin()+i);
                       // if(!flowerbed.empty())
                     flowerbed.erase(flowerbed.begin()+i);
                    i--;
                       // if(!flowerbed.empty())
                     flowerbed.erase(flowerbed.begin()+i);
                    i--;
                }
            }
        
        
        
        
        int a = flowerbed.size();
        if(a>=(2*n-1))
            return true;
        return false;
            
        
        
        
        
    }
    
};




// this is wrong code now 
// final code which is submitted is below this

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    
        
        
        //for  loop , here i blocked planted plot along with left and right (here I block plots if they are comman)
        // after this only vacant plot are avabile
        for(int i=0;i<flowerbed.size();i++)
            if(flowerbed[i]==1){
                if(i==0)
                {
                     
                  if((i+1)<flowerbed.size())
                  flowerbed[i+1] = 2;
                
                }
                else if(i==(flowerbed.size()-1)){
                    
                  
                    if(i-1<flowerbed.size())
                     flowerbed[i-1] = 2;
                    
                }
                else{
                    
                    
                      flowerbed[i-1] = 2;
                     flowerbed[i+1] = 2;
                    
                }}
                    
                    
                    
                    
        
        
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0){
                flowerbed[i]=1;
                if(i+1<flowerbed.size())
                    flowerbed[i+1] = 2;
                n--;
            }
            if(n<1)
                break;
        }
        
    
        if(n<=0)
            return true;
        return false;
            
        
        
        
        
    }
    
};
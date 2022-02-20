class Solution {
public:
    int maxCoins(vector<int>& piles) {
       
        int ans=0;
        
        sort(piles.begin(),piles.end());
        int len = piles.size();
        
        len = len/3;
        
        //bob ko kuch bhi do wo le lengaaa so every triplet bob wala mimnum choose kargee aage  ki side se
//         yadi triplet se dekhe tho mere pass last se second wala aaayag aur uske baad 2 2 chodte huye this is  our answer
        
        int i = piles.size()-2;
        while(len--){
            ans+=piles[i];
            
            i--;
            i--;
        }
        
        
        return ans;
        
        
        
        
    }
};
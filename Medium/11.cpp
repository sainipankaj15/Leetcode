class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        
        
        int left = 0;
        int right = height.size()-1;
        
        while(left<right){
            ans = max(ans,(right-left)*min(height[left],height[right]));
            if(height[left]<height[right])
                left++; // yadi left side wali heighht chooti h tho pointer ko aage bada denge 
            else
                right--; // yadi right side wali height chooti h tho right wale ko piche hi side bade denge
        }
        
        
        return ans;
    }
};
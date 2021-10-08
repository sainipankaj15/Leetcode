class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int a = boxes.size();
        vector<int> b;
        int pushh=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(boxes[j]=='1')
                    pushh = pushh + abs(i-j);   
            }
            b.push_back(pushh);
            pushh = 0;
            
        }
        return b;
    }
};
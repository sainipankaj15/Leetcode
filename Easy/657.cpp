class Solution {
public:
    bool judgeCircle(string moves) {
        
        
        int x=0,y=0;
        for(auto it : moves){
            if(it=='U')
                y++;
            if(it=='D')
                y--;
            if(it=='L')
                x++;
            if(it=='R')
                x--;
        }
        
        if(x==0 && y==0)
            return 1;
        return 0;
    }
};
// https://leetcode.com/problems/my-calendar-iii/description/
// lighter version h uper wali problem ka
class MyCalendar{
public:
    map<int,int> m;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        int sum = 0;
        int ans1=0; // max_sum bol sakte ho ishe 

        for(auto it : m){
            sum+=it.second;
            ans1 = max(ans1,sum);
        }
       // ans1 stores before adding the event , max parel events

        m[start]++;
        m[end]--;
        sum = 0;
        int ans2=0; 

        for(auto it : m){
            sum+=it.second;
            ans2 = max(ans2,sum);
        }
        if(ans2>1){
            // it means we add wrong event we have to remove it 
            m[start]--;
            m[end]++;
            return false;
        }
       

       // yadi yaha tak h means kuch nahi hua h 
       return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
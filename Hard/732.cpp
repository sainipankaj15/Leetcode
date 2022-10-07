// https://youtu.be/8k2qVUv_a2M
// better explanation 
class MyCalendarThree {
public:
    map<int,int> m;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        // it means 1 event completly ho gaya yadi ishe wale circle par zero ho gaya th o

        int sum = 0;
        int ans=0; // max_sum bol sakte ho ishe 

        for(auto it : m){
            sum+=it.second;
            ans = max(ans,sum);
        }

        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
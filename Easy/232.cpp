class MyQueue {
public:
    stack<int> primary;
    stack<int> secondary;
    MyQueue() {
        
    }
    
    void push(int x) {
        primary.push(x);
    }
    
    int pop() {
        if(secondary.size()==0){
            if(primary.size()){
                while(!primary.empty()){
                    secondary.push(primary.top());
                    primary.pop();
                }
            }
        }
        
        if(secondary.size()){
            int x = secondary.top();
            secondary.pop();
            return x;
        }
        
        return -1;
        
    }
    
    int peek() {
        
        
              if(secondary.size()==0){
            if(primary.size()){
                while(!primary.empty()){
                    secondary.push(primary.top());
                    primary.pop();
                }
            }
        }
        
        if(secondary.size()){
            int x = secondary.top();
            // secondary.pop();
            return x;
        }
        
        return -1;
        
        
        
    }
    
    bool empty() {
        if(primary.size()==0 && secondary.size()==0)
            return 1;
        
        return 0;
    }
};


// jab pop karne ki baari aati h tho ek stack se dusre stack mai saare elements le lete h 
// primary to secondary le liya jaata h 
// after that secondary stack ka top most element queue ka first element hota h 
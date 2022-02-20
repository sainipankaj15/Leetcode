bool checknumber(int i){
    
    int realnumber = i;
   
    int lastnumber ;
    while(i>0){
        lastnumber = i%10;
        if(lastnumber==0)
            return 0;
        if(realnumber%lastnumber==0){
            i = i/10;
        }
        else{
            return 0;
        }
    }
    
    
    return 1;
    
}

vector<int> storeall(int aa,int bb){
    
    vector<int> ans;
    
    int a[100001]={0};
    
    for(int i=1;i<100001;i++){
        a[i] = checknumber(i);
    }
    
    for(int i=aa;i<=bb;i++){
        if(a[i]==1){
            ans.push_back(i);
        }
    }
    
    
    
    return ans;
}


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans;
        
        ans = storeall(left,right);
        
        return ans;
        
        
        
        
        
        
    }
};

// above solution is also better but i was tryng to save all number in a just way 
// but when i dont save and just find left to right 
// it passed the test case in 0MS which is shocking 
// Below code is more powerful and efficient



bool checknumber(int i){
    
    int realnumber = i;
   
    int lastnumber ;
    while(i>0){
        lastnumber = i%10;
        if(lastnumber==0)
            return 0;
        if(realnumber%lastnumber==0){
            i = i/10;
        }
        else{
            return 0;
        }
    }
    
    
    return 1;
    
}

vector<int> storeall(int &aa,int &bb){
    
    vector<int> ans;
    
    int a[100001]={0};
    
    // for(int i=1;i<100001;i++){
    //     a[i] = checknumber(i);
    // }
    
    for(int i=aa;i<=bb;i++){
        if(checknumber(i)==1){
            ans.push_back(i);
        }
    }
    
    
    
    return ans;
}


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans;
        
        ans = storeall(left,right);
        
        return ans;
        
        
        
        
        
        
    }
};
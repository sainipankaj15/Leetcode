

  bool pankaj(vector<int> a, vector<int> b){
            if(a[1]<b[1])
                return true;
            else
                return false;
        }



class Solution {
public:
    
    
    
//       bool functionpankaj(vector<int> a, vector<int> b){
//             return a[1]<b[1];
//         }
    
    
     
        
        
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
     
        
        
        
        sort(trips.begin(),trips.end(),pankaj);
//            for(int i=0; i<trips.size();i++){
//                for(int j=0;j<3;j++)
//                    cout<<trips[i][j]<<" ";
//                cout<<endl;
//            }
        
        
        // int sum=0;
        // sum+=trips[0][0];
        int myarray[1001]={0};
        for(int i=0; i<trips.size();i++){
          
            
            myarray[trips[i][1]]+=trips[i][0];
                        
     myarray[trips[i][2]]-=trips[i][0];
                        
            
        }
        int sum=0;
        
        for(int i=0;i<1001;i++){
            sum+=myarray[i];
            
            if(sum>capacity)
            {
                return false;
            }
        }
        return true;
        
    }
};

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int addeverytime=0;
        int remainder=0;
        for(int i=num.size()-1;i>=0;i--){
            addeverytime = k%10;
            num[i] = num[i]+addeverytime;
            k = k/10;
//             if(num[i]<10){
//                 remainder = 0;
//             }
//             else{
//                 num[i] = num[i]-10;
//                 remainder = 1;
//             }
            
//             if(k==0)
//             {

//  if(remainder!=0 && i!=0){
//      num[i-1] = num[i-1]+1
//          if(num[i-1])
//  }            
//             }
            if(k==0)
                break;
            
        }
        if(k!=0){
            while(k>0){
                 num.insert(num.begin(),k%10);
                k = k/10;
            }
        }
        
          for(int i=num.size()-1;i>=0;i--){
              if(num[i]<10){
                  
                  
                   num[i] = num[i]+remainder;
                  remainder = 0;
                
                  
              }
              if(num[i]>9){
                  num[i] = num[i]+remainder;
                   num[i] = num[i] - 10;
                  remainder = 1;
                  
              }
          }
        if(remainder!=0)
            num.insert(num.begin(),1);
        return num;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<int> v(num.size());
        
//         // int digitINk = floor(log10(k)+1);
//         int j=0;
//         while(k>0){
//             v[j] = k%10;
//             // v.push_back(k%10);
//             k = k/10;
//             j++;
//         }
//         // for(int i=digitINk;i<num.size();i++){
//         //     v.push_back(0);
//         // }
//         reverse(num.begin(),num.end());
//         vector<int> result;
        
//         int remainder=0;
//           int push=0;
//         for(int i=0;i<num.size();i++){
          
//             push = v[i]+num[i]+remainder;
//             if(push<10){
//                 {
//                      result.push_back(push);
//                     remainder = 0;
//                 }
                
//             }
//             else{
//                 result.push_back(push%10);
                
//                 push = push/10;
//                 remainder = push;
//             }
//         }
//         if(remainder!=0)
//             result.push_back(remainder);
        
//         reverse(result.begin(),result.end());
//        return result; 
    }
};
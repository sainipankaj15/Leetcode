class Solution {
public:
    int countValidWords(string sentence) {
        
        while(sentence[0]==' '){
             sentence.erase(sentence.begin());
        }
     
        for(int i=0;i<sentence.size()-1;++i){
            if(sentence[i]==sentence[i+1] && sentence[i]==' ')
            {
                sentence.erase(sentence.begin()+i);
                i--;
            }
        }
        
        if(sentence[sentence.size()-1]==' ')
            sentence.erase(sentence.end()-1);
        
        // cout<<sentence<<endl;
        vector<string> allstr;
        
        string push="";
        
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                allstr.push_back(push);
                push = "";
            }
            else
                push+=sentence[i];
        }
        
          allstr.push_back(push);
        
        
//         for(int i=0;i<allstr.size();i++)
//             cout<<allstr[i]<<endl;
        
        
        int ans=0;
        
           for(int i=0;i<allstr.size();i++){
               for(int j=0;j<allstr[i].size();j++){
                   if(allstr[i][j]>47 && allstr[i][j]<58)
                   {
                       allstr.erase(allstr.begin()+i);
                       i--;
                       break;
                   }
               }
           }
        
        
               for(int i=0;i<allstr.size();i++){
               for(int j=0;j<(allstr[i].size()-1);j++){
                   if(allstr[i][j]=='!' || allstr[i][j]==',' || allstr[i][j]=='.')
                   {
                       allstr.erase(allstr.begin()+i);
                       i--;
                       break;
                   }
               }
           }
        
        int numberofhypehn=0;
        
        
        
        
           
//         for(int i=0;i<allstr.size();i++){
//             cout<<allstr[i]<<" ";
//         }
//         cout<<endl;
        
        
        
        
              for(int i=0;i<allstr.size();i++){
                  
                  if(allstr[i][0]=='-' || allstr[i][allstr[i].size()-1]=='-')
                  {
                        allstr.erase(allstr.begin()+i);
                       i--;
                  }
                  
           }
        
        
        
        
        
           
//         for(int i=0;i<allstr.size();i++){
//             cout<<allstr[i]<<" ";
//         }
//         cout<<endl;
        
        
        
        
        
        
        
             for(int i=0;i<allstr.size();i++){
               for(int j=1;j<(allstr[i].size()-1);j++){
                   if(allstr[i][j]=='-'){
                       numberofhypehn++;
                       if(allstr[i][j-1]>96 && allstr[i][j-1]<123 &&  allstr[i][j+1]>96 && allstr[i][j+1]<123)
                       {
                           
                       }
                       else
                       {
                           // cout<<"Me bhoot hu"<<endl;
                           numberofhypehn = 2;
                       }
                   }
                   
                   
                   
                   if(numberofhypehn==2)
                   {
                       // cout<<"Me bhoot bada hu hu"<<endl;
                       
                       allstr.erase(allstr.begin()+i);
                       i--;
                       break;
                   }
                   
                   
               }
                 numberofhypehn = 0;
           }
        
        
        
        // for(int i=0;i<allstr.size();i++){
        //     cout<<allstr[i]<<" ";
        // }
        // cout<<endl;
        
        
        
        ans = allstr.size();
        
        
        
        return ans;
    }
};
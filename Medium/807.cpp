class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sizee = grid.size();
        vector<vector<int>> newrow(sizee);
        vector<vector<int>> newcolumn(sizee);
        
        int maxx=0;
        for(int i=0;i<sizee;i++){
            maxx = grid[i][0];
            for(int j=0;j<sizee;j++){
                if(grid[i][j]>maxx)
                {
                    maxx  = grid[i][j];
                }
                
            }
            int fill = sizee;
            while(fill--){
                newrow[i].push_back(maxx);
            }
        }
        
        //debuggin
        
//            for(int i=0;i<sizee;i++)
//         {
//             for(int j=0;j<sizee;j++){
//                cout<<newrow[i][j]<<" ";
//             }
//              cout<<endl;
//         }
        
//         cout<<endl<<endl;
        
        int maxcolumn=0;
        
          for(int j=0;j<sizee;j++){
            maxcolumn = grid[0][j];
            for(int i=0;i<sizee;i++){
                if(grid[i][j]>maxcolumn)
                {
                    maxcolumn  = grid[i][j];
                }
                
            }
            // int fill = sizee;
            // while(fill--){
            //     newcolumn.push_back(max);
            // }
              
              for(int k=0;k<sizee;k++)
              {
                  newcolumn[k].push_back(maxcolumn);
              }
        }
        
        
        // debuggin
        
//           for(int i=0;i<sizee;i++)
//         {
//             for(int j=0;j<sizee;j++){
//                cout<<newcolumn[i][j]<<" ";
//             }
//              cout<<endl;
//         }
        
        
        vector<vector<int>> rowANDcolumnbothmax(sizee,vector<int>(sizee,0));
        
        for(int i=0;i<sizee;i++)
        {
            for(int j=0;j<sizee;j++){
                
//                 if(newcolumn[i][j]>newrow[i][j])
//                 rowANDcolumnbothmax[i][j] = newcolumn[i][j];
//                 else
//                      rowANDcolumnbothmax[i][j] = newrow[i][j];
                
                rowANDcolumnbothmax[i][j] = min(newcolumn[i][j],newrow[i][j]);
            }
        }
        
        
          //debugger
        
//         cout<<endl<<endl;
//          for(int i=0;i<sizee;i++)
//         {
//             for(int j=0;j<sizee;j++){
//                cout<<rowANDcolumnbothmax[i][j]<<" ";
//             }
//              cout<<endl;
//         }
        
          
        int ans=0;
        
        
        
        
        
        
        
        
        
        
        // int maxelementinrow = *max_element(grid[i].begin(),grid[i].end());
        // int maxelementincolumn = *max_element(grid[0][j].begin(),grid[sizee-1][j].end()); 
        
//         for(int i=0;i<sizee;i++){
//             for(int j=0;j<sizee;j++){
                
//                 int push=0;
                
//                 push =  min(*max_element(grid[i].begin(),grid[i].end()),*max_element(grid[0][j],grid[sizee-1][j]));
//                 newgrid.push_back(push);
//             }
//         }
      
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 ans+=abs(grid[i][j]-newgrid[i][j]);
//             }
//         }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
         for(int i=0;i<sizee;i++)
        {
            for(int j=0;j<sizee;j++){
               ans+=(rowANDcolumnbothmax[i][j]-grid[i][j]);
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
       return ans; 
    }
};
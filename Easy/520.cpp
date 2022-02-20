class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int captailletter=0,smallletter=0;
        int firstcap=0;
        for(int i=0;i<word.size();i++){
           
            if(word[i]>='a' && word[i]<='z')
                smallletter++;
             if(word[i]>='A' && word[i]<='Z')
                captailletter++;
        }
         if(word[0]>='A' && word[0]<='Z')
                firstcap++;
        if(captailletter==word.size() || smallletter==word.size() ||  (firstcap==1 && smallletter==word.size()-1))
        {
            
            cout<<firstcap<<endl<<smallletter<<endl;
            cout<<word.size();
            return 1;
        }
         cout<<firstcap<<endl<<smallletter<<endl;
            cout<<word.size();
        return 0;
        
        
        
        
        
    }
};
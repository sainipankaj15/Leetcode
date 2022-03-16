// submited soltion
class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {

        unordered_map<int, int> p;

        for (int i = 0; i < deck.size(); i++)
        {
            p[deck[i]]++;
        }
           int ans=0;
        for(auto it : p){
            ans = __gcd(it.second,ans);
        }
        
        
        if(ans>=2)
        return 1;
        
        return 0; //else 
    }
};















// below code is not right code means it failed but i m pasting it force to you think
// okay you tell why below approch is failedd 
// i willl tell you reason in last line
class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {

        unordered_map<int, int> p;

        for (int i = 0; i < deck.size(); i++)
        {
            p[deck[i]]++;
        }

        int minx = p[deck[0]]; // just assuming

        for (auto it : p)
        {
            if (it.second < minx)
            {
                minx = it.second;
            }
        }

        // minx mai wo sabse chooota wala group jo aane wala h (aur wo max limit bhi h means ek group ka size uske uper nahi ja sakta h )
        if (minx < 2)
            return 0;

        // below commented failed ho gyaa h isme kya dikkat thi ki maine minimum size wale ko hi maan liya hi yeh bangaa
        // jabki minimum size 2 se lekar minx tak kuch bhi ho sakta bas wo reminder na de tahb tak

        // for(auto it:p){
        //     if(it.second%minx!=0){
        //         // iska mean yeh h ki yadi koi isha group jiske pass minx k multipe jitna elements nahi h tho reject kar dege
        //         // for example minx = 2;
        //         // tho wo sabhi group jinme elements ki number 2 ya 4 ya 6 h and so on wo sab aa jaayge
        //         // kykoi hum 2 2 ka group bana sakte h
        //         return 0;
        //     }
        // }

        for (int i = 2; i <= minx; i++)
        {
            for (auto it : p)
            {
                if (it.second % i != 0)
                {
                    return 0;
                }
            }
        }

        // if all passed then it is true
        return 1;
    }
};






/// it failed bcoz let suppose your minx comes = 4 and your loop chalga 2 to 4 
// jisme 3 bhi aa aayaga lkein we dont need 3 
/// that;s why this failed
// like array[] = {1,1,1,1,2,2,2,2,2,2}
//    hum 2 2 k group bana sakte h 
// we dont need 3 that's why this faild
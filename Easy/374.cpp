/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        


        while(1){
            int a = guess(n);
            if(a==-1)
            n--;
            else
            break;
        }

        return n;
    }
};
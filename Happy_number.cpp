class Solution {
public:
    bool isHappy(int n) {
        map<int,int> mp;
        mp[n]++;
        int p = 0;
        if(n==1){
            return true;
        }
        while(n!=0){
        while(n!=0){
            int a = n%10;
            p = p+ a*a;
            n = n/10;
        }
        if(n==0){
            
            
            if(p==1){
                return true;
            }
            else{
                n = p;
                p=0;
            }
            if(mp.find(n)==mp.end()){
                mp[n]++;
            }
            else{
                return false;
            }
        }
        }
        return false;
    }
};

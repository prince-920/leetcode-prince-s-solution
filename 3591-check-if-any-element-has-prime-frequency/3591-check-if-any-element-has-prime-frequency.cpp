class Solution {
public:
bool isPrime( int n){
    if ( n<=1) return false;
    
    for(int i=2;i<n;i++){
        if ( n%i==0){
            return false;
        }
    }
            return true;

}

    bool checkPrimeFrequency(vector<int>& nums) {
        int n = nums.size();
        map<int,int>map;
        for (int i =0;i<n ;i++){
            map[nums[i]]++;
        }
bool flag=false;
        for ( auto it: map){
            if ( isPrime(it.second)==true){
                return true;
            }
        }
return false;
        
    }
};
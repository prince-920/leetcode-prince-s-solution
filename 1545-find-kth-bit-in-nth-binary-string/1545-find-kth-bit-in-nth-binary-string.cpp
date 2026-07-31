class Solution {
public:

char solve ( int n, int k){
// base case
if ( n ==1 && k==1){ return '0';}


int len = pow( 2,n)-1;
int mid = pow(2,n-1);

if ( k<mid) return solve( n-1,k);
if ( k==mid) return '1';

else {

    char ans=  solve( n-1,len-k+1);
if ( ans=='0') return '1';
else{
    return '0';
}

}
}



    char findKthBit(int n, int k) {
        return solve( n,k);
    }
};
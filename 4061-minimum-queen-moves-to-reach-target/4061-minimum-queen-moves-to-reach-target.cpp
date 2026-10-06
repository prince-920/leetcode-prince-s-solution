class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int srX =source[0];//4
        int srY =source[1];//2
        int trX =target[0];//1
        int trY =target[1];// 3

if ( srX==trX&&srY==trY) return 0;

// checking for all elements in a diagonal 
else if(abs(srX-trX)==abs(srY-trY) ) return 1;

        else if ( ( srX==trX )||(srY==trY )||(srY==trX&& srX==trY )){
            return 1;

        }
       return 2;





        
    }
};
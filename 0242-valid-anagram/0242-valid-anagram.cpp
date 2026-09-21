class Solution {
public:
    bool isAnagram(string s, string t) {

        int m= s.size();
        int n = t.size();
if(m!=n) return false;

// int count1=0;
// for( int i =0 ;i<n;i++){
//     count1 =count1+(int)s[i];
// }

// int count2=0;
// for( int i =0 ;i<m;i++){
//     count2=count2+(int)t[i];
// }




// if( count1==count2) {// m==n

//     for ( int i =0 ; i<n;i++){
//         for( int j =0;j<n;j++){
//             if ( )
//         }

//     }



// }

// else{
//     return false;
// }


map<int, int >map1;
map<int, int>map2;

for( int i =0;i<n;i++){
    map1[s[i]+0]++;
}

for( int i =0;i<m;i++){
    map2[t[i]+0]++;
}

if ( map1==map2) return true;
       return false; 
    }
};
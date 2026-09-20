class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<int,int>map;
map['a']=26;
map['b']=25;
map['c']=24;
map['d']=23;
map['e']=22;
map['f']=21;
map['g']=20;
map['h']=19;
map['i']=18;
map['j']=17;
map['k']=16;
map['l']=15;
map['m']=14;
map['n']=13;
map['o']=12;
map['p']=11;
map['q']=10;
map['r']=9;
map['s']=8;
map['t']=7;
map['u']=6;
map['v']=5;
map['w']=4;
map['x']=3;
map['y']=2;
map['z']=1;


vector<int>number;
for ( int i = 0 ; i<s.size();i++){
    for( auto it: map){
        if ( s[i]==it.first){
            number.push_back(it.second);
        }
    
}
}

int n = number.size();
int sum =0;
for ( int j =0 ; j<n;j++){
    sum =sum+(j+1)*number[j];
}
return sum;



        
    }
};
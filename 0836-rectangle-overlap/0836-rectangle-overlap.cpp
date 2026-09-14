class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=rec1[0];
        int y1= rec1[1];
        int x2=rec1[2];
        int y2=rec1[3];


        int m1=rec2[0];
        int n1=rec2[1];
        int m2=rec2[2];
        int n2=rec2[3];

   if (m1 >= x2 || n1 >= y2 || m2 <= x1 || n2 <= y1) {
            return false;
        }

        return true;
    }
};
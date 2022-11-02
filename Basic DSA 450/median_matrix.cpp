class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here          
        vector<int> v;
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
            v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[(R*C)/2];
    }
};


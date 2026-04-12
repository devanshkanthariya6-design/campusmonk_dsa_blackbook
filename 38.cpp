// rotate matrix by 90 anticlockwise or 270 clockwise - TRANSPOSE + COLUMN REVERSE
/*void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size() ;
        //transpose 
        for ( int i = 0 ; i < n-1 ; i++ ){
            for(int j=i+1;j<n;j++ ){
                swap(mat[i][j],mat[j][i]);
            }
        }
        //reverse columns
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(mat[j][i],mat[(n-j)-1][i]);
            }
        }
    }*/
// 90 clockwise  - TRANSPOSE + ROW REVERSE   
// 180 clockwise  - ROW REVERSE + col reverse  
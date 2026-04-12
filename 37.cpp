//PASCAL'S TRIANGLE - EVERY ELEMENT IS SUM OF TWO ELEMENTS JUST ABOVE IT
/*vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal(numRows);
        pascal[0].push_back(1);
        for(int i=1;i<numRows;i++){
            pascal[i].push_back(1);
            for(int j=1;j<i;j++){
                int element=pascal[i-1][j]+pascal[i-1][j-1];
                pascal[i].push_back(element);
            }
            pascal[i].push_back(1);
        }
        return pascal;
    }*/

/*int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int>>v(r);
    v[0]={1};
    for(int i=1;i<r;i++){
        for(int j=0;j<=i;j++){
            if (j==0 || j==i) v[i].push_back(1);
            else v[i].push_back(v[i-1][j]+v[i-1][j-1]);
        }
    }
    cout<<v[r-1][c-1];
}*/
/*
1 
1 1 
1 2 1 
1 3 3 1
*/
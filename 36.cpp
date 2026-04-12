//SPIRALLY TRAVERSING A MATRIX
/*vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        vector<int>spiral;
        int rowstart=0;
        int colstart=0;
        int rowend=mat.size()-1;
        int colend=mat[0].size()-1;
        int cnt=mat.size()*mat[0].size();//very important for stopping when all elements are printed
        while(cnt>0){
            for(int i=colstart;i<=colend && cnt>0;i++){
                spiral.push_back(mat[rowstart][i]);
                cnt--;
            }
            rowstart++;
            for(int i=rowstart;i<=rowend && cnt>0;i++){
                spiral.push_back(mat[i][colend]);
                cnt--;
            }
            colend--;
            for(int i=colend;i>=colstart && cnt>0;i--){////////// segmentation error i<=colstart since i--
                spiral.push_back(mat[rowend][i]);
                cnt--;
            }
            rowend--;
            for(int i=rowend;i>=rowstart && cnt>0;i--){/////////  segmentation error  i<=rowstart since i--
                spiral.push_back(mat[i][colstart]);
                cnt--;
            }
            colstart++;
        }
        return spiral;
    }*/

    /*  int rs=0;
    int re=n-1;
    int cs=0;
    int ce=n-1;
    while(rs<re && cs<ce){
        for(int i=cs;i<=ce;i++){
            cout<<v[rs][i]<<" "; 
        }
        rs+=1;
        for(int i=rs;i<=re;i++){
            cout<<v[i][ce]<<" "; 
        }
        ce-=1;
        for(int i=ce;i>=cs;i--){
            cout<<v[re][i]<<" "; 
        }
        re-=1;
        for(int i=re;i>=rs;i--){
            cout<<v[i][cs]<<" "; 
        }
        cs+=1;
    }*/
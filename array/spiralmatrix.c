//leetcode 54


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m=matrix.size();
        int n=matrix[0].size();
        int colbeg=0;
        int colend=n-1;
        int rowbeg=0;
        int rowend=m-1;
        while(rowbeg<=rowend && colbeg<=colend)
        {
            for(int j=colbeg;j<=colend;j++)
            {
                result.push_back(matrix[rowbeg][j]);

            }
            rowbeg++;
            for(int j=rowbeg;j<=rowend;j++)
            {
                result.push_back(matrix[j][colend]);

            }
            colend--;
            
            if(rowbeg<=rowend)
            for(int j=colend;j>=colbeg;j--)
            {
                result.push_back(matrix[rowend][j]);

            }
            rowend--;
           if(colbeg<=colend)
           for(int j=rowend;j>=rowbeg;j--)
            {
                result.push_back(matrix[j][colbeg]);

            }
            colbeg++;


  

        }
      

        return result;
    }
};



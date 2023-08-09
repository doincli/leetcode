#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            if(matrix[i][0] > target || matrix[i][n-1] < target){
                continue;
            }
            int left = 0,right = n-1;
            while (left <= right)
            {
               int mid = (right - left) /2 + left;
               if(matrix[i][mid] == target){
                     return true;
               }else if (matrix[i][mid] < target)
               {
                    left = mid +1;
               }else {
                    right = mid - 1;
               }
            }    
        }
        return false;
    }
};

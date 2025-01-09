/*

https://leetcode.com/problems/island-perimeter/

*/



class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int height = grid.size();
        int column = grid[0].size();
        int perimeter = 0;
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < column; j++)
            {
                if(grid[i][j] == 1)
                {
                perimeter +=4;
                if(i > 0 && grid[i-1][j] == 1)
                perimeter--;
                if((j <  column - 1) && grid[i][j+1] == 1)
                perimeter--;
                if((j > 0) && grid[i][j-1] == 1)
                perimeter--;
                if((i < height-1) && grid[i+1][j] == 1)
                perimeter--;
                }
            }
        }
        return perimeter;
    }
};
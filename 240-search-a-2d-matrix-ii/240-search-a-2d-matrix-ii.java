class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        //time complexity:0(nlogn)
        int m=matrix.length;
        int n=matrix[0].length;
        int row=0;
        int col=matrix[0].length-1;
        while(row<m && col >= 0){
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] > target ){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
        
    }
}
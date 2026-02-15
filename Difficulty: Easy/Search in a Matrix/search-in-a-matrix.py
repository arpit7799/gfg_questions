class Solution:
    
    def searchMatrix(self, matrix, x):
        for row in matrix:
            for value in row:
                if value == x:
                    return True
        
        return False
#User function Template for python3
class Solution:
    def countFactors (self, N):
        # code here
        count = 0 
        for i in range(1, N+1):
            if N % i == 0:
                count += 1 
        return count
            

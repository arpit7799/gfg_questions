class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        // Base cases
        if (n <= 1) return 0;            // Already at the end
        if (arr[0] == 0) return -1;      // Can't move anywhere

        int maxReach = arr[0];  // Farthest index reachable right now
        int steps = arr[0];     // Steps we can still take
        int jumps = 1;          // We start with one jump from the first element

        for (int i = 1; i < n; i++) {
            // If we've reached the last index
            if (i == n - 1) return jumps;

            // Update the farthest reachable index
            maxReach = max(maxReach, i + arr[i]);

            // Use one step to move to the next index
            steps--;

            // If no steps are left
            if (steps == 0) {
                jumps++; // Must make another jump
                
                // If we can't move further, return -1
                if (i >= maxReach) return -1;
                
                // Reset the steps for the next jump
                steps = maxReach - i;
            }
        }

        return -1; // If we never reached the end
    }
};
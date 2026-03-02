#include <vector>
using namespace std;

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> trailingZero(n);

        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = n - 1; j >= 0; j--) {
                if(grid[i][j] == 0) count++;
                else break;
            }
            trailingZero[i] = count;
        }

        int swaps = 0;

        for(int i = 0; i < n; i++) {
            int needed = n - i - 1;
            int j = i;

            while(j < n && trailingZero[j] < needed)
                j++;

            if(j == n) return -1;

            while(j > i) {
                swap(trailingZero[j], trailingZero[j-1]);
                swaps++;
                j--;
            }
        }
        return swaps;
    }
};

import java.util.Arrays;

class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
}

public class Main {
    public static void main(String[] args) {
        Solution solver = new Solution();

        int[] nums1 = {3, 2, 2, 3};
        int val1 = 3;
        System.out.println("--- Example 1 ---");
        System.out.println("Original array: " + Arrays.toString(nums1));
        
        int k1 = solver.removeElement(nums1, val1);
        
        System.out.println("Returned k: " + k1);
        System.out.print("Modified array (first k elements): [");
        for (int i = 0; i < k1; i++) {
            System.out.print(nums1[i] + (i < k1 - 1 ? ", " : ""));
        }
        System.out.println("]");
        System.out.println();

        int[] nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
        int val2 = 2;
        System.out.println("--- Example 2 ---");
        System.out.println("Original array: " + Arrays.toString(nums2));
        
        int k2 = solver.removeElement(nums2, val2);
        
        System.out.println("Returned k: " + k2);
        System.out.print("Modified array (first k elements): [");
        for (int i = 0; i < k2; i++) {
            System.out.print(nums2[i] + (i < k2 - 1 ? ", " : ""));
        }
        System.out.println("]");
    }
}

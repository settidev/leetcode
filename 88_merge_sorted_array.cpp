class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        if ( m+n > 1){
            for ( i,j; i<m+j && j<n; i++){
            // If nums2 has a smaller element at position i
            if (nums1[i] >= nums2[j]){
                // Move right all elements in nums1 after i by 1 position
                for(int k=m+j; k > i; k--){
                    nums1[k] = nums1[k-1];
                }
                nums1[i] = nums2[j];
                j++;
            }
            }
            // Copy remaining elements from nums2 as they are bigger
            for(i,j; i<m+n && j<n; i++,j++){
                nums1[i] = nums2[j];
            }
        }
        else {
            for(j=0; j<n; j++){
                nums1[j] = nums2[j];
            }
        }
    }
};

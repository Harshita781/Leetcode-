class Solution {
public:
    int max(int x, int y) {
    return (x > y) ? x : y;
    }
    int trap(vector<int>& height) {
      int n=height.size();
      int left = 0, right = n - 1, water = 0;
 
    int maxLeft = height[left];
    int maxRight = height[right];
 
    while (left < right)
    {
        if (height[left] <= height[right])
        {
            left++;
            maxLeft = max(maxLeft, height[left]);
            water += (maxLeft - height[left]);
        }
        else {
            right--;
            maxRight = max(maxRight, height[right]);
            water += (maxRight - height[right]);
        }
    }
 
    return water;  
    }
};
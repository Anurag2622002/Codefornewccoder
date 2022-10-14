/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    class Result
    {
        // Record how many nodes we visited in-order-wise so far; 
        // if the value is k then we know we've found the kth   
        // smallest and no need to do further recursion.
        public Integer leftCount;
        // null if not kth smallest; nonnull if we hit kth smallest
        public Integer value;
        
        public Result(Integer leftCount, Integer value)
        {
            this.leftCount = leftCount;
            this.value = value;
        }
    }
    public int kthSmallest(TreeNode root, int k) {
        // inorder DFS
        return helper(root,k).value;
    }
    
    private Result helper(TreeNode n, int k)
    {
        if (n==null)
        {
            return new Result(0,null);
        }
        
        Result left = helper(n.left, k);
        Result right = null;
        if (left.leftCount==k) // kth smallest node is in left tree
        {
            return left;
        }
        else if (left.leftCount+1==k) // current root is our answer
        {
            return new Result(k,n.val);
        }
        else if (left.leftCount+1<k)
        {
            right = helper(n.right,k-(left.leftCount+1));
            if (right.value != null) // kth smallest node is in right tree
            {
                return new Result(k,right.value);
            }
        }
        
        // kth smallest node is not in this subtree rooted at n
        return new Result(left.leftCount+1+right.leftCount, null);
    }
}

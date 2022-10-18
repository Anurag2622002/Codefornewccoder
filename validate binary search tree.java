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
   public boolean isValidBST(TreeNode root) {
    return helper(root, Double.NEGATIVE_INFINITY, Double.POSITIVE_INFINITY);
}
 
public boolean helper(TreeNode root, double min, double max){
    if(root==null){
        return true;
    }
 
    if(root.val<=min||root.val>=max){
        return false;
    }
 
    boolean isLeftBST = helper(root.left, min, root.val);
    boolean isRightBST = helper(root.right, root.val, max);
 
    if(!isLeftBST||!isRightBST){
        return false;
    }    
 
    return true;
}}

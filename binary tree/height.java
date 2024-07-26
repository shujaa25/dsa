class Solution {
	
	public class TreeNode{
		int val;
		TreeNode left;
		TreeNode right;
		TreeNode() {}
		TreeNode(int val) { this.val = val; }
		TreeNode(int val, TreeNode left, TreeNode right) {
			this.val = val;
			this.left = left;
			this.right = right;
	   }
	}
	
    public int maxDepth(TreeNode root) {
        if(root == null) return 0;
        if(root.left == null && root.right == null) return 1;

        int i, j;
        i=j=1;
        
        if(root.left != null)
            i+=maxDepth(root.left);
        
        if(root.right != null)
            j+=maxDepth(root.right);
        
        return Math.max(i, j);
    }
}
class Solution {

    private void postOrder(TreeNode node, List<Integer> res){
       if(node == null) return;
       postOrder(node.left, res);
       postOrder(node.right, res);
       res.add(node.val);
   }

   private void inOrder(TreeNode node, List<Integer> res){
        if(node == null) return;
        inOrder(node.left, res);
        res.add(node.val);
        inOrder(node.right, res);
    }

    private void preOrder(TreeNode node, List<Integer> res){
        if(node == null) return;
        res.add(node.val);
        preOrder(node.left, res);
        preOrder(node.right, res);
    }

}
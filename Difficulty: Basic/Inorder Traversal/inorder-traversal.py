
class Solution:
    def inOrder(self, root):
        result = []

        def inorder(node):
            if node is None:
                return

            inorder(node.left)
            result.append(node.data)
            inorder(node.right)

        inorder(root)
        return result

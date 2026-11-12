
class Solution:
    def preOrder(self, root):
        result = []

        def preorder(node):
            if node is None:
                return

            result.append(node.data)
            preorder(node.left)
            preorder(node.right)

        preorder(root)
        return result

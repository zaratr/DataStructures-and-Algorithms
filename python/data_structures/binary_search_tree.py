from data_structures.binary_tree import BinaryTree, Node


class BinarySearchTree(BinaryTree):
    """
    Binary Search Tree is a special type of binary tree where each node has a value, and the value of each node is greater than the values of all nodes in its left subtree and less than the values of all nodes in its right subtree.
    """

    def __init__(self):
        super().__init__()
        self.root = None


            

    def add(self, value):
        """
        Adds a new node with the given value to the correct location in the tree.
        """
        if self.root is None:
            self.root = Node(value)
            return

        current = self.root
        while True:
            if value < current.value:
                if current.left is None:
                    current.left = Node(value)
                    return
                current = current.left
            else:
                if current.right is None:
                    current.right = Node(value)
                    return
                current = current.right

    def contains(self, value):
        """
        Returns True if the tree contains a node with the given value, and False otherwise.
        """
        current = self.root
        while current is not None:
            if value == current.value:
                return True
            elif value < current.value:
                current = current.left
            else:
                current = current.right
        return False
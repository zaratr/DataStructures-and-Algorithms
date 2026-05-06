from data_structures.queue import Queue

class BinaryTree:
    """
    Binary Tree implementation with pre-order, in-order, and post-order traversal methods.
    pre_order: Visit the root node, then left subtree, then right subtree.
    in_order: Visit the left subtree, then root node, then right subtree.
    post_order: Visit the left subtree, then right subtree, then root node.
    level_order: Visit nodes level by level from left to right.
    """

    def __init__(self):
        self.root = Node(None)

    def pre_order(self, appendFunc_node_list):        
        """
        Pre-order traversal of the binary tree.
        Summary: pre-order traversal method returns a list of values in pre-order traversal order.
        Args:
            node_list (list): A list to store the values of the nodes in pre-order traversal.
        Raises:
            Exception: If the binary tree is empty.
        """
        if not self.root:
            raise Exception("Binary Tree is empty")

        self._pre_order(self.root, appendFunc_node_list)
        return appendFunc_node_list

    def _pre_order(self, node, appendFunc_node_list):
        if node:
            appendFunc_node_list(node.value)
            self._pre_order(node.left, appendFunc_node_list)
            self._pre_order(node.right, appendFunc_node_list)

    def in_order(self, appendFunc_node_list):
        """
        In-order traversal of the binary tree.
        Summary: in-order traversal method returns a list of values in in-order traversal order.
        Args:
            node_list (list): A list to store the values of the nodes in in-order
            traversal.
        Raises:
            Exception: If the binary tree is empty.
        """
        if not self.root:
            raise Exception("Binary Tree is empty")

        self._in_order(self.root, appendFunc_node_list)
        return appendFunc_node_list

    def _in_order(self, node, appendFunc_node_list):
        if node:
            self._in_order(node.left, appendFunc_node_list)
            appendFunc_node_list(node.value)
            self._in_order(node.right, appendFunc_node_list)

    def post_order(self, appendFunc_node_list):
        """
        Post-order traversal of the binary tree.
        Summary: post-order traversal method returns a list of values in post-order
        traversal order.
        Args:
            node_list (list): A list to store the values of the nodes in post-order
            traversal.
        Raises:
            Exception: If the binary tree is empty.
        """
        if not self.root:
            raise Exception("Binary Tree is empty")

        self._post_order(self.root, appendFunc_node_list)
        return appendFunc_node_list
    
    def _post_order(self, node, appendFunc_node_list):
        if node:
            self._post_order(node.left, appendFunc_node_list)
            self._post_order(node.right, appendFunc_node_list)
            appendFunc_node_list(node.value)

    

    def add(self, value):
        """
        Adds a new node with the given value to the tree in the first available position in level order.
        Args:            value: The value to be added to the tree.
        Raises:            Exception: If the value is None.
        """
        node = Node(value)
        if self.root is None:
            self.root = node
            return
        q = Queue()
        q.enqueue(self.root)
        while not q.is_empty():
            current = q.dequeue()
            if current.left is None:
                current.left = node
                return
            else:
                q.enqueue(current.left)

            if current.right is None:
                current.right = node
                return
            
            else:
                q.enqueue(current.right)





class Node:

    def __init__(self, value = None, left = None, right = None):
        self.value = value
        self.left = left
        self.right = right

    
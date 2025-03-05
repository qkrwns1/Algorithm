import sys


class TreeNode:
    def __init__(self, value):
        self.value = value
        self.count = 1
        self.left = None
        self.right = None
        
class BinarySearchTree:
    def __init__(self):
        self.root = None
        self.total_count = 0
        
    def insert(self, value):
        if self.root is None:
            self.root = TreeNode(value)
        else:
            self.insert_recursive(self.root,value)   
        self.total_count += 1 
        
    def insert_recursive(self, node, value):
        if value < node.value:
            if node.left is None:
                node.left = TreeNode(value)
            else:
                self.insert_recursive(node.left, value)
        elif value > node.value:
            if node.right is None:
                node.right = TreeNode(value)
            else:
                self.insert_recursive(node.right, value)
        else:
            node.count += 1
            
    def inorder_traversal(self, node, result):
        if node:
            self.inorder_traversal(node.left,result)
            per = (node.count / self.total_count) * 100
            result.append(f"{node.value} {per:.4f}")
            self.inorder_traversal(node.right, result)
        

def main():
    #print("test")
    tree_map = BinarySearchTree()
    try:
        for line in sys.stdin:
            line = line.strip()
            if line:  
                tree_map.insert(line)
    except KeyboardInterrupt:
        pass
            
    result = []
    tree_map.inorder_traversal(tree_map.root, result)
    print("\n".join(result))


if __name__ == "__main__":
    main()

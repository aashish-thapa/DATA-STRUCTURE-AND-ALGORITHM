from typing import Optional

class Node:
    def __init__(self, val = 0, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: Optional(Node), q: Optional(Node)) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
    

if __name__ == "__main__":
    # Example usage
    p = Node(1, Node(2), Node(3))
    q = Node(1, Node(2), Node(3))
    solution = Solution()
    print(solution.isSameTree(p, q))  # Output: True

    r = Node(1, Node(2), None)
    print(solution.isSameTree(p, r))  # Output: False
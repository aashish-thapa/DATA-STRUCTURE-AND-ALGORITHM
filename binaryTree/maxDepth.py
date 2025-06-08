from typing import List, Optional
class Node:
    def __init__(self, value: int):
        self.value = value
        self.left: Optional['Node'] = None
        self.right: Optional['Node'] = None


class Solution:
    def maxDepth(self, root: Optional(Node)) -> int:
        if not root:
            return 0
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)
        return max(left_depth, right_depth) + 1
    

if __name__ == "__main__": 
    # Example usage
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    solution = Solution()
    print(solution.maxDepth(root))  # Output: 3

    root.right.right = Node(6)
    print(solution.maxDepth(root))  # Output: 3
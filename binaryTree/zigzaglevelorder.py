from typing import List, Optional
class Node:
    def __init__(self, value: int):
        self.value = value
        self.left: Optional['Node'] = None
        self.right: Optional['Node'] = None

class Solution:
    def zigzagLevelOrder(self, root: Optional(Node)) -> List[List[int]]:


        if not root:
            return []
        
        res  = []
        s1 = [root]
        s2 = []

        while s1 or s1:
            level = []
            while s1:
                curr = s1.pop()
                level.append(curr.value)
                if curr.left:
                    s2.append(curr.left)
                if curr.right:
                    s2.append(curr.right)

            if level:
                res.append(level)

            level = []
            while s2:
                curr = s2.pop();
                level.append(curr.value)
                if curr.right:
                    s1.append(curr.right)
                if curr.left:
                    s1.append(curr.left)
            if level:
                res.append(level)
        return res
if __name__ == "__main__":
    # Example usage
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.right = Node(6)

    solution = Solution()
    print(solution.zigzagLevelOrder(root))  # Output: [[1], [3, 2], [4, 5, 6]]
    
    root.right.left = Node(7)
    print(solution.zigzagLevelOrder(root))  # Output: [[1], [3, 2], [7, 4, 5, 6]]
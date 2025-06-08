from typing import Optional

class Node:
    def __init__(self, value: int):
        self.value = value
        self.left: Optional['Node'] = None
        self.right: Optional['Node'] = None

class Solution:
    def levelOrder(self, root: Optional(Node)) -> list[list[int]]:

        def levelOrderRec(root: Optional(Node), level: int, res: list[list[int]]) -> None:
            if not root:
                return
            if level == len(res):
                res.append([])
            res[level].append(root.value)
            levelOrderRec(root.left, level + 1, res)
            levelOrderRec(root.right, level + 1, res)
        res = []
        levelOrderRec(root, 0, res)
        return res
    

if __name__ == "__main__":
    # Example usage
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    solution = Solution()
    print(solution.levelOrder(root))  # Output: [[1], [2, 3], [4, 5]]
    
    root.right.right = Node(6)
    print(solution.levelOrder(root))  # Output: [[1], [2, 3], [4, 5, 6]]
        
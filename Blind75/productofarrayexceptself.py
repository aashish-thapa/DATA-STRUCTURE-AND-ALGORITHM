def productExceptSelf(nums):
    n = len(nums)
    res = [1] * n

    # Left product
    for i in range(1, n):
        res[i] = res[i - 1] * nums[i - 1]
    
    # Right product
    right = 1
    for i in range(n - 1, -1, -1):
        res[i] *= right
        right *= nums[i]
    
    return res

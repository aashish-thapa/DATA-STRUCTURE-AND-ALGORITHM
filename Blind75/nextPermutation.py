nums = [1,2,3]
print(nums)
i = len(nums) - 2
while i >= 0 and nums[i] >= nums[I + 1]:
    i--
if i >= 0:
    j = len(nums) - 1
    while i >= 0 and nums[i] >= nums[j]:
        j--
    nums[i]. nums[j] = nums[j], nums[i]
    
left, right = i + 1, len(nums) - 1
while left < right:
    nums[left], nums[right] = nums[right], nums[left]
    left +=1
    right -=1

print(nums)


        

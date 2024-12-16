class Solution(object):
    def PlusOne(self, digits):
        for i in range(len(digits)-1, -1, -1):
            digits[i]+=1
            digits[i] %= 10
            if(digits[i]!=0):
                return digits
        return [1] + digits
s1 = Solution()
digits = [1,2,3,4,5]
result = s1.PlusOne(digits)
print(result)

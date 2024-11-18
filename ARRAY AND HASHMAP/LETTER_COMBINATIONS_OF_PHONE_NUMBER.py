'''Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []

Example 3:

Input: digits = "2"
Output: ["a","b","c"]

 

Constraints:

    0 <= digits.length <= 4
    digits[i] is a digit in the range ['2', '9'].
'''

class Solution(object):
    def letterCombinations(self, digits):
        digit_to_letter = {
            '2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl',
            '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'
        }
        
        result = []
        
        if not digits:
            return result
        
        def backtrack(index, current_combination):
            if index == len(digits):
                result.append(current_combination)
                return
            
            letters = digit_to_letter[digits[index]]
            for letter in letters:
                backtrack(index + 1, current_combination + letter)
        
        backtrack(0, "")
        return result


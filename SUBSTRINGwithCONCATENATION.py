'''
You are given a string s and an array of strings words. All the strings of words are of the same length.

A concatenated string is a string that exactly contains all the strings of any permutation of words concatenated.

    For example, if words = ["ab","cd","ef"], then "abcdef", "abefcd", "cdabef", "cdefab", "efabcd", and "efcdab" are all concatenated strings. "acdbef" is not a concatenated string because it is not the concatenation of any permutation of words.

Return an array of the starting indices of all the concatenated substrings in s. You can return the answer in any order.

 

Example 1:

Input: s = "barfoothefoobarman", words = ["foo","bar"]

Output: [0,9]

Explanation:

The substring starting at 0 is "barfoo". It is the concatenation of ["bar","foo"] which is a permutation of words.
The substring starting at 9 is "foobar". It is the concatenation of ["foo","bar"] which is a permutation of words.

Example 2:

Input: s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]

Output: []

Explanation:

There is no concatenated substring.

Example 3:

Input: s = "barfoofoobarthefoobarman", words = ["bar","foo","the"]

Output: [6,9,12]

Explanation:

The substring starting at 6 is "foobarthe". It is the concatenation of ["foo","bar","the"].
The substring starting at 9 is "barthefoo". It is the concatenation of ["bar","the","foo"].
The substring starting at 12 is "thefoobar". It is the concatenation of ["the","foo","bar"].

 

Constraints:

    1 <= s.length <= 104
    1 <= words.length <= 5000
    1 <= words[i].length <= 30
    s and words[i] consist of lowercase English letters.

'''

class Solution(object):
    def findSubstring(self, s, words):
        """
        :type s: str
        :type words: List[str]
        :rtype: List[int]
        """
        if not s or not words:
            return []
        
        word_length = len(words[0])
        num_words = len(words)
        total_length = word_length * num_words
        result = []

        if total_length > len(s):
            return result

        
        word_count = {}
        for word in words:
            word_count[word] = word_count.get(word, 0) + 1

        
        for i in range(word_length):
            start = i
            current_count = {}
            count = 0
            
            
            for j in range(i, len(s) - word_length + 1, word_length):
                word = s[j:j + word_length]
                
                if word in word_count:
                    current_count[word] = current_count.get(word, 0) + 1
                    count += 1

                  
                    while current_count[word] > word_count[word]:
                        left_word = s[start:start + word_length]
                        current_count[left_word] -= 1
                        count -= 1
                        start += word_length

                   
                    if count == num_words:
                        result.append(start)
                else:
                   
                    current_count.clear()
                    count = 0
                    start = j + word_length

        return result

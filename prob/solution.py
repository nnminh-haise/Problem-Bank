class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        count = 0
        for char in word:
            if ord(char) >= ord('A') and ord(char) <= ord('Z'):
                count += 1
        if count == len(word) or count == 0:
            return True
        elif count == 1 and ord(word[0]) >= ord('A') and ord(word[0]) <= ord('Z'):
            return True
        else:
            return False
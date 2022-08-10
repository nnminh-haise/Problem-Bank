from hashlib import new


class Solution:
    def countSegments(self, s: str) -> int:
        p = list(map(str, s.split(' ')))
        count = 0
        for item in p:
            if len(item) > 0:
                count += 1
        return count


sol = Solution()

print(sol.countSegments("hello world"))

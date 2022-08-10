# Cách 1:
# def getLastWordLength(s: str):
#     s = s.split(' ')
#     index = len(s) - 1
#     while index >= 0:
#         if len(s[index]) > 0:
#             return len(s[index])
#
#         index -= 1

# Cách 2:
# def getLastWordLength(s: str):
#     index = len(s) - 1
#
#     while index >= 0 and s[index] == ' ':
#         index -= 1
#
#     length = index
#
#     while index >= 0 and s[index].isalpha():
#         index -= 1
#
#     return length - index


s = "   fly me   to   the moon        "

print(getLastWordLength(s))
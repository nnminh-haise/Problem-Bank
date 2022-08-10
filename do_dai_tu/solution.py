s = input()

index = len(s) - 1

while index >= 0 and s[index] == ' ':
    index -= 1
    
length = index

while index >= 0 and s[index].isalpha():
    index -= 1

length -= index
print(length)
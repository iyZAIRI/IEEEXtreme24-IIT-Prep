s = input()

def is_palindrom(s):
    return s == s[::-1]

while(is_palindrom(s) and len(s) > 0):
    s=s[:-1]
print(len(s))




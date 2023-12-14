t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    t = input()
    u = input()
    k = ord(t[0]) - ord(s[0])
    result = ""
    for ch in u:
        shift = (ord(ch) - ord('a') + k) % 26
        result += chr(ord('a') + shift)
    print(result)

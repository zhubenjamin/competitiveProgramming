import sys
input = sys.stdin.readline

lines, length = list(map(int, input().split()))
for lineNum in range(lines):
    line = str(input())
    if line[-1] == "\n":
        line = line[:-1]
    chars = {}
    for char in line:
        if char in chars:
            chars[char] += 1
        else:
            chars[char] = 1
    isHeavy = (chars[line[0]] > 1)
    for char in line[1:]:
        if (chars[char] > 1) == (not isHeavy):
            isHeavy = chars[char] > 1
        else:
            print("F")
            break
    else:
        print("T")

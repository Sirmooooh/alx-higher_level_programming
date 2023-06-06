#!/usr/bin/python3

for i in range(0, 26):
    w = ord('z') - i
    if (i % 2 == 1):
        w = chr(w - ord('a') + ord('A'))
    else:
        w = chr(w)
    print("{}".format(w), end='')

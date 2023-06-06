#!/usr/bin/python3

for a in range(0, 10):
    for b in range(a + 1, 10):
        if not (a == 8 and b == 9):
            print("{}{}".format(a, b), end=", ")
        else:
            print("{}{}".format(a, b))

#!/usr/bin/python3
def uppercase(str):
    for d in str:
        if (ord(d) > 96 and ord(d) <= 124):
            d = chr(ord(d) - 32)
        print("{}".format(d), end='')
    print()

#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argc = len(sys.argv)
    argv = sys.argv
    total = 0


    for i in range(1, argc):
        total = total + int(argv[i])

    print(total)

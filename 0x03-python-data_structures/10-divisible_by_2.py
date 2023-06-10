#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    new_list = []
    for o in range(len(my_list)):
        if not my_list[o] % 2:
            new_list.append(True)
        else:
            new_list.append(False)
    return new_list

#!/usr/bin/python3
def max_integer(my_list=[]):
    if my_list is None:
        return
    if not my_list:
        return
    max = my_list[0]
    for o in my_list:
        if o > max:
            max = o
    return max

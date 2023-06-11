#!/usr/bin/python3
def delete_at(my_list=[], idx=0):

    if all((my_list, 0 <= idx < len(my_list))):
        del my_list[idx]
    return my_list

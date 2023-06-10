def no_c(my_string):
    my_string = my_string.translate({ord(char): None for char in 'Cc'})
    return my_string

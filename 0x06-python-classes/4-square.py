#!/usr/bin/python3
""" Creating a square class """


class Square:
    """ Defination of a class square """
    def __init__(self, size=0):
        """ Initialization of a square class
        Args: size=0: size of the square
         """
        self.__size = size

    @property
    def size(self):
        """ Getting the size of the square """
        return self.__size

    @size.setter
    def size(self, value):
        """ Setting the size of the square """
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """ Calculating the area of the square """
        return (self.__size ** 2)
#!/usr/bin/python3
""" creating student class """


class Student:
    """ Defining a class"""
    def __init__(self, first_name, last_name, age):
        """ Initializing a class"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """ retrieves a dictionary representation """
        if isinstance(attrs, list) and all(isinstance(i, str) for i in attrs):
            return {k: getattr(self, k) for k in vars(self) if k in attrs}
        else:
            return vars(self)


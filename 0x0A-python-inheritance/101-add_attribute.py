#!/usr/bin/python3
""" creating a function that adds new attributes to an object """

def add_attribute(obj, name, value):
    """ add_attribute function """
    if getattr(obj, "__dict__", None) is None:
        raise TypeError("can't add new attribute")
    setattr(obj, name, value)

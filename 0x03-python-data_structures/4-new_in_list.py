#!/usr/bin/python3
if my_list:
    copy = []
    copy = my_list[:]
    if idx < 0 or idx >= len(my_list):
        return copy
    else:
        copy[idx] = element
        return copy

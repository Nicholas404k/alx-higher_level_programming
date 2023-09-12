#!/usr/bin/python3
if not my_list:
    return None
    max = my_list[0]
    for i in range(len(my_list)):
        if my_list[i] >= max:
            max = my_list[i]
    return max

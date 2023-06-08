#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    name_list = dir(hidden_4)
    for index in range(len(name_list)):
        if (name_list[index][:2] != "__"):
            print(name_list[index])


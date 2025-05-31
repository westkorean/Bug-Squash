#We want to reuse this function multiple times to create multiple lists, but it seems like we might end up running into errors. Can you spot the issue?
def add_item(item, lst=[]):
    lst.append(item)
    return lst

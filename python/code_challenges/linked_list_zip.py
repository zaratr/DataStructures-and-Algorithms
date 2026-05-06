from data_structures.linked_list import LinkedList


def zip_lists(a, b):
    if(a.head is None):
        print(b)
        return b
    if(b.head is None):
        print(a)
        return a
    newList = LinkedList()
    listLen = max( len( a), len(b))
    i = 0
    while(i < listLen ):
        if a.head is not None:
            newList.insert(a.head.value)
            a.head = a.head.next
        if b.head is not None:
            newList.insert(b.head.value)
            b.head = b.head.next

        i += 1
    return newList



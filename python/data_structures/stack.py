from abstract_base_classes.abstract_stack import Stack
from data_structures.invalid_operation_error import InvalidOperationError

class stack(Stack):

    def __init__(self):
        self.items = []
        self.top = top()

    def push(self, item):
        self.top.value = item
        self.items.append(item)

    def pop(self):
        """
        pop from top of stack
        raise exception if stack is empty and pop from top of stack
        """
        try:
            return self.items.pop()
        except IndexError:
            raise InvalidOperationError("Method not allowed on empty collection")


    def peek(self):
        try:
            return self.items[-1]
        except IndexError:
            raise InvalidOperationError("Method not allowed on empty collection")

    def is_empty(self):
        return True if len(self.items) <= 0 else False

    def size(self):
        return len(self.items)



class top:

    def __init__(self):
        self.value = None


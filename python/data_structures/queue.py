from data_structures.invalid_operation_error import InvalidOperationError

class _QueueNode:

    def __init__(self, value):
        self.value = value
        self.next = None



class Queue:

    def __init__(self):
        self.front = None
        self.rear = None
    
    def enqueue(self, value):
        node = _QueueNode(value)
        if self.rear is None:
            self.front = self.rear = node
        else:
            self.rear.next = node 
            self.rear = node

    def dequeue(self):
        if self.front is None:
            raise InvalidOperationError("Queue is empty")

        value = self.front.value
        self.front = self.front.next
        if self.rear is None:
            self.rear = None
        return value
    
    def peek (self):
        if self.front is None:
            raise InvalidOperationError("Queue is empty")
        return self.front.value
    
    def is_empty(self):
        return self.front is None

    



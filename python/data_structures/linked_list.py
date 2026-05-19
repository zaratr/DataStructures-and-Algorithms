class LinkedList:
    """

    Nodes that have an edge to the next node, and a value. The last node has an edge to None. The head of the list is the first node.
    """

    def __init__(self):
        # self.aList = []
        self.head = None
        self.tail = None

    def display(self):
        out = []
        current = self.head
        while current:
            out.append(current.value)
            current = current.next
        return out

    def insert(self, value=None):
        if value is None:
            raise TargetError("Value Must Be Provided")
        if self.head is None:
            self.head = Node(value)
            self.tail = self.head
            return
        else:
            newNode = Node(value)
            # newNode.next = self.head
            # self.head = newNode
            self.tail.next = newNode
            self.tail = newNode
            


    def includes(self, value=None):
        if value is None:
            raise TargetError("Value Must Be Provided")
        current = self.head
        while current is not None:
            if current.value == value:
                return True
            current = current.next
        return False


    def __str__(self):
        if self.head is None:
            return "NULL"
        else:
            current = self.head
            output = ""
            while current is not None:
                output += f"{current} -> "
                current = current.next
            output += "NULL"
            return output

    def __len__(self):
        count = 0
        current = self.head
        while (current):
            count += 1
            current = current.next
        return count

class TargetError:
    def __init__(self, message:str):
        self.message = message

class Node:
    def __init__(self, value=None):
        self.value = value
        self.next = None

    def __str__(self):
        return f"{{ {self.value} }}"

    

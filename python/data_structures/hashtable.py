from data_structures.linked_list import LinkedList

class Hashtable:
    """
    Put docstring here
    """

    def __init__(self, size=1024):
        self.size = size
        
        self._buckets = [None] * size

    # Simple hash function that sums the ASCII values of the characters in the key and takes the modulus with the size of the hashtable.
    # Note: This is a very basic hash function and is not suitable for production use. In a real implementation, you would want to use a more robust hash function to minimize collisions.
    def _hash(self, key):
        return sum(ord(c) for c in str(key)) % 509

    def set(self, key, value):
        idx = self._hash(key ) 
        if self._buckets[idx] is None:
            self._buckets[idx] = LinkedList()
        self._buckets[idx].insert([key, value])

    def get(self, key):
        idx = self._hash(key)

        bucket = self._buckets[idx]
        if not bucket : 
            raise KeyError(key)
        current = bucket.head
        while current:
            k, v = current.value
            if k == key:
                return v
            current = current.next
        raise KeyError(key)
    




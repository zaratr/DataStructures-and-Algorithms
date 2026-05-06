from abc import ABC, abstractmethod
from typing import Any

class Stack(ABC):
    """Abstract Base Class for a Stack Data Structure"""

    @abstractmethod
    def push(self, item: Any) -> None:
        """Add an item to the top of the stack"""
        pass

    @abstractmethod
    def pop(self) -> Any:
        """Remove and return the top item from the stack"""
        pass

    @abstractmethod
    def peek(self) -> Any:
        """Return the top item without removing it"""
        pass

    @abstractmethod
    def is_empty(self) -> bool:
        """Return True if stack is empty"""
        pass

    @abstractmethod
    def size(self) -> int:
        """Return the number of items in the stack"""
        pass



    # Optional but recommended
    def __str__(self) -> str:
        """String representation of the stack"""
        return str(list(self))  # This will work if you implement __iter__


    def __len__(self) -> int:
        """Support for len(stack)"""
        return self.size()

    def __bool__(self) -> bool:
        """Support for if stack: ..."""
        return not self.is_empty()

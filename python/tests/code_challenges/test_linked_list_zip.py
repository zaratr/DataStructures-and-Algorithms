import pytest
from code_challenges.linked_list_zip import zip_lists
from data_structures.linked_list import LinkedList


""" 
Using tail the insertion is done from left to right on linked list on O(1) insertion. SO no need for reversing and removed  for value in reversed...
"""

def test_exists():
    assert zip_lists


# @pytest.mark.skip("TODO")
def test_even_length():
    list_a = LinkedList()
    for value in [1, 2, 3]:
        list_a.insert(value)

    list_b = LinkedList()
    for value in ["a", "b", "c"]:
        list_b.insert(value)

    actual = zip_lists(list_a, list_b)
    expected = LinkedList()
    for value in [1, "a", 2, "b", 3, "c"]:
        expected.insert(value)

    assert str(actual) == str(expected)


# @pytest.mark.skip("TODO")
def test_a_shorter():
    list_a = LinkedList()
    for value in [1, 2]:
        list_a.insert(value)

    list_b = LinkedList()
    for value in ["a", "b", "c"]:
        list_b.insert(value)

    actual = zip_lists(list_a, list_b)
    expected = LinkedList()
    for value in [1, "a", 2, "b", "c"]:
        expected.insert(value)

    assert str(actual) == str(expected)



# @pytest.mark.skip("TODO")
def test_b_shorter():
    list_a = LinkedList()
    for value in [1, 2, 3]:
        list_a.insert(value)

    list_b = LinkedList()
    for value in ["a", "b"]:
        list_b.insert(value)

    actual = zip_lists(list_a, list_b)
    expected = LinkedList()
    for value in [1, "a", 2, "b", 3]:
        expected.insert(value)

    assert str(actual) == str(expected)


# @pytest.mark.skip("TODO")
def test_a_empty():
    list_a = LinkedList()
    list_b = LinkedList()
    for value in ["a", "b", "c"]:
        list_b.insert(value)

    actual = zip_lists(list_a, list_b)
    expected = LinkedList()
    for value in ["a", "b", "c"]:
        expected.insert(value)
    assert str(actual) == str(expected)


# @pytest.mark.skip("TODO")
def test_b_empty():
    list_a = LinkedList()
    for value in [1, 2, 3]:
        list_a.insert(value)
    list_b = LinkedList()
    actual = zip_lists(list_a, list_b)
    expected = LinkedList()
    for value in [1, 2, 3]:
        expected.insert(value)
    assert str(actual) == str(expected)

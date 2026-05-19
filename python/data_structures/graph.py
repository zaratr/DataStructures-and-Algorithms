
class Graph:
    """
    Put docstring here
    """

    def __init__(self):
        self.node = dict()  # {vertex: [edges]}

    def add_node(self, value: str):
        if value not in self.node:
            vertex = Vertex(value)
            self.node[vertex] = []
            return vertex

    def add_edge(self, vertex1 = None, vertex2 = None, weight: int = 0):
        if vertex1 not in self.node or vertex2 not in self.node:
            raise KeyError("Both vertices must be in the graph.")
        edge = Edge(vertex2, weight)
        self.node[vertex1].append(edge)


    def size(self):
        return len(self.node)   


    def get_nodes(self):
        return self.node.keys()

    def get_neighbors(self, vertex):
        if vertex not in self.node:
            raise KeyError("Vertex not found in the graph.")
        return self.node[vertex]

# Vertex (NODE) is a class that represents a single vertex in the graph.
class Vertex:
    def __init__(self, value:str = None, neighbors:list=None):
        self.value = value
        self.neighbors = neighbors if neighbors is not None else [] 

class Edge:
    def __init__(self, vertex, weight=0):
        self.vertex = vertex
        self.weight = weight


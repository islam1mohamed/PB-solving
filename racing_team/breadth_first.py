import numpy as np
from collections import deque
def nodes_to_moves(path_of_nodes) :
    lis = []
    length = len(path_of_nodes)
    for i in range(length-1):
        y,x = path_of_nodes[i]
        b,a = path_of_nodes[i+1]
        if a-x == 1 : lis.append('right')
        elif a-x == -1 : lis.append('left')
        elif b-y == -1 : lis.append('up')
        elif b-y == 1 : lis.append('down')
    return lis

def check_valid_moves(rows, cols,node):
        row, col = node
        
        neighbors = []
        if row > 0:
            neighbors.append((row - 1, col))
        if row < rows - 1:
            neighbors.append((row + 1, col))
        if col > 0:
            neighbors.append((row, col - 1))
        if col < cols - 1:
            neighbors.append((row, col + 1))
        return neighbors

def bfs(graph, start, target):
    rows, cols = graph.shape
    visited = set()
    queue = deque([(start, [start])])  # Each element in the queue is a tuple: (node, path)

    while queue:
        node, path = queue.popleft()
        visited.add(node)

        if node == target:
            return path
        
        neighbors=check_valid_moves(rows,cols,node)
        
        for neighbor in neighbors:
            if neighbor not in visited and graph[neighbor] == 0:
                new_path = path + [neighbor]
                queue.append((neighbor, new_path))
                visited.add(neighbor)

    return None  # Target not reachable

# Example graph represented as a 2D numpy array (5x5 dimensions)
graph = np.array([[0, 0, 0, 0, 0],
                  [0, 0, 0, 0, 0],
                  [1, 1, 1, 0, 0],
                  [0, 0, 0, 0, 0],
                  [0, 0, 0, 0, 0]])

start_node = (1, 1)
target_node = (4, 1)
result_path = bfs(graph, start_node, target_node)
path = nodes_to_moves(result_path)

if result_path:
    print(f"Shortest path from {start_node} to {target_node}: {path}")
else:
    print(f"No path found from {start_node} to {target_node}")

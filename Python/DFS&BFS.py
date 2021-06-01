#BFS,DFS기초
def bfs(graph, start_node):
    queue=list()
    visit=list()
    queue.append(start_node)
    while queue:
        node = queue.pop(0)
        if node not in visit:
            visit.append(node)
            queue.extend(graph[node])
    return visit
def dfs(graph,start_node):
    stack=list()
    visit=list()
    stack.append(start_node)
    while stack:
        node = stack.pop()
        if node not in visit:
            visit.append(node)
            stack.extend(reversed(graph[node]))
    return visit
graph={
    'A':['B','C','D'],
    'B':['A'],
    'C':['A','E','F'],
    'D':['A'],
    'E':['C'],
    'F':['C']
}
print("BFS",bfs(graph,'A'))
print("DFS",dfs(graph,'A'))
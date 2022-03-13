#dfs와 bfs


#dfs는 깊이우선탐색

# class graph:
#     def __init__(self):
#         pass
#     def dfs(self):
#         pass
#
#     def input(self):
#         n,m,v = map(int,input().split())
#         graphNode=[]
#         for i in range(n+1):
#             empty=[]
#             for j in range(n+1):
#                 empty.append(0)
#             graphNode.append(empty)
#         print(graphNode)
#
#
# G = graph()
# G.input()

n,m,v = map(int,input().split())
graph = [[0]*(n+1) for _ in range(n+1)]
for i in range(n+1):
    a,b = map(int,input().split())
    graph[a][b] = graph[b][a] = 1
print(graph)




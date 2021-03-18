import sys  #시간줄이기를 위해

n = int(input())

tree = [[] for _ in range(n +1)]
parent= [[] for _ in range(n + 1)]

for _ in range(n-1):    #트리를 그래프 형태로 생성
    i,j = map(int, sys.stdin.readline().split())
    tree[i].append(j)
    tree[j].append(i)

def dfs(graphlist, start, parent):
    stack = [start]
    while stack:
        n = stack.pop()
        for i in graphlist[n]:
            parent[i].append(n)
            stack.append(i)
            graphlist[i].remove(n)
    return parent

for i in list(dfs(tree,1,parent))[2:]:
    sys.stdout.write(str(i[0]) + "\n")
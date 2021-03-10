n = int(input())

co = []

for i in range(n):
    co.append(list(map(int, input().split())))

co.sort()   #조건이 정렬과 같기 때문에 sorted로 조건 줄 필요 없음

for [i, j] in co:
    print(i, j)
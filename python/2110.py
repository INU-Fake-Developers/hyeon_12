n, c =map(int, input().split())
x = []

def counter_dis():
    low = 1
    high = x[n-1] - x[0]
    result = 0
    while low <= high:
        counter =1
        prev =0
        mid = int((low+high)/2)

        for i in range(1, n):
            diff = x[i] - x[prev]
            if diff>= mid:
                counter+=1
                prev = i
        if counter>=c:
            result = max(result, mid)
            low = mid + 1
        else:
            high = mid - 1
    print(result)

for i in range(n):
    y = int(input())
    x.append(y)

x.sort()

counter_dis()
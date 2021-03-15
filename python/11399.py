n = int(input())    #사람
time = list(map(int,input().split()))

time.sort()

waiting_time = 0
for i in range(n):
    waiting_time = waiting_time + (time[i] * (n-i))

print(waiting_time)
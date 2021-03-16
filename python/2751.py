import sys

n = int(sys.stdin.readline())
v = []

for i in range(n):
    v.append(int(sys.stdin.readline()))

v=sorted(v)

for i in sorted(v):
    sys.stdout.write(str(i)+"\n")

#시간 초과로 인해 input이랑 print 못씀....
#sys.stdin.readline은 input과 비슷한 역할을 하나 여러개의 라인을 읽을때 속도가 조금더 빠르다
#sys.stdout.writed은 자동으로 넘어가는 print의 특성을 제거한 개행제거용이며 속도도 좀더 빠르다


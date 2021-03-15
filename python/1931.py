n = int(input())    #n입력

meeting = []
for i in range(n):
    start, end = map(int, input().split())
    #split()의 역활은 2개의 숫자를 입력받을때 2개의 숫자를 분리
    #map을 이용하여 편하게 입력받음
    meeting.append((start,end)) #리스트 값 추가

meeting = sorted(meeting, key = lambda time: [time[1],time[0]])
#각 튜플의 끝나는 시간 정렬 후 시작시간 정렬(끝나는 시간이 중요하니깐)
#key는 정렬 조건
meeting_count = 0
start_time = 0

for time in meeting :
    if time[0]>=start_time:
        start_time = time[1]
        meeting_count += 1

print(meeting_count)
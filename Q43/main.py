n = int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

candidate=count=0

for i in range(n):
    if count==0:
        candidate = arr[i]

    if arr[i]==candidate:
        count+=1
    else:
        count-=1

count=0
for i in arr:
    if i==candidate:
        count+=1

if count>n//2:
    print(candidate)
else:
    print("No Majority Element")
n = int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

arr.sort()

current=longest=1

for i in range(1,n):
    if arr[i]==arr[i-1]+1:
        current+=1
    elif arr[i]!=arr[i-1]:
        current=1
    if current>longest:
        longest=current

print(longest)
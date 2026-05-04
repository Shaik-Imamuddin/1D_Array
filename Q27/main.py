n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

for i in range(n):
    count=0
    for j in range(n):
        if arr[i]==arr[j]:
            count+=1
    if count==1:
        print(arr[i])
        exit()
print(-1)
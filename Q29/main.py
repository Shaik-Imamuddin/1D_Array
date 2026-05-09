n=int(input())

arr=[]
res=[]

for i in range(n):
    arr.append(int(input()))

k=0
for i in range(n):
    count=0
    for j in range(k):
        if arr[i]==res[j]:
            count+=1
    if count==0:
        res.append(arr[i])
        k+=1

for i in range(k):
    print(res[i],end=" ")
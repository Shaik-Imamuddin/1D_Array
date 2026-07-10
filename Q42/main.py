n = int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

maxcount=0
res = arr[0]

for i in range(n):
    count = 1
    for j in range(i+1,n):
        if arr[i]==arr[j]:
            count+=1
    
    if count>maxcount:
        maxcount = count
        res = arr[i]

print(res)
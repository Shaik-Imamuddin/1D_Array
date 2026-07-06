n = int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

maxprod = arr[0]
minprod = arr[0]
ans = arr[0]

for i in range(1,n):
    curr = arr[i]

    if curr<0:
        maxprod,minprod=minprod,maxprod
    
    if curr>maxprod*curr:
        maxprod = curr
    else:
        maxprod = maxprod*curr
    
    if curr<minprod*curr:
        minprod = curr
    else:
        minprod = minprod*curr
    
    if maxprod>ans:
        ans=maxprod

print(ans)
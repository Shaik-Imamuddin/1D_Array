n = int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

leaders=[]

mfr=arr[n-1]
leaders.append(mfr)

for i in range(n-2,0,-1):
    if arr[i]>=mfr:
        mfr = arr[i]
        leaders.append(mfr)

for i in range(len(leaders)-1,-1,-1):
    print(leaders[i],end=" ")
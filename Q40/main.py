n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

cursum=arr[0]
maxsum=cursum

for i in range(1,n):
    if cursum+arr[i]>arr[i]:
        cursum+=arr[i]
    else:
        cursum=arr[i]

    if cursum>maxsum:
        maxsum=cursum
    
print(maxsum)
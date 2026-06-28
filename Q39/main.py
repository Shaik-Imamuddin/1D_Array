n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

target = int(input())

start=end=currsum=maxlen=0

for end in range(n):
    currsum+=arr[end]
    
    while currsum>target and start<=end:
        currsum -= arr[start]
        start+=1

    if currsum==target:
        len = end-start+1
        maxlen = max(len,maxlen)

print(maxlen)
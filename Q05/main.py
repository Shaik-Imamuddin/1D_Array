n=int(input())
count=0
arr=[]
for i in range(n):
    arr.append(int(input()))
    if arr[i]%2!=0:
        count+=1
print(count)
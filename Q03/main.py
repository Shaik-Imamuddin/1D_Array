n=int(input())
sum=0
arr=[]
for i in range(n):
    arr.append(int(input()))
    if arr[i]%2==0:
        sum+=arr[i]
print(sum)
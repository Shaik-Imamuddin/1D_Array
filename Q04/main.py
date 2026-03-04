n=int(input())
sum=0
arr=[]
for i in range(n):
    arr.append(int(input()))
    if i%2==0:
        sum+=arr[i]
    else:
        sum-=arr[i]
print(sum)
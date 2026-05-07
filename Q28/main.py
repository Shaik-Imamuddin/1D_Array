n=int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

for i in range(n):
    count=0
    for j in range(n):
        if(arr[i]==arr[j]):
            count+=1
    
    if count>1:
        c=0
        for k in range(i):
            if arr[k]==arr[i]:
                c+=1
        if c==0:
            print(arr[i],end=" ")
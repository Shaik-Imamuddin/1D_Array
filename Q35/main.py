n1=int(input())
arr1=[]
for i in range(n1):
    arr1.append(int(input()))

n2=int(input())
arr2=[]
for i in range(n2):
    arr2.append(int(input()))

i=j=k=0
res=[0]*(n1+n2)

while i<n1 and j<n2:
    if arr1[i]<arr2[j]:
        res[k]=arr1[i]
        i+=1
    else:
        res[k]=arr2[j]
        j+=1
    k+=1

while i<n1:
    res[k]=arr1[i]
    i+=1
    k+=1

while j<n2:
    res[k]=arr2[j]
    j+=1
    k+=1

for i in res:
    print(i,end=" ")
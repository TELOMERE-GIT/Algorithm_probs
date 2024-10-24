from itertools import combinations
N,M=map(int,input().split( ))
lst=map(int,input().split( ))
Clst=combinations(lst,3)
gap=M+1
ansSum=0
for i in Clst:
  sum=i[0]+i[1]+i[2]
  if(sum<=M and gap>M-sum):
    gap=M-sum
    ansSum=sum
print(ansSum) 
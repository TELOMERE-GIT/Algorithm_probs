N=int(input())
ans=[]
for i in range (N) :
    inp=input()
    if len(inp) != 3 : continue
    else : ans.append(inp)
ans.sort()
print(ans[0])   
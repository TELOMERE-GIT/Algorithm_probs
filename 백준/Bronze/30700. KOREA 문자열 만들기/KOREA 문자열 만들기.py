N=input()
KOR=["K","O","R","E","A"]
j=0
for i in range (len(N)) :
    if N[i]==KOR[j%5] : j+=1
print(j)   
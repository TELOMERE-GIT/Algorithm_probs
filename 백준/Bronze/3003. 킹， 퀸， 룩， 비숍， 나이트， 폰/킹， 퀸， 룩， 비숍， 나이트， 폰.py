lst_inp=[]
a=input()
lst_inp=a.split(' ')
lst_minus=[1,1,2,2,2,8]
for i in range(0,6):
    i=lst_minus[i]-int(lst_inp[i])
    print(i, end=" ")
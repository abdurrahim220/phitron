n=int(input());

if n==1:print("-1")
    
# else:
#     i=1
#     while i<=n:
#         if(i%2==0):
#             print(i)
#         i +=1


else:
    for i in range(2,n+1):
        if(i%2==0):
            print(i)

n = int(input("Enter number"))
fact = 1
  
for i in range(1,n+1):
    fact = fact * i
      
print ("The factorial of",n," is : ",end="")
print (fact)

from math import floor
def pyramidPattern(n:int):
    for i in range(n):
        for j in range(floor(((2*n-1)/2) - i)):
            print(" ",end="")
        for k in range(2*i+1):
            if(k%2==0):
                print("*",end="")
            else:
                print(" ",end="")
        print()
    return

n = int(input("Enter the number of rows: "))
pyramidPattern(n)
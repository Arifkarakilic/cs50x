from cs50 import get_int

a=int(input("Enter the value"))
while True: 
    if a>0:
        for i in range(1,a+1):
            print("#" * i)
        break
    else:
        a=int(input("Enter the value"))
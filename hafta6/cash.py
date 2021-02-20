from cs50 import get_float

sayi=0

while True:
    f=get_float("Alacaginiz Miktar: ")
    if f>=0:
        break
    else:
        f=get_float("Alacaginiz Miktar: ")
c=round(int(f*100))
        

while c>0:
        while c>=25:
            sayi+=1
            c-=25
        while c>=10:
            sayi+=1
            c-=10
        while c>=5:
            sayi+=1
            c-=5
        while c>=1:
            sayi+=1
            c-=1
print(f"Bozukluk sayiniz: {sayi}")
        
        





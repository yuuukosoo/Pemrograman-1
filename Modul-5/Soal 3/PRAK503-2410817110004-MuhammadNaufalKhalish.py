def maksimal(a,b):
    if a>b:
        return a
    else :
        return b
    
def minimal(a,b):
    if a < b:
        return a
    else :
        return b
    
batas=int(input())
bilangan= list(map(int,input().split()))

if len(bilangan) !=batas :
    print("Jumlah Bilangan Tidak Sesuai dengan Jumlah Angka")
else :
    maks=-100000
    minim=100000

    for nilai in bilangan :
        maks= maksimal(maks,nilai)
        minim=minimal(minim,nilai)

    print(f"{maks} {minim}")



# batas=0 
# maks=-100000
# minim=100000
# bilangan=int(input())

# while batas < bilangan:
#     nilai=int(input().split())
#     maks=maksimal(maks, nilai)
#     minim=minimal(minim, nilai)
#     batas+=1
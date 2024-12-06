a,b=map(int,input().split())
total=0
for i in range(1,a +1):
    hasilbaris=0

    for j in range(i,0, -1):
        hasilbaris+=j*b
        print(f"({j}*{b})",end="")
        if j>1 :
            print("+",end="")

    print(f"={hasilbaris}")
    total+=hasilbaris

print(total)


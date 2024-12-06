awal,akhir=map(int,input().split())
if awal<=akhir:
    i,j=awal,akhir
    while i<=j :
        print(f"{i} {j}", end=" ")
        if i<=j :
            print("-", end=" ")
        i += 1
        j -= 1

    while i<=akhir:
        print(f"{i} {j}", end=" ")
        if i<akhir :
            print("-", end=" ")
        i += 1
        j -= 1

else :
    i,j=awal,akhir
    while i>=j:
        print(f"{i} {j}",end=" ")
        if i>=j :
            print("-", end=" ")
        i-=1
        j+=1

    while i>=akhir:
        print(f"{i} {j}", end=" ")
        if i>akhir :
            print("-", end=" ")
        i-=1
        j+=1
       





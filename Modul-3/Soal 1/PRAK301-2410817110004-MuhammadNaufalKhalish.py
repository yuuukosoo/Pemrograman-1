a, b, c=map(int, input().split())
if a>b and a>c : 
    if b>c : print(f"{c} {b} {a}")
    else : print(f"{b} {c} {a}")

elif b>a and b>c : 
    if a>c :print(f"{c} {a} {b}")
    else : print(f"{a} {c} {b}")

elif c>a and c>b :
    if a>b : print(f"{b} {a} {c}")
    else : print(f"{a} {b} {c}")




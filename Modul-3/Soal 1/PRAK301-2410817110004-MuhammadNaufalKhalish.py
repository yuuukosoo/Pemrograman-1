a, b, c=map(int, input().split()) 
if a>=b>=c: print(f"{c} {b} {a}")
elif a>=c>=b : print(f"{b} {c} {a}")

elif b>=c>=a : print(f"{a} {c} {b}")
elif b>=a>=c : print(f"{c} {a} {b}")

elif c>=a>=b : print(f"{b} {a} {c}")
elif c>=b>=a : print(f"{a} {b} {c}")


    





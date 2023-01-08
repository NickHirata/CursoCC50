
altura = int(input("Altura: "))
x=1
for i in range(0,altura,1):
    y=altura-x
    for i in range(0,y,1):
      print(" ",end="")
    for i in range(0, x, 1):
        print("#",end="")
    x += 1
    print()

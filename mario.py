import cs50

h = cs50.get_int("Height: ")

while (h < 0 or h > 23):
    h = cs50.get_int("Height: ")

hash = 2

for t in range(h):
    for i in range(h - hash + 1):
        print(" ", end="")
    for i in range(hash):
        print("#", end="")
    print("")
    hash += 1
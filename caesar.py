import cs50

if len(sys.argv) != 2:
    print("Usage: python caesar.py <key>")
    sys.exit(1)

k = int(sys.argv[1])
p = cs50.get_string("plaintet: ", end="")

print("ciphertext: ", end="")
for i in range(len(p)):
    if isupper(p[i]):
        print(chr((((ord(p[i]) - 65) + k) % 26) + 65), end="")
    elif islower(p[i]):
        print(chr((((ord(p[i]) - 97) + k) % 26) + 97), end="")
    else:
        print(p[i])

print()
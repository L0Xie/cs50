import cs50
import sys

if len(sys.argv) != 2:
    print("Usage: python caesar.py <key>")
    sys.exit(1)

k = int(sys.argv[1])
print("plaintext: ", end="")
p = cs50.get_string()

print("ciphertext: ", end="")
for i in p:
    if i.isupper():
        print(chr((((ord(i) - 65) + k) % 26) + 65), end="")
    elif i.islower():
        print(chr((((ord(i) - 97) + k) % 26) + 97), end="")
    else:
        print(i, end="")

print()
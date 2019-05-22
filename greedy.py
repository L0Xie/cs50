import cs50

dollar = cs50.get_float("O hai! How much change is owed?")

while (dollar < 0):
    dollar = cs50.get_float("How much change is owed?")

penny = int(dollar * 100)

if penny >= 25:
    quarters = penny // 25
    qremainder = penny % 25
    dimes = qremainder // 10
    dremainder = qremainder % 10
    nickels = dremainder // 5
    p = dremainder % 5
    print(quarters + dimes + nickels + p)
elif penny >= 10:
    dimes = penny // 10
    dremainder = penny % 10
    nickels = dremainder // 5
    p = dremainder % 5
    print(dimes + nickels + p)
elif penny >= 5:
    nickels = penny // 5
    p = penny % 5
    print(nickels + p)
else:
    print(penny)
value = int(input())
list_of_cedules = [100, 50, 20, 10, 5, 2, 1]

print(value)
for cedule in list_of_cedules:
    quantity = value // cedule
    value = value % cedule
    print(f"{quantity} nota(s) de R$ {cedule},00")

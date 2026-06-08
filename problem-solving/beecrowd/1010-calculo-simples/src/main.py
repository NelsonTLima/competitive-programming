total = 0
for i in range(2):
    product_id, qty , price = input().split()
    product_id, qty, price = int(product_id), int(qty), float(price)
    total += price * qty
print(f"VALOR A PAGAR: R$ {total:.2f}")

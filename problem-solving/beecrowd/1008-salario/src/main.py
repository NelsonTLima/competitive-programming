number, hours_worked, wage_per_hour = int(input()), int(input()), float(input())
salary = wage_per_hour * hours_worked
print(
        f"NUMBER = {number}",
        f"SALARY = U$ {salary:.2f}",
        sep="\n"
        )

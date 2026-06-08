salary = float(input())

if (salary >= 0) and (salary <= 400):
    perc_raise = 0.15
elif (salary > 400) and (salary <= 800):
    perc_raise = 0.12
elif (salary > 800) and (salary <= 1200):
    perc_raise = 0.1
elif (salary > 1200) and (salary <= 2000):
    perc_raise = 0.07
else:
    perc_raise = 0.04

new_salary = salary * (1 + perc_raise)
salary_raise = salary * perc_raise
percent = int(perc_raise * 100)

print(
    f"Novo salario: {new_salary:.2f}",
    f"Reajuste ganho: {salary_raise:.2f}",
    f"Em percentual: {percent} %",
    sep="\n"
        )

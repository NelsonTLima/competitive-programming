_, starting_d = input().split()
starting_h, starting_m,  starting_s = input().split(" : ")
_, finishing_d = input().split()
finishing_h, finishing_m, finishing_s = input().split(" : ")

starting_d, starting_h, starting_m, starting_s = int(starting_d), int(starting_h), int(starting_m), int(starting_s)
finishing_d, finishing_h, finishing_m, finishing_s = int(finishing_d), int(finishing_h), int(finishing_m), int(finishing_s)

days = finishing_d - starting_d
hours = finishing_h - starting_h
minutes = finishing_m - starting_m
seconds = finishing_s - starting_s

if (seconds < 0):
    seconds += 60
    minutes -=1

if (minutes < 0):
    minutes += 60
    hours -= 1

if (hours < 0):
    hours += 24
    days -= 1

print(
        f"{days} dia(s)",
        f"{hours} hora(s)",
        f"{minutes} minuto(s)",
        f"{seconds} segundo(s)",
        sep="\n"
       )

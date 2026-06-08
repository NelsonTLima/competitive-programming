n = int(input())
hours = minutes = seconds = 0

if n >= 60:
    minutes = n // 60
    seconds = n % 60
else:
    seconds = n

if minutes >= 60:
    hours = minutes // 60
    minutes = minutes % 60

print(f"{hours}:{minutes}:{seconds}")

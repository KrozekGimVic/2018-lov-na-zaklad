
# n = int(input())
n = 33558994
rezultat = 0
for i in range(n**2):
    if i % 2 == 0:
        rezultat += 1

print("Rezultat =", rezultat)

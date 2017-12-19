import random

seed = int(input())
random.seed(seed)

i = 0
nmax = 0
for i in range(30000000):
    print(random.randint(0, seed))

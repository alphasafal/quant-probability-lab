import itertools

exp1 = ['A', 'B', 'C']
exp2 = [1, 2, 3, 4]

pairs = list(itertools.product(exp1, exp2))

print("Total:", len(pairs))
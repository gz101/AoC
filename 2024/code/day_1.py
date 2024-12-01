### Part 1 ###

# inp = """
#     3   4
#     4   3
#     2   5
#     1   3
#     3   9
#     3   3
# """

# lines = inp.strip().split("\n")
# in_1, in_2 = [], []
# for line in lines:
#     num_1, num_2 = map(int, line.split())
#     in_1.append(num_1)
#     in_2.append(num_2)

in_1, in_2 = [], []
with open("/Users/gchiong/repos/AoC/2024/input/day_1.txt", "r") as f:
    for line in f:
        if line.strip():
            num_1, num_2 = map(int, line.split())
            in_1.append(num_1)
            in_2.append(num_2)

in_1 = sorted(in_1)
in_2 = sorted(in_2)

count = 0

for i in range(len(in_1)):
    count += abs(in_1[i] - in_2[i])

print(f"Part 1: {count}")


### Part 2 ###

in_1, in_2 = [], {}
with open("/Users/gchiong/repos/AoC/2024/input/day_1.txt", "r") as f:
    for line in f:
        if line.strip():
            num_1, num_2 = map(int, line.split())
            in_1.append(num_1)
            in_2[num_2] = 1 + in_2.get(num_2, 0)

count = 0

for x in in_1:
    count += x * in_2.get(x, 0)

print(f"Part 2: {count}")

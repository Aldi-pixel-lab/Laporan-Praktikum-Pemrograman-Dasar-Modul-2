data = []
while len(data) < 6:
    data += input().split()

a, b, i, j, x, y = map(float, data)

hasil = (a - b) * i / j - (x + y)

print(f"{hasil:.3f}")
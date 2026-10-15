import math

data = []
while len(data) < 2:
    data += input().split()

A, B = map(float, data)

alas = math.sqrt(B * B - A * A)
tinggi = A
keliling = alas + tinggi + B
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:g} cm")
print(f"Tinggi = {tinggi:g} cm")
print(f"Keliling = {keliling:g} cm")
print(f"Luas = {luas:g} cm^2")
from math import sqrt, floor
from sys import stdin
input = stdin.readline

tiles = int(input())
print(f"The largest square has side length {floor(sqrt(tiles))}.")
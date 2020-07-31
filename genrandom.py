#!/usr/bin/python

import random

numbermax = 1000*1000
drawmax = 3840
colormax = 255

print('''static const struct DrawTblData {
    const int a;
    const int b;
    const int c;
    const int d;
} DrawTbl[] = {''')
for r in range(numbermax):
    print("    { %s, %s, %s, %s }," %
        (random.randint(0, drawmax), random.randint(0, drawmax), random.randint(0, drawmax), random.randint(0, drawmax)))
print("};\n")


print('''static const struct ColorTblData {
    const int a;
    const int b;
    const int c;
} ColorTbl[] = {''')
for r in range(numbermax):
    print("    { %s, %s, %s }," %
        (random.randint(0, colormax), random.randint(0, colormax), random.randint(0, colormax)))
print("};")
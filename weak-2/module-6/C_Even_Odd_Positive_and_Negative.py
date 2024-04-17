t = int(input())
even = odd = positive = negative = 0

for i in range(t):
    n = int(input())
    if n % 2 == 0:
        even += 1
        if n < 0:
            negative += 1
        elif n > 0:
            positive += 1
    else:
        odd += 1
        if n < 0:
            negative += 1
        elif n > 0:
            positive += 1

print("Even:", even)
print("Odd:", odd)
print("Positive:", positive)
print("Negative:", negative)

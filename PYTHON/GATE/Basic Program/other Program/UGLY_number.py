def is_ugly(num):
    while num % 2 == 0:
        num //= 2
    while num % 3 == 0:
        num //= 3
    while num % 5 == 0:
        num //= 5
    return num == 1  # If only factors were 2, 3, or 5, it should become 1

num = int(input("Enter the position of the ugly number: "))
count = 1  # We start counting from 1
i = 1  # Start checking numbers from 1

while count < num:
    i += 1
    if is_ugly(i):
        count += 1

print(f"The {num}th ugly number is: {i}")
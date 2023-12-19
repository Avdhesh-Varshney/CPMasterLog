t = int(input())
for a0 in range(t):
    n = int(input())
    ans = 0

    # Adding multiples of 3
    q = n // 3
    ans += 3 * ((q * (q + 1)) // 2)

    # Adding multiples of 5
    q = n // 5
    ans += 5 * ((q * (q + 1)) // 2)

    # Removing common elements
    q = n // 15
    ans -= 15 * ((q * (q + 1)) // 2)

    if n % 3 == 0 or n % 5 == 0:
        ans -= n
    print(ans)

# Seats
# https://atcoder.jp/contests/abc375/tasks/abc375_a
# Sat Oct 12 2024, 09:07:37 (UTC-3)
# Myckoll Winchester
def intput():
    inp = input()
    if ' ' in inp:
        return list(map(int, inp.split()))
    return int(inp)

# # # # # # # # sol # # # # # # # #

def solve():
    n = intput()
    s = input()
    if n < 3:
        print(0)
        return
    ans = 0
    for i in range(n-2):
        if s[i:i+3] == "#.#":
            ans += 1
    print(ans)
    return

solve()

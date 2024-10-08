# Colorful Stamp
# https://codeforces.com/contest/1669/problem/D
# Sun Oct 06 2024, 15:30:39 (UTC-3)
# Myckoll Winchester
def intput():
    inp = input()
    if ' ' in inp:
        return list(map(int, inp.split()))
    return int(inp)

# # # # # # # # sol # # # # # # # #

ans = []

def solve():
    global ans
    s = input()
    s = input()
    s = [c for c in s.split('W') if c]
    for section in s:
        if len(section) < 2:
            ans.append('NO')
            return
        if section.count('B') == 0 or section.count('R') == 0:
            ans.append('NO')
            return
    ans.append('YES')
    return

tt = intput()
for _ in range(tt):
    solve()

for a in ans:
    print(a)

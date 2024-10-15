# Lucky?
# https://codeforces.com/contest/1676/problem/A
# Sun Oct 06 2024, 15:10:30 (UTC-3)
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
    if sum(list(map(int, s[:3]))) == sum(list(map(int, s[3:]))):
        ans.append("YES")
    else:
        ans.append("NO")
    return
 
tt = intput()
for _ in range(tt):
    solve()
 
for a in ans:
    print(a)

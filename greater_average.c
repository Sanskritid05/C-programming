from collections import Counter

def max_count(l1):
    frequency = Counter(l1)
    return max(frequency.values())

num = int(input().strip())
if num == 0:
    print(0)
else:
    l1 = (list(map(int,input().strip().split()))) 
    if len(l1) != num:
        print(" ")
    else:
        print(max_count(l1))

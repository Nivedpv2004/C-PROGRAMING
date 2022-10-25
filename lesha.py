num = int(input())
arr = list(map(int,input().split()))
if all([v==0 for v in arr]):
    print('NO')
else:
    val = 0
    for x in range(num):
        first_block = arr[0:x]
        second_block = arr[x:]
        if sum(first_block) != 0 and sum(second_block) != 0:
            print('YES')
            print(2)
            print(1,x)
            print(x+1, num)
            val = 1
            break
    if val == 0:
        print('YES')
        print(1)
        print(1,num)

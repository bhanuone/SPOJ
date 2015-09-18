# your code goes here
t = int(raw_input())
for x in range(0, t):
    a = raw_input()
    a = a.split(' ')
    l = int(a[0])
    c = int(a[1])
    for y in range(0, l):
        line = ""
        for z in range(0, c):
            if y == 0 or y == l-1 or z == 0 or z == c-1:
                line += '*'
            else:
                line += '.'
        print line
    print "\n"
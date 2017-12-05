def fibonacci (n):
    if (n == 0 or n == 1):
        return 1
    return fibonacci(n-1) + fibonacci(n-2)

f = open('inp40.inp','r')
print (fibonacci(int(f.read())))
f.close()

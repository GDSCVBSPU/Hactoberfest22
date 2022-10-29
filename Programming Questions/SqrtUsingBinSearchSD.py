def sqrt(n, p):
    if n == 0: return 0.0

    pres = 10**-p
    start = 0.0
    end = n
    mid = (start + end) * 0.5

    while start < end:
        mid = (start + end) * 0.5
        if abs(mid * mid - n) < pres:
            return mid
        elif mid * mid < n:
            start = mid
        else:
            end = mid

def i(n):
    return 'i' if n < 0 else ''

def main():
    n = float(input('Enter a number: '))
    p = int(input('Enter precision: '))
    print(f'Square root of {n} is {round(sqrt(abs(n), p), p)}{i(n)}')

if __name__=="__main__":
    main()
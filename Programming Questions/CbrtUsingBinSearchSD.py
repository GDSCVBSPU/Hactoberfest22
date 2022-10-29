def cbrt(n, p):
    pres = 10**-p
    start = 0.0
    end = n
    mid = (start + end) * 0.5

    while start < end:
        mid = (start + end) * 0.5
        if abs(mid * mid * mid - n) < pres:
            return mid
        elif mid * mid * mid < n:
            start = mid
        else:
            end = mid

def main():
    n = float(input('Enter a number: '))
    p = int(input('Enter precision: '))
    print(f'Cube root of {n} is {round(cbrt(n, p), p)}')

if __name__=="__main__":
    main()
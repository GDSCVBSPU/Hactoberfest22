l = []
  
n = int(input("Enter number of elements : "))
  
for i in range(0, n):
    ele = int(input())
    l.append(ele)
print("Original List: ", l)
res = [*set(l)]
print("List after removing duplicate elements: ", res)

def linear_search(search_list,key):
    for i in range(len(search_list)):
        if search_list[i]==key:
            return i
    return 0

li=[int(x) for x in input().split()]
k=int(input())
print(linear_search(li,k))

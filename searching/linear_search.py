def linear_search(search_list,key):
    for i in range(0,len(search_list)):
        if search_list[i]==key:
            return i
    return 0



print(linear_search([1,4,5],6))

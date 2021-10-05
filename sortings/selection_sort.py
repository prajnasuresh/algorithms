#Selection Sort



def selection_sort(unsorted_array):

 
    for i in range(len(unsorted_array)):

        min_index = i
        for j in range(i+1,len(unsorted_array)):
            if unsorted_array[min_index]>unsorted_array[j]:
                min_index = j
       # Swapping
            unsorted_array[i],unsorted_array[min_index] = unsorted_array[min_index],unsorted_array[i]

    print(unsorted_array)
    
  

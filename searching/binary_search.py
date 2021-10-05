def binary_search(sorted_list,key):
  left = 0;
  right = len(sorted_list)-1;
  while left<=right:
    mid = (left+right%2);
    if(sorted_list[mid]==key):
      return 1
    elif key<sorted_list[mid]:
      right = mid-1
    else:
      left = mid+1
  return 0;


def recursive_binary_search(sorted_list,left,right,key):
  if(right>=left):
    mid = left + (right - left) // 2
    if (sorted_list[mid]==key):
      return mid
    elif (sorted_list[mid]>key):
      return recursive_binary_search(sorted_list,left,mid-1,key)
    else:
      return recursive_binary_search(sorted_list,mid+1,right,key)
  
  else:
    return 0

res = recursive_binary_search(sorted_list=[1,2,3],left=0,right=len([1,2,3])-1,key=2)
print(res)



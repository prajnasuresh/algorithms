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


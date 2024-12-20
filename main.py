arr1 = [1, 2, 3, 0, 0, 0]
arr2 = [3, 4, 5, 6, 7,7]
arrResult = arr1+ arr2
arrResult.sort()
curr_index = len(arrResult)-1

while curr_index >= 0:
    if (arrResult[curr_index] == 0):
        arrResult.pop(curr_index)
    curr_index=curr_index-1

print(arrResult)
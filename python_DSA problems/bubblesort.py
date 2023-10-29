def bubble_sort(arr):
    n = len(arr)
    
    for i in range(n):
        # Last i elements are already in place, no need to check them
        for j in range(0, n-i-1):
            # Swap if the element found is greater than the next element
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

# Take user input for the array
user_input = input("Enter the elements of the array (separated by spaces): ")
user_array = list(map(int, user_input.split()))

# Call the bubble sort function
bubble_sort(user_array)

# Print the sorted array
print("Sorted array:", user_array)

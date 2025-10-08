# Implementation-of-Searching-in-CPP
Aim: To study and implement searching in C++

# Program a: Binary Search
Theory with explanation of the code:

- Binary Search is a fast, divide-and-conquer algorithm for searching in sorted arrays.
- It repeatedly divides the search interval in half.
- The middle element is compared with the target value.
- If the middle matches the target, the search ends successfully.
- If the target is smaller, search continues in the left half.
- If the target is larger, search continues in the right half.
- Time complexity is O(\log n), making it efficient for large datasets.
- Space complexity is O(1) for iterative implementation.
- The array must be sorted before applying binary search.
- It is deterministic and always finds the target if present.


Algorithm:

- Start
- Accept the number of elements from the user.
- Input all elements into a vector.
- Sort the vector in ascending order.
- Display the sorted array.
- Prompt the user to enter the target element.
- Initialize start and end pointers to the beginning and end of the array.
- Calculate the middle index.
- If the middle element equals the target, return its index.
- If the target is smaller, update end to middle - 1.
- If the target is larger, update start to middle + 1.
- Repeat steps 7–10 until start > end.
- If not found, return -1.
- Ask the user if they want to search another element.
- Repeat the process based on user input.
- End


# Program b: Linear Search

Theory with explanation of the code:
- Linear Search is a simple technique for finding an element in a list.
- It checks each element sequentially from start to end.
- If a match is found, the index is returned immediately.
- If no match is found after scanning all elements, it returns -1.
- It works on both sorted and unsorted arrays.
- Time complexity is O(n) in worst and average cases.
- Best case is O(1) when the element is at the beginning.
- Space complexity is O(1) since no extra memory is used.
- It is easy to implement and understand.
- Suitable for small datasets or when sorting is not feasible.

Algorithm:

- Start
- Define the array or list of elements.
- Set the target element to be searched.
- Start from the first element of the array.
- Compare each element with the target.
- If a match is found, return the index.
- If no match is found by the end, return -1.
- Display whether the element was found or not.
- Repeat the process for additional search queries if needed.
- End 

# Conclusion
The binary and linear search implementations showcase two fundamental techniques for locating elements in arrays.
Binary search is efficient, operating in logarithmic time, but requires the array to be sorted beforehand.
It’s ideal for large datasets and performance-critical applications. 
Linear search, though simpler, scans each element sequentially and works on both sorted and unsorted arrays, making it suitable for small or unsorted data.
Together, these programs highlight the trade-off between speed and flexibility.
Understanding both equips programmers with versatile tools for different scenarios,
reinforcing core algorithmic thinking and the importance of choosing the right strategy based on data structure.

* Criteria for analysing sorts:
        1. No.of comparisions
        2. No.of swaps
        3. Adaptive
        4. Stable
        5. Extra memory

* Preserving the order of duplicates in the sorted list is called stable algorithm. If there are duplicate numbers, then their name should be in sorted order. For other elements, numbers will be in sorted order and not names. Because both are not possible always

* Bubble, insertion and selection takes o(n^2) time

* Bubble sort: when we go through the elements first with its pair it is called 1st pass. By the end of this only one element will be sorted(largest element). If there are n elements then n-1 comparisions are made. If first element is greater than second element, then only we will perform swap. Otherwise go next set pair of elements. By the end of 2nd pass, two largest elements will be sorted. This will go on like this till all the elements are sorted. For n elements, n-1 passes will be there and n(n-1)/2 max swaps will be there. This is named bubble sort because haviest element will go and settle in the bottom and lighest element will be at the top like bubble and stone in water

* To get the largest element in a list we can perform bubble sort for first pass. If swapping is not done in the bubble sort then it means list is sorted

* If the list is already sorted then time taken is o(n) if not it takes o(n^2). Hence bubble sort is adaptive.

* If there are duplicate elements, bubble sort will not interchange elements. This will keep as it is. Therefore bubble sort is stable

* Insertion sort: inserting an element in an array in a sorted position. Compare the elements from right hand side, if array element is greater than the element to be inserted then shift the array element by one position and insert at the free space. Time taken min is o(1) and max is o(n). Lastly all the elements will be sorted. For n elements, n-1 passes needed and n-1 cpmparision is needed. Hence time taken is o(n^2). No.of swaps will be equal to no.of comparisions. In insertion sort we will not get any largest element with any one pass. Insertion sort in an linked list is more benificial since it does not require shifting compared to array

* Insertion sort is adaptive bu nature. Time taken is min is o(1) and max is o(n^2) and swap is same as that of time taken

* Insertion sort will not shift the elements it they are equal. Hence stable
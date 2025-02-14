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

* Only bubble sort and insertion sort is adaptive. Bubble, insertion and  merge sort are stable

* k passes is required in the bubble sort and not in insertion sort. LL is used in sertion sort and not in bubble sort

* Selection sort: Take the first position and find out the lowest element to put in the first position. To find out min, take two pointers and move one pointer and compare those pointers. Bring down the second pointer to where it is min. Swap first element and the min element found during the first pass. This will continue until the list is completely sorted. With 1st pass we get the smallest element in the array. Here we are selecting position and then making the element to come to that position. Hence name selection sort. for n elements no.of comparision is (n-1)n/2 i.e., o(n^2) and no.of swaps is n-1 i.e., o(n). Swapping will be done only once for each pass using different pointers. Intermediate result of selection sort is useful. Selecting a position and finding the element

* Selection sort is neither adaptive not stable

* Quick sort: an element will be in sorted position if all the elements before that element are smaller and all the elements after that element are greater. Then elements are in a sorted position. Quick does not mean this is fastest sort. Elements before or after that element is sorted or not is not sure. But that particular element is in soretd order. Ex: teacher asking the students to stand in a line as per their height and students standing on their own. Selecting an element and finding the position. This is also called as selection exchange sort/ partition exchange sort

* The element which has to find its place in quick sort is called pivot. Once after finding the pivot position, perform quick sort on elements on left and right side of pivot recursively. Entire procedure of quick sort is called partitioning procedure

* If the list is already sorted in ascending/descending order then quick sort takes worst case of o(n^2). Time taken by quick sort is o(nlogn). Best case is if partitioning is done only in the middle and best case time o(nlogn) and worst case is partioning happening at either side of n and worst case time is o(n^2). Average time taken is o(nlogn). Randomly selecting some element as pivot is called randomised quick sort

* Merge sort: merging the two sorted arrays and copying it into third array in an sorted order. Time taken is o(m+n). We can also perform merge operation in a single array if they are half sorted(till middle and from middle) by using low, middle and high concept.After merging from one array to another, we have to merge back the elements to original array once they are sorted. If the merge sort is performed on more than 2 lists then we have to compare one element from each list and sort it. This procedure is called m-way merging

* Iterative merge will have passes and not recursive merge. Time take in iterative merge is o(nlogn)

* Recursive merge sort takes o(nlogn) time. There is no worst/best case. This is the average time case. Here merging is done in the post-order. Size of the stack as it uses recursion is n+logn. This algorithm requires extra space

* Count sort: an index based sorting which is faster but consumes more memory. Take a count array and get the occurence of each element in that array. Then copy the elements from count array back to actual array to get the sorted list. Time taken is o(n). This is linear time taking algorithm. Space consumption is huge as it requires the size of highest element in the actual array in the count array

* Bucket sort/bin sort: create an array of bins and make all the elements NULL. Insert the elements in the actual array to bins array. Therefore this is an array of linked list. Each bin will have element if it is there in actual array. If there is a duplication, insert at the end of first element that is inserted in the bins. Scan through the bins and make bin empty and copy the elements back to actual array with sorted list i.e., delete the node from bin and insert in the actual array. Time complexity is o(n)

* Radix sort: this is similar to bucket/bin sort array. Taking the decimal number array(0-9) size instead of larget number in the array to save space in the array and this is also not practical when it comes to larger element to have that sized array. Check the last digit of the number in actual and array and drop it in the corresponding index in the bins. Last digit could be obtained by A[i]%10(A[i]mod10). Empty the bins, take out the elements. Now this will not in sorted list. So again drop the elements in the bins according to the corresponding second digit. Second digit can be obtained by ((A[i]/10)%10). Empty the bin one by one. Do everything for digit 1, if there are only 2 digits take first digit as 0. First digit can be ontained by ((A[i]/100)%10). This is the procedure for the highest element with 3 digits. No.of passes will differ according to the no.of digits. Time complexity is o(dn) // d is no.of digits. Space is o(n)

* Shell sort: it is an extension of insertion sort. Elements are inserted but there is a distance apart unlike consecutively in insertion sort. Gap=n/2. Go to first element and gap element, compare them and sort it by taking only those two elements into consideration. Once sorting is done move by one index and sort again. Again calculate gap=result of previous gap/2 and perform the same steps. Here always we don't count only 2 elements, if the gap between element we are comparing with the next elements is also equal to the gap of array index 0 to that first element we are comparing. Then perform sort for 3 elements. Again calculate gap and execute same steps. Time taken is o(nlogn). 2 successive division is logn which is performed here. It also calculated as o(n^3/2)/o(n^5/3). Shell sort is adaptive and does not take extra space so this is in-place sorting. This is comparision based sorting
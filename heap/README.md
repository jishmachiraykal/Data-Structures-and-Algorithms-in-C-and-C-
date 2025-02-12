* Heap is a complete binary tree in array(should not be any blank spaces)

* Every node should have elements greater than or equal to its desendents. Duplication is allowed. If this condition is satisfied then it is called max heap

* If node have elements smaller than or equal to its descendents then it is min heap

* Heap is represented using array and its height is always logn

* Insertion: insert an element in an array in next free space. Then rearrange the elements to make it max/min heap. Take a temporary variable compare with other elements and copy to the place where it should be according to min/max heap. Insertion is always done in the leaf node then arrangement will be done. Time taken for insertion is equal to height of a tree i.e., o(log2n)(logn base 2)

* No.elements when heap is first created is 1. For creating heap we don't need extra array it can be done within an array(in-place)

* Heap can be created using insert function/logic. Time taken creating heap is o(nlogn)

* From heap we can only delete root. Can delete highest priority element. When the root goes out, last element in the complete binary tree should take its place and then rearrange the elements i.e. compare new root and its children based on min and max heap compare and arrange the elements. Root node which got deleted will be stored in the free space in array after deletion. Then if we delete root again, it should occupy the free space and doing this procedure again and again will create a sorted heap

* heap sort process:
    1. Create heap of n elements
    2. Delete n elements one by one

* Time taken for heap sort is o(nlogn)

* Heapify: direction of adjustment in insertion is from leaf towards root and in deletion it is root towards leaf. In heapify start comparing the elements from last element in array after heap is created i.e., from the right side. Compare with downward children and rearrange the elements. This is done in opposite direction. This is the fastest method to create heap and takes o(n) time. Leaf nodes are not processed here

* Heap as priority queues: number itself is the priority. Larger the elements, larger the priority.Priority can be changes according to our need. Insertion will take o(1)/constant time. Highest priority element should be deleted. Search for the larger element in array and shift it which takes o(n) time. To reduce the time complexity of deletion i.e., o(n) create the heap(max) and delete the root element which is highest priority element which can be simply deleted. Now both insertion and deletion takes o(logn)
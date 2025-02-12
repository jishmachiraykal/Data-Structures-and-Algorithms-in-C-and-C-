* Heap is a complete binary tree in array(should not be any blank spaces)

* Every node should have elements greater than or equal to its desendents. Duplication is allowed. If this condition is satisfied then it is called max heap

* If node have elements smaller than or equal to its descendents then it is min heap

* Heap is represented using array and its height is always logn

* Insertion: insert an element in an array in next free space. Then rearrange the elements to make it max/min heap. Take a temporary variable compare with other elements and copy to the place where it should be according to min/max heap. Insertion is always done in the leaf node then arrangement will be done. Time taken for insertion is equal to height of a tree i.e., o(log2n)(logn base 2)

* No.elements when heap is first created is 1. For creating heap we don't need extra array it can be done within an array(in-place)

* Heap can be created using insert function/logic. Time taken creating heap is o(nlogn)
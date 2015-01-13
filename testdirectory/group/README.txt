===============================================================================
==================================  README  ===================================
===============================================================================

Program Created By: Ross Eaton, Yasemin Pak, Omar Ansari, Caleb Sarnecki
Date: 7 December 2014

===============================================================================

=======================
= Program Description =
=======================

The purpose of this program is to test different sorting algorithms on a group 
of random integers. These integers are randomly created in order to analyze how 
the algorithms compare to each other as realistically as possible.

This program creates a random data file with different long values, sorts the 
data using different kinds of sorting algorithms, and returns the number of
comparisons made for each sorting algorithm. In addition to counting the number 
ofcomparisons, it also times how long each sorting takes and records it to the 
log file. The different sorting algorithms used in this program are insertion 
sort, heap sort, quick sort, bubble sort, and a variant bubble sort.

===============================================================================

======================
= Sorting Algorithms =
======================

QUICK SORT
----------

Quicksort is the one of the fastest of the sorting algorithms. It works by 
first selecting a pivot point of a certain element and then the list of 
elements is divided into two smaller partitions, with lows being placed to the
left of the pivot and highs being placed to the right of the element. The 
function is then recursively called in order to sort the smaller partitions, on 
the right and the left of the original pivot point. In the end the entire list 
of elements is sorted. In our program this function works by defining a pivot
point to be the element of the last index. Then, while the first index is 
less than or equal to the new last index, the function performs the sort. Each
time it appropriately increases the new leftIndex or decreases the rightIndex, 
so that it continues to move through the list of elements.If neither of the 
while conditions are satisified, that being leftIndex < rightIndex, the values
are swapped, so that the function can be performed. The function is then 
recursively called with new values, until the entire list of elements is 
done being sorted. 

===============================================================================

INSERTION SORT
--------------

Insertion sort is a relatively simple sorting algorithm that builds from the 
final sorted list one item at a time. On large data sets , however, insertion 
sort is much less efficient than more complex sorting algorithms such as 
heapsort and quicksort. In our program the function insertionsort() first 
creates the int 'insertionSub'. Next we call the functions 
setComparisonsInsertion() and setSwapInsertion() and pass them both a value 
of 0. Then we iterate through the elements starting from the position of the 
size of total elements minus 2. Then we interate through the elements 
backwards, which is to say we iterate through the elements in decreasing order 
relative to their position. With this we then set the insertionSub to be the 
number of the position of the element we are currently in. Next we iterate 
through the elements from the starting postion plus 1 up to the size of the 
total number of elements. With these iteration going on we then do the real 
work. We first call the incComparisonsInsertion(). We then say if our vector 
'recs' at the location of the value of our insertionSub compared to our 
vector 'recs' at our second iteration position is greater than zero then we 
swap the values of insertionSub and j, set insertionSub equal to j and then 
call our incSwapsInsertion funciton that again increments the number of swaps 
in our insertionsort. If we occur anything else, that is to say we happen 
accross a value that is equal to or smaller than zero than we break out of our 
loop and begin with the next inter-loop interation.

===============================================================================

HEAP SORT
---------

Heap sort is often slower than an optomized quick sort but it has the advantage
of having a better "worst-case" time (O(n log n)). There are two steps to a 
heap sort. The first step is to build the heap, or in other words, arrange the
data into a tree of data in which each child node is less than the parent node.
This is the purpose of fixHeapUp(). The next step is to actually do the heap 
sort by calling fixHeapDown() where the tree is traversed from left to right 
breadth first removing each element from the top of the tree, swapping in the
last element to the top of the tree. This results in a sorted list when 
heapSort() is called.

===============================================================================

BUBBLE SORT
-----------
Bubble sort, sometimes referred to as sinking sort, is a simple sorting 
algorithm. Bubble sort compares the adjacent element in the data vector. If they
are in the wrong order it swaps them. It goes through the whole vector over and 
over again until every element is ordered. In our bubble sort code, we have a 
variable named localSwaps used for counting the number of swaps everytime it 
goes through the vector. When it is recorded as zero, it means that all the 
elements are ordered because no swapping was required.

===============================================================================

VARIANT BUBBLE SORT
-------------------

This is another bubble sort code. Unlike the first bubble sort, this one does 
not use an integer variable to keep track of the number of swaps performed. 
Instead, it uses a boolean that is initially false but becomes true when there 
is a swap performed. It stops the loop if this boolean value is still false 
after going through the vector, which means no swaps were performed because 
every element is in order. 

===============================================================================

===============
= SOURCE CODE =
===============

There are three different classes created in the source code:

    - Main.cpp           (Main.h)
    - RecordArray.cpp    (RecordArray.h)
    - OneRecord.cpp      (OneRecord.h)
    
===============================================================================

Main.cpp
========

This class sets up an object to test the various sorting algorithms mentioned
above. This class passes parameters to the RecordArray class in order to setup
a file of random LONG numbers and uses the sorting algorithms to sort the data.
A timing function is used to measure the system time before the sort occurs and
after the sort occurs. The number of comparisons and swaps each sort does is 
is also measured. This information is then output to the command line.


Header File: Main.h

Variables:
---------

vector<long> data;
int zork;

FUNCTIONS:
---------

-CONSTRUCTORS AND DESTRUCTORS
int main();
  virtual ~Main();
  void createDataFile(string fileName, int howMany);
  
  - ACCESSORS AND MUTATORS
  void createDataFile(string fileName, int howMany);
  -- function to create a data file of random LONG values.
  
  RecordArray readTheRecords(string fileName);
  -- function to return a RecordArray of LONG values found in a file.
===============================================================================

OneRecord.cpp
=============

This class is the structure which holds a single LONG value which is generated
in the RecordArray class. This single OneRecord is then sorted in the various
sorting methods in the RecordArray class.


Header File: OneRecord.h

VARIABLES:
---------

  long element
  long MIN_VALUE


FUNCTIONS:
---------

- CONSTRUCTORS AND DESTRUCTORS

  OneRecord():
  -- Costructor for the OneRecord object.
  
  virtual ~OneRecord():
  -- Destructor for the OneRecord object.
     
     
- ACCESSORS AND MUTATORS
  
  long getElement():
   -- Function to get the value of the 'element'. Returns the 'element' for this
      'OneRecord'.
   -- return: element
    
  void setElement(long value):
   -- Function to set the value of the 'element'. 
   -- Parameter: value - the 'long' value to be set
    
  void readElement(Scanner& scanner):
   -- Function to read from the input file and set the 'element'. To do this it 
      calls the setElement function after taking the input.
   -- Parameter: scanner - the 'Scanner' from which to read.
     
     
- GENERAL FUNCTIONS:

  long OneRecord::compare(long secondElt):
   -- method to compare two LONG values. Returns -1, 0, or 1 depending on if
   the item compared is less than, equal to, or greater than the value contained
   internally.
   
  string OneRecord::toString():
   -- method to create and output a string of the data contained within
   the OneRecord object.
     
     
===============================================================================

RecordArray.cpp
===============

This is the class that has all the sorting functions. This is where everything
happens except creating the data file. A RecordArray object is initialized in 
the main class. This class is for a vector of 'OneRecord' records to be used 
for bubblesorting, insertionsorting, quicksorting, etc.

Header file: RecordArray.h

VARIABLES:
---------

  long comparisonsBubble
  long comparisonsHeap
  long comparisonsInsertion
  long comparisonsQuick
  long comparisonsVariantBubble
  long swapsBubble
  long swapsHeap
  long swapsInsertion
  long swapsQuick
  long swapsVariantBubble
  
  int numElts
  int zork
  
  vector<OneRecord> recs
  vector<LONG> tempVec

FUNCTIONS:
---------

- CONSTRUCTORS AND DESTRUCTORS:

  RecordArray();
  -- Costructor for RecordArray.
  
  virtual ~RecordArray();
  -- Destructor for the RecordArray.


- ACCESSORS AND MUTATORS:

  long getComparisonsHeap();
  -- returns the number of comparisons for a heapsort (of type long)
  -- takes in no parameters -- getter
   
  long getComparisonsInsertion();
  -- return the number of comparisons for an insertionsort (of type long)
  -- takes in no parameters -- getter
  
  long getComparisonBubble();
  -- returns the number of comparisons for a bubblesort (of type long)
  -- takes in no parameters -- getter
  
  long getComparisonsQuick();
  -- returns the number of comparisons for a quicksort (of type long)
  -- takes in no parameters -- getter
  
  long getComparisonsVariantBubble();
  -- returns number of comparisons for a var bubblesort (of type long)
  -- takes in no parameters -- getter
  
  int getNumElts();
  -- returns the actual number of elements in the vector (of type int)
  -- takes in no parameters -- getter
  
  long getSwapsBubble();
  -- returns the number of swaps for a bubblesort (of type long)
  -- takes in no parameters -- getter
  
  long getSwapsHeap();
  -- returns the number of swaps for a heapsort (of type long)
  -- takes in not parameter -- getter
  
  long getSwapsInsertion();
  -- returns the number of swaps for an insertionsort (of type long)
  -- takes in no parameters -- getter
  
  long getSwapsQuick();
  -- returns the number of swaps for a quicksort (of type long)
  -- takes in no parameters -- getter
  
  long getSwapsVariantBubble();
  -- return the number of swaps for a var bubblesort (of type long)
  -- takes in no parameters -- getter
  
  void incNumElts();
  -- increments the number of elements in the vector
  -- returns nothing (void method)
  
  void incComparisonsBubble();
  -- increments the number of comparisons in a bubblesort 
  -- returns nothing (void method)
  
  void incComparisonsHeap();
  -- increments the number of comparisons in a heapsort
  -- returns nothing (void method)
  
  void incComparisonsInsertion();
  -- increments the number of comparisons in an insertionsort
  -- returns nothing (void method)
  
  void incComparisonsQuick();
  -- increments the number of comparisons in a quicksort
  -- returns nothing (void method)
  
  void incComparisonsVariantBubble();
  -- increments the number of comparisons in a var bubblesort 
  -- returns nothing (void method)
  
  void incSwapsBubble();
  -- increments the number of swaps in a bubblesort
  --  returns nothing (void method)
  
  void incSwapsHeap();
  -- increment the number of swaps in a heapsort
  --  returns nothing (void method)
  
  void incSwapsInsertion();
  -- increment the number of swap in an insertionsort
  --  returns nothing (void method)
  
  void incSwapsQuick();
  -- increment the number of swaps in an quicksort
  --  returns nothing (void method)
  
  void incSwapsVariantBubble();
  -- increments the number of swaps in a var bubblesort
  --  returns nothing (void method)
  
  void setNumElts(int value);
  -- sets the number of elements in the vector
  --  returns nothing (void method)
  -- takes in a value of type int
  
  void setComparisonsBubble(long value);
  -- sets the number of comparisions in bubblesort
  -- returns nothing (void method)
  -- takes in a value of type long
  
  void setComparisonsHeap(long value);
  -- sets the number of comparisions in a heapsort
  --  returns nothing (void method)
  -- takes in a value of type long
  
  void setComparisonsInsertion(long value);
  -- sets the number of comparisons in an insertionsort
  -- returns nothing (void method)
  -- takes in a value of type long
  
  void setComparisonsQuick(long value);
  -- sets the number of comparisons in a quickSort
  -- returns nothing (void method)
  -- takes in a value of type long
  
  void setComparisonsVariantBubble(long value);
  -- sets the number of comparisons in a var bubblesort
  -- returns nothing (void method)
  -- takes in a value of type long
  
  void setSwapsBubble(long value);
  -- sets the number of swaps in a bubblesort
  -- returns nothing (void method)
  -- takes in a value of type long
  
  void setSwapsHeap(long value);
  -- sets the number of swaps in a heapsort
  -- returns nothing (void method)
  -- takes in a value of type long
  
  void setSwapsInsertion(long value);
  -- sets the number of swaps in an insertionsort
  -- returns nothing (void method)
  -- takes in a value of type long
  
  void setSwapsQuick(long value);
  --sets the number of swaps in a quicksort
  --  returns nothing (void method)
  -- takes in a value of type long
  
  void setSwapsVariantBubble(long value);
  -- sets the number of swaps in a var bubblesort
  --  returns nothing (void method)
  -- takes in a value of type long


- GENERAL FUNCTIONS:

  void bubbleSort();
  -- method that does the bubblesorting. See description of bubbleSort above
  for full description.
  -- returns nothing (void method)
  
  void variantBubbleSort();
  -- method that does the variantBubbleSort. See description of
  variantBubbleSort above for full description.
  -- returns nothing (void method)
  
  void checkSort();
  -- method to check if the data is indeed sorted.
  -- returns nothing (void method)
  
  void fixHeapDown(int heapLength);
  -- method to arrange the data of the heap in a tree structure.
  -- returns nothing (void method)
  -- takes in a variable, which will be named heapLength, of type int
  
  void fixHeapUp(int insertSub);
  -- method to swap least and most values to sort the tree.
  -- returns nothing (void method)
  -- takes in a variable, which will be named insertSub, of type int
  
  void heapSort();
  -- method to do the work of the heapSort. See description above of heapSort
  for full description.
  -- returns nothing (void method)
  
  void insertionSort();
  -- method to do the work of the insertionSort. See description above of
  insertionSort for full description.
  -- returns nothing (void method)
  
  void quickSort();
  -- method to do the work of the quickSort. See description above of quickSort
  for full description.
  -- returns nothing (void method)
  
  void quickSortStep(int leftBound,int rightBound);
  -- method to do the work of the quickSortStep. This does the initial work of 
  creating the pivot point cruicial to quickSort.
  -- returns nothing (void method)
  -- takes in two variables of type int, the first will be named leftBound
     and the second will be named rightBound
  
  void readRecordArray(Scanner& inFile);
  -- Method to take in a scanner and read each LONG value one by one.
  -- returns nothing (void method)
  -- takes in a file, from which to read, that will be named inFile. 
  
  void swap(int i,int j); 
  -- Method to swap to variables containing ints.
  -- returns nothing (void method)
  -- takes in two int values. The first will be named 'i' and the second 'j'.
  
  void writeRecordArray(ofstream& outStream);
  -- method to write out the RecordArray.
  -- returns nothing (void method)
  -- takes in a file, from which to write, that will be named outStream.
  


===============================================================================


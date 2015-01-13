#include "RecordArray.h"
/******************************************************************************
 * This class is for a vector of 'OneRecord' records to be used for
 * bubblesorting, insertionsorting, quicksorting, etc.
 *
 * Author/Copright: Group 7. All rights reserved.
 * Date: December 7, 2014 
**/

/******************************************************************************
 * Constructor.
**/
 RecordArray::RecordArray()
 {
 }
 
/******************************************************************************
 * Destructor
**/
 RecordArray::~RecordArray()
 {
 }
 
/******************************************************************************
 * Accessors.
**/
/******************************************************************************
 * Method to return the number of comparisons for a bubblesort.
 *
 * Returns: the 'long' number of comparisons.
**/

long RecordArray::getComparisonBubble()
{
  return this -> comparisonsBubble;
}

/******************************************************************************
 * Method to return the number of comparisons for a heapsort.
 *
 * Returns: the 'long' number of comparisons.
**/

long RecordArray::getComparisonsHeap()
{
  return this -> comparisonsHeap;
}

/******************************************************************************
 * Method to return the number of comparisons for an insertionsort.
 *
 * Returns: the 'long' number of comparisons.
**/
long RecordArray::getComparisonsInsertion()
{
  return this -> comparisonsInsertion;
}

/******************************************************************************
 * Method to return the number of comparisons for a quicksort.
 *
 * Returns: the 'long' number of comparisons.
**/
  
long RecordArray::getComparisonsQuick()
{
  return this -> comparisonsQuick;
}

/******************************************************************************
 * Method to return the number of comparisons for a var bubblesort.
 *
 * Returns: the 'long' number of comparisons.
**/

long RecordArray::getComparisonsVariantBubble()
{
  return this -> comparisonsVariantBubble;
}

/******************************************************************************
 * Method to return the actual number of elements in the vector.
 *
 * Returns: the 'long' number of elements.
**/
int RecordArray::getNumElts()
{
  return this -> numElts;
}
/******************************************************************************
 * Method to return the number of swaps for a bubblesort.
 *
 * Returns: the 'long' number of swaps.
**/
long RecordArray::getSwapsBubble()
{
  return this -> swapsBubble;
}

/******************************************************************************
 * Method to return the number of swaps for a heapsort.
 *
 * Returns: the 'long' number of swaps.
**/
long RecordArray::getSwapsHeap()
{
  return this -> swapsHeap;
}

/******************************************************************************
 * Method to return the number of swaps for an insertionsort.
 *
 * Returns: the 'long' number of swaps.
**/
long RecordArray::getSwapsInsertion()
{
  return this -> swapsInsertion;
}

/******************************************************************************
 * Method to return the number of swaps for a quicksort.
 *
 * Returns: the 'long' number of swaps.
**/
long RecordArray::getSwapsQuick()
{
  return this -> swapsQuick;
}

/******************************************************************************
 * Method to return the number of swaps for a var bubblesort.
 *
 * Returns: the 'long' number of swaps.
**/
long RecordArray::getSwapsVariantBubble()
{
  return this -> swapsVariantBubble;
}
/******************************************************************************
 * Mutators.
**/
/******************************************************************************
 * Method to increment the number of elements in the vector.
**/
void RecordArray::incNumElts()
{
  this -> numElts = this -> numElts + 1;
}

/******************************************************************************
 * Method to increment the number of comparisons in a bubblesort.
**/
void RecordArray::incComparisonsBubble()
{
  this -> comparisonsBubble = this -> comparisonsBubble + 1;
}

/******************************************************************************
 * Method to increment the number of comparisons in a heapsort.
**/
void RecordArray::incComparisonsHeap()
{
  this -> comparisonsHeap = this -> comparisonsHeap + 1;
}

/******************************************************************************
 * Method to increment the number of comparisons in an insertionsort.
**/
void RecordArray::incComparisonsInsertion()
{
  this -> comparisonsInsertion = this -> comparisonsInsertion + 1;
}
/******************************************************************************
 * Method to increment the number of comparisons in a quicksort.
**/
void RecordArray::incComparisonsQuick()
{
  this -> comparisonsQuick = this -> comparisonsQuick + 1;
}

/******************************************************************************
 * Method to increment the number of comparisons in a var bubblesort.
**/
void RecordArray::incComparisonsVariantBubble()
{
  this -> comparisonsVariantBubble = this -> comparisonsVariantBubble + 1;
}

/******************************************************************************
 * Method to increment the number of swaps in a bubblesort.
**/
void RecordArray::incSwapsBubble()
{
  this -> swapsBubble = this -> swapsBubble + 1;
}
/******************************************************************************
 * Method to increment the number of swaps in a heapsort.
**/
void RecordArray::incSwapsHeap()
{
  this -> swapsHeap = this -> swapsHeap + 1;
}

/******************************************************************************
 * Method to increment the number of swaps in an insertionsort.
**/
void RecordArray::incSwapsInsertion()
{
  this -> swapsInsertion = this -> swapsInsertion + 1;
}

/******************************************************************************
 * Method to increment the number of swaps in an quicksort.
**/
void RecordArray::incSwapsQuick()
{
  this -> swapsQuick = this -> swapsQuick + 1;
}

/******************************************************************************
 * Method to increment the number of swaps in a var bubblesort.
**/
void RecordArray::incSwapsVariantBubble()
{
  this -> swapsVariantBubble = this -> swapsVariantBubble + 1;
}

/******************************************************************************
 * Method to set the number of elements in the vector.
 *
 * Parameters:
 *   value - the 'int' value to set.
**/
void RecordArray::setNumElts(int value)
{
  this -> numElts = value;
}

/******************************************************************************
 * Method to set the number of comparisions in a bubblesort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
void RecordArray::setComparisonsBubble(long value)
{
  this -> comparisonsBubble = value;
}

/******************************************************************************
 * Method to set the number of comparisions in a heapsort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
void RecordArray::setComparisonsHeap(long value)
{
  this -> comparisonsHeap = value;
}

/******************************************************************************
 * Method to set the number of comparisions in an insertionsort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
void RecordArray::setComparisonsInsertion(long value)
{
  this -> comparisonsInsertion = value;
}
/******************************************************************************
 * Method to set the number of comparisions in a quicksort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
void RecordArray::setComparisonsQuick(long value)
{
  this -> comparisonsQuick = value;
}
/******************************************************************************
 * Method to set the number of comparisions in a var bubblesort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
void RecordArray::setComparisonsVariantBubble(long value)
{
  this -> comparisonsVariantBubble = value;
}

/******************************************************************************
 * Method to set the number of swaps in a bubblesort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
void RecordArray::setSwapsBubble(long value)
{
  this -> swapsBubble = value; 
}

/******************************************************************************
 * Method to set the number of swaps in a heapsort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
void RecordArray::setSwapsHeap(long value)
{
  this -> swapsHeap = value;
}

/******************************************************************************
 * Method to set the number of swaps in an insertionsort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
 void RecordArray::setSwapsInsertion(long value)
{
  this -> swapsInsertion = value;
}

/******************************************************************************
 * Method to set the number of swaps in a quicksort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
 void RecordArray::setSwapsQuick(long value)
{
  this -> swapsQuick = value;
}

/******************************************************************************
 * Method to set the number of swaps in a var bubblesort.
 *
 * Parameters:
 *   value - the 'long' value to set.
**/
  void RecordArray::setSwapsVariantBubble(long value)
{
  this -> swapsVariantBubble = value;
}

/******************************************************************************
 * General methods.
**/

/******************************************************************************
 * Method to do the bubblesort.
**/
void RecordArray::bubbleSort()
  {
    
    //cout << "TESTING" <<endl;
    int localSwaps = 0;
    
    this -> setComparisonsBubble(1);
    this -> setSwapsBubble(1);
    
    for (int i = this -> getNumElts()-1; i >= 0; --i) //Might be error here.
    {
      localSwaps = 0;
      for (int j = 0; j <= i;  ++j)
      {
        this -> incComparisonsBubble();
        if (recs[j].compare(recs[j+1].getElement()) > 0)
        {
          this -> swap(j, j+1);
          this -> incSwapsBubble();
          ++localSwaps;
        }
      }
      /**
      if (localSwaps == 0)
      {
        //Utils::Format("EARLY EXIT: " + i);
        //LOG STUFF HERE
        break;
      }
      **/
    }
    
    
  }
/******************************************************************************
 * Method to do the variant bubblesort.
**/
void RecordArray::variantBubbleSort()
  {
    bool didSwap = false;

    this -> setComparisonsVariantBubble(0);
    this -> setSwapsVariantBubble(0);
    
    didSwap = true;
    int length = this -> getNumElts()-1;
    while(didSwap)
    {
      didSwap = false;
      for(int i = 0; i < length; ++i)
      {
        this ->  incComparisonsVariantBubble();
        if(recs[i].compare(recs[i+1].getElement()) > 0)
        {
          this -> swap(i, i + 1);
          this -> incSwapsVariantBubble();
          didSwap = true;
        }
      }
      
      --length;
    }
    
  } // public void variantbubblesort()

/******************************************************************************
 * Method to check that the array is in fact sorted.
 * 
 * Parameters:
 *     none
**/
void RecordArray::checkSort()
  {
    for(int i = 0; i < this -> getNumElts()-1; ++i)
    {
      if(recs[i].compare(recs[i+1].getElement()) > 0)
      {
        //FileUtils.logFile.printf("%s ERROR (%d %s) (%d %s)%n",TAG,
               //i,recs[i].toString(),i+1,recs[i+1].toString());
               
        //LOG STUFF HERE
        exit(1);
      }
    } // for(long i = 0; i < this.getNumElts()-1; ++i)
  } // public void checkSort()

/******************************************************************************
 * Method to fix the heap going down.
 * 
 * Parameters:
 *     none
**/
void RecordArray::fixHeapDown(int heapLength)
  {
    int insertSub,largerChild,leftChild,rightChild;

    insertSub = 0;
    leftChild = 2*insertSub + 1;
    rightChild = 2*insertSub + 2;

    while(heapLength >= leftChild)
    {
      largerChild = leftChild;
      if(heapLength >= rightChild)
      {
        this -> incComparisonsHeap();
        if(this -> recs[leftChild].compare(this -> recs[rightChild].getElement()) < 0)
        {
          largerChild = rightChild;
        }
      }

      this -> incComparisonsHeap();
      if(this -> recs[insertSub].compare(this -> recs[largerChild].getElement()) < 0)
      {
        this -> incSwapsHeap();
        this -> swap(insertSub,largerChild);
        insertSub = largerChild;
        leftChild = 2*insertSub + 1;
        rightChild = 2*insertSub + 2;
      }
      else
        break;

    }
  } // public void fixHeapDown(int heapLength)

/******************************************************************************
 * Method to fix the heap going up.
 * 
 * Parameters:
 *     int insertSub
**/

void RecordArray::fixHeapUp(int insertSub)
  {
    int parentSub;
    OneRecord insertRec;

    insertRec = this -> recs[insertSub];
    parentSub = (insertSub-1)/2;

    while(0 < insertSub)
    {
      this -> incComparisonsHeap();
      if(this -> recs[parentSub].compare(insertRec.getElement()) < 0)
      {
        this -> swap(insertSub,parentSub);
        this ->incSwapsHeap();

        insertSub = parentSub;
        insertRec = this -> recs[insertSub];
        parentSub = (insertSub-1)/2;

      }
      else
        break;

    } // while(0 < insertSub)
  } // public void fixHeapUp(long insertSub)

/******************************************************************************
 * Method to do the heapsort.
 * 
 * Parameters:
 *      none
**/
void RecordArray::heapSort()
  {
    this ->setComparisonsHeap(0);
    this ->setSwapsHeap(0);

    //****************************************************************
    // First we build the heap.  This uses the O(n log n) insertion
    // method and not the O(n) bottom up method, but that's ok for the
    // moment. 
    for(int i = 1; i < this->getNumElts(); ++i)
    {
      this->fixHeapUp(i);
    } // for(long i = 0; i < this.getNumElts(); ++i)

    //****************************************************************
    // Now we sort the heap.
    for(int i = this->getNumElts()-1; i >= 0; --i)
    {
      this->incSwapsHeap();
      this->swap(0,i);
      this->fixHeapDown(i-1);
    } // for(long i = this.getNumElts(); i >= 0; --i)
  } // public void heapsort()

/*******************************************************************************
 * Method to do the insertionsort.
 * Modified by Ross Eaton
 * 
 * Parameters:
 *     none
**/
void RecordArray::insertionSort()
  {
    int insertionSub = 0;

    this->setComparisonsInsertion(0);
    this->setSwapsInsertion(0);
    for(int i = this->getNumElts()-2; i >= 0; --i)  
    {
      insertionSub = i;
      for(int j = i+1; j < this->getNumElts(); ++j)
      {
        this->incComparisonsInsertion();
        if(recs[insertionSub].compare(recs[j].getElement()) > 0)
        {
          this->swap(insertionSub,j);
          insertionSub = j;
          this->incSwapsInsertion();
        } // if()
        else
        {
          break;
        } // else
      } // for()
    } // for()
  } // public void insertionsort()

/******************************************************************************
 * Method to do the quicksort by recursive call to the substep.
 * 
 * Parameters:
 *     none
**/
void RecordArray::quickSort()
  {
    this->setComparisonsQuick(0);
    this->setSwapsQuick(0);
    quickSortStep(0,this->getNumElts()-1);
  }

/******************************************************************************
 * Method to do the quicksort.
 * 
 * Parameters:
 *   int leftBound
 *   int rightBound
**/
 void RecordArray::quickSortStep(int leftBound,int rightBound)
  {
    if(leftBound >= rightBound) return;

    long pivot = this->recs[rightBound].getElement();
    int leftIndex = leftBound;
    int rightIndex = rightBound - 1;
    while(leftIndex <= rightIndex)
    {

      while((leftIndex <= rightIndex) && (this->recs[leftIndex].getElement() <= pivot))
      {
        this->incComparisonsQuick();
        ++leftIndex;
      }

      while((leftIndex <= rightIndex) && (this->recs[rightIndex].getElement() >= pivot))
      {
        this->incComparisonsQuick();
        --rightIndex;
      }

      if(leftIndex < rightIndex)
      {
        this->incSwapsQuick();
        this->swap(leftIndex,rightIndex);
      } // if(leftIndex < rightIndex)

    } // while(leftIndex <= rightIndex)

    this->incSwapsQuick();
    this->swap(leftIndex,rightBound);
    quickSortStep(leftBound,leftIndex-1);
    quickSortStep(leftIndex+1,rightBound);
  } // public void quickSortStep(long leftBound,long rightBound)

/******************************************************************************
 * Method to read the array of records.
 *
 * Parameters:
 *   Scanner& inFile - the 'Scanner' file from which to read.
**/
 void RecordArray::readRecordArray(Scanner& inFile)
  {
    this->setNumElts(0);
    while(inFile.hasNext())
    {
      OneRecord newRecord;
      newRecord.readElement(inFile);
      recs.push_back(newRecord);
      this->incNumElts();
    } // while(inFile.hasNext())

  } // public void readRecordArray(Scanner inFile)
  


/******************************************************************************
 * Method to swap two records in the array.
 *
 * Parameters:
 *   i - the subscript of the first record.
 *   j - the subscript of the second record.
**/
  void RecordArray::swap(int i,int j)//CHECK THIS
  {
    OneRecord temp;
    temp = recs[i];
    recs[i] = recs[j];
    recs[j] = temp;
  } // public void swap(int i,int j)

/******************************************************************************
 * Method to write the array of records.
 * 
 * Parameters:
 *     none
**/
void RecordArray::writeRecordArray(ofstream& outStream)
  {
    string s = "";
    for(int i = 0; i < this->getNumElts(); ++i)
    {
      s = recs.at(i).getElement();
      outStream << s << endl;

      //s = String.format("%s %6d %s%n",TAG,i,recs[i].toString());
      //FileUtils.logFile.printf("%s",s);
      //LOG STUFF HERE
    } // for(long i = 0; i < this->getNumElts(); ++i)

  } // public void writeRecordArray(Scanner inFile)


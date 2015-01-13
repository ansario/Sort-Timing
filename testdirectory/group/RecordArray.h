/******************************************************************************
 * Header file for the RecordArray class.
 *
 * Author/copyright:  Group07 -- Ross Eaton
 * Date: 1 December 2014
 * Last Modified: Ross Eaton on December 1st
 *
**/

#ifndef RECORDARRAY_H
#define RECORDARRAY_H

#include <iostream>
#include <vector>
using namespace std;

#include "OneRecord.h"

#include "../../Utilities/Utils.h"
#include "../../Utilities/Scanner.h"
#include "../../Utilities/ScanLine.h"


class RecordArray
{
public:
  RecordArray();
  virtual ~RecordArray();

  
  long getComparisonsHeap();
  long getComparisonsInsertion();
  long getComparisonBubble();
  long getComparisonsQuick();
  long getComparisonsVariantBubble();
  int getNumElts();
  long getSwapsBubble();
  long getSwapsHeap();
  long getSwapsInsertion();
  long getSwapsQuick();
  long getSwapsVariantBubble();
  void incNumElts();
  void incComparisonsBubble();
  void incComparisonsHeap();
  void incComparisonsInsertion();
  void incComparisonsQuick();
  void incComparisonsVariantBubble();
  void incSwapsBubble();
  void incSwapsHeap();
  void incSwapsInsertion();
  void incSwapsQuick();
  void incSwapsVariantBubble();
  void setNumElts(int value);
  void setComparisonsBubble(long value);
  void setComparisonsHeap(long value);
  void setComparisonsInsertion(long value);
  void setComparisonsQuick(long value);
  void setComparisonsVariantBubble(long value);
  void setSwapsBubble(long value);
  void setSwapsHeap(long value);
  void setSwapsInsertion(long value);
  void setSwapsQuick(long value);
  void setSwapsVariantBubble(long value);
  void bubbleSort();
  void variantBubbleSort();
  void checkSort();
  void fixHeapDown(int heapLength);
  void fixHeapUp(int insertSub);
  void heapSort();
  void insertionSort();
  void quickSort();
  void quickSortStep(int leftBound,int rightBound);
  void readRecordArray(Scanner& inFile);
  void swap(int i,int j); //NOT SURE ABOUT THIS
  void writeRecordArray(ofstream& outStream);
  

private:
  
  long comparisonsBubble;
  long comparisonsHeap;
  long comparisonsInsertion;
  long comparisonsQuick;
  long comparisonsVariantBubble;
  
  long swapsBubble;
  long swapsHeap;
  long swapsInsertion;
  long swapsQuick;
  long swapsVariantBubble;
  
  int numElts;
  int zork;
  
  
  vector<OneRecord> recs;
  vector<LONG> tempVec;


};

#endif
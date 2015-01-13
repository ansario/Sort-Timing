#include "Main.h"

/******************************************************************************
 * Main program for Homework 8.
 *
 * Author/copyright:  Group 07. All rights reserved.
 * Date: 7 Decemeber 2014
 *
**/

Main::~Main()
{
}

static const string TAG = "Main: ";

void Main::createDataFile(string fileName, int howMany)
{
   int zork = 13; //PRIME NUMBER FOR SUDO RANDOMNESS
   //PrintWriter dataFile = null;
   ofstream dataStream;
   Utils::FileOpen(dataStream, fileName);
   
   for(int i = 0; i < howMany; ++i)
   {
     dataStream << Utils::Format(zork) << "\n";
     zork = (zork * 9973) % 99991;
   }
   dataStream.flush();
   Utils::FileClose(dataStream);
	
} // private void createDataFile(String fileName,int howMany)

RecordArray Main::readTheRecords(string fileName)
{
    Scanner inFile;
    RecordArray recs;
    inFile.openFile(fileName);
    recs.readRecordArray(inFile);
    inFile.close();
    
    return recs;
}

int main (int argc, char *argv[])
{
    //string inFileName  = "";
    string outFileName = "";
    string logFileName = "";
    ofstream outStream;
    
    Main mainItem;
    RecordArray recs;
    Scanner scanner;
    RecordArray recordArray;
    string timeBegin;
    string timeEnd;
    
    
    Utils::CheckArgs(2, argc, argv, "outfilename logfilename");
    //inFileName = static_cast<string>(argv[1]);
    outFileName = static_cast<string>(argv[1]);
    logFileName = static_cast<string>(argv[2]);

    Utils::LogFileOpen(logFileName);
    Utils::FileOpen(outStream, outFileName);  

    Utils::logStream << TAG << "Beginning execution\n";
    Utils::logStream.flush();

    Utils::logStream << TAG << "outfile '" << outFileName << "'\n";
    Utils::logStream << TAG << "logfile '" << logFileName << "'\n";

    
  
    mainItem.createDataFile("RANDOMLONGS", 10000); //MAGIC NUMBER!! WE JUST NEED ENOUGH TO USE SIGNIFICANT TIME!!
    
    
    recs = mainItem.readTheRecords("RANDOMLONGS");
    Utils::logStream << TAG << "DO THE BUBBLE SORT" << endl;
    timeBegin = Utils::timecall("BUBBLESORTTIME");
    cout << timeBegin;
    recs.bubbleSort();
    timeEnd = Utils::timecall("BUBBLESORTTIME");
    cout << "NUMBER OF SWAPS:" << recs.getSwapsBubble() << endl;
    cout << "NUMBER OF COMPARISONS:" << recs.getComparisonBubble() << endl;
    cout << timeEnd;
    recs.checkSort();
    
    
    recs = mainItem.readTheRecords("RANDOMLONGS");
    Utils::logStream << TAG << "DO THE VARIANT BUBBLE SORT" << endl;
    timeBegin = Utils::timecall("VARIANTBUBBLESORTTIME");
    cout << timeBegin;
    recs.variantBubbleSort();
    timeEnd = Utils::timecall("VARIANTBUBBLESORTTIME");
    cout << "NUMBER OF SWAPS:" << recs.getSwapsVariantBubble() << endl;
    cout << "NUMBER OF COMPARISONS:" << recs.getComparisonsVariantBubble() << endl;
    cout << timeEnd;
    recs.checkSort();
    
    
    recs = mainItem.readTheRecords("RANDOMLONGS");
    Utils::logStream << TAG << "DO THE INSERTIONSORT SORT" << endl;
    timeBegin = Utils::timecall("INSERTIONSORTTIME");
    cout << timeBegin;
    recs.insertionSort();   
    timeEnd = Utils::timecall("INSERTIONSORTTIME");
    cout << "NUMBER OF SWAPS:" << recs.getSwapsInsertion() << endl;
    cout << "NUMBER OF COMPARISONS:" << recs.getComparisonsInsertion() << endl;
    cout << timeEnd;
    recs.checkSort();
    
    
    recs = mainItem.readTheRecords("RANDOMLONGS");
    Utils::logStream << TAG << "DO THE QUICK SORT" << endl;
    timeBegin = Utils::timecall("QUICKSORTTIME");
    cout << timeBegin;
    recs.quickSort();
    timeEnd = Utils::timecall("QUICKSORTTIME");
    cout << "NUMBER OF SWAPS:" << recs.getSwapsQuick() << endl;
    cout << "NUMBER OF COMPARISONS:" << recs.getComparisonsQuick() << endl;
    cout << timeEnd;
    recs.checkSort();
    
    
    recs = mainItem.readTheRecords("RANDOMLONGS");
    Utils::logStream << TAG << "DO THE HEAPSORT" << endl;
    timeBegin = Utils::timecall("HEAPSORTTIME");
    cout << timeBegin;
    recs.heapSort();
    timeEnd = Utils::timecall("HEAPSORTTIME");
    cout << "NUMBER OF SWAPS:" << recs.getSwapsHeap() << endl;
    cout << "NUMBER OF COMPARISONS:" << recs.getComparisonsHeap() << endl;
    cout << timeEnd;
    recs.checkSort();
    
    outStream.flush();

    Utils::logStream << TAG << "Ending execution\n";
    Utils::logStream.flush();

    Utils::FileClose(outStream);
    Utils::FileClose(Utils::logStream);
  return 0;
}
    



  




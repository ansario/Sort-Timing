/****************************************************************
 * Rather generic header file that includes the 'Utilities' code.
 *
 * Author/copyright:  Group07 -- Ross Eaton
 * Date: 4 December 2014
 *
**/
#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <cmath>
using namespace std;

#include "../../Utilities/Utils.h"
#include "../../Utilities/Scanner.h"
#include "../../Utilities/ScanLine.h"

#include "RecordArray.h" 

class Main
{
public: 
  int main();
  virtual ~Main();
  void createDataFile(string fileName, int howMany);
  RecordArray readTheRecords(string fileName);
private:

vector<long> data;
int zork;
};

#endif // MAIN_H
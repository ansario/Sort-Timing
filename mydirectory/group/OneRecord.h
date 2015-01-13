/******************************************************************************
 * Header file for the OneRecord class.
 *
 * Author/copyright:  Group07 -- Omar Ansari
 * Date: 1 December 2014
 * Last Modified: Omar Ansari on December 3rd
 *
**/

#ifndef ONERECORD_H
#define ONERECORD_H

#include <iostream>
#include <vector>
using namespace std;

#include "../../Utilities/Scanner.h"
#include "../../Utilities/Utils.h"

class OneRecord
{
public:

/******************************************************************************
 * Constructors and destructors for the class. 
**/
  OneRecord();
  virtual ~OneRecord();

/******************************************************************************
 * General functions.
**/
  LONG getElement();
  void setElement(long value);
  void readElement(Scanner& scanner);
  long compare(long secondElt);
  string toString();

private:
    
    LONG element;
    long MIN_VALUE;
};

#endif // SCANLINE_H

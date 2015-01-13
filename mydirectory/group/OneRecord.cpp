#include "OneRecord.h"

/******************************************************************************
 * Class OneRecord. Contains several functions to utilize the record.
 * 
 * Author/Copyright: Group 7. All rights reserved. 
 * Date: December 7, 2014 
**/

/******************************************************************************
 * Constructor.
**/
OneRecord::OneRecord()
{
    MIN_VALUE = -999;
    this -> setElement(MIN_VALUE);
}

/******************************************************************************
 * Destructor.
**/
OneRecord::~OneRecord()
{
}

/******************************************************************************
 * Function to get the value of the 'element'.
 * 
 * Return: element the 'element' for this 'OneRecord'
**/
LONG OneRecord::getElement()
{
    return this -> element;
}

/******************************************************************************
 * Function to set the value of the 'element'.
 * 
 * Parameters:
 *   value - the 'long' value to be set
**/
void OneRecord::setElement(long value)
{
    this -> element = value;
}

/******************************************************************************
 * Function to read from the input file and set the element. 
 * 
 * Parameters:
 *   scanner
**/
void OneRecord::readElement(Scanner& scanner)
{
    long inValue = 0;
    inValue = scanner.nextLONG();  // this is correct, nextLONG in utils
    this -> setElement(inValue);   // is in all caps
}

/******************************************************************************
 * Function to compare two elements.
 * 
 * Parameters:
 *   secondElt - the 'long' value we compare to
*/
long OneRecord::compare(long secondElt)
{ 
    long returnValue = 0;
    
    if (this -> getElement() < secondElt)
    {
        returnValue = -1;
    } 
    else if (this -> getElement() > secondElt)
    {
        returnValue = 1;
    }
    
    return returnValue;
}

/******************************************************************************
 * 
*/
string OneRecord::toString()
{
    LONG element;
    element = this -> getElement();
    string s = Utils::Format(element);
    
    return s;
}

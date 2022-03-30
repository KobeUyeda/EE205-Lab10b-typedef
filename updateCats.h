///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Lab10b_typedef - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date   29_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "catDatabase.h"

extern int updateCatName(const NumCats index, const char newName[]);
extern int fixCat(const NumCats index);
extern int updateCatWeight(const NumCats index, const Weight newWeight);
extern int updateCatCollar1(const NumCats index, enum color newCollarColor);
extern int updateCatCollar2(const NumCats index, enum color newCollarColor);
extern int updateLicense (const NumCats index, unsigned long long newLicense);

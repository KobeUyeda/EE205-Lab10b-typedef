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

extern int updateCatName(const size_t index, const char newName[]);
extern int fixCat(const size_t index);
extern int updateCatWeight(const size_t index, const float newWeight);
extern int updateCatCollar1(const size_t index, enum color newCollarColor);
extern int updateCatCollar2(const size_t index, enum color newCollarColor);
extern int updateLicense (const size_t index, unsigned long long newLicense);

///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Lab10b_typedef - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date   29_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdbool.h>
#include "catDatabase.h"

extern int addCat(const char name[],
                  const enum genderType gender,
                  const enum breedType breed,
                  const bool isFixed,
                  const float weight,
                  const enum color collarColor1,
                  const enum color collarCollar2,
                  const unsigned long long license);

///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Lab10b_typedef - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date   29_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdio.h>
#include <stdbool.h>

#define MAX_NAME_LENGTH (51)          // Set to 51 since \0 takes up one of the spaces so to get 50 char we used 51
#define MAX_DATABASE_LENGTH (1024)

enum color{BLACK, WHITE, RED, BLUE, GREEN, PINK};
enum genderType{UNKNOWN_GENDER, MALE, FEMALE};
enum breedType{UNKOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
typedef float Weight;
typedef size_t NumCats;

struct catData {
    char name[MAX_NAME_LENGTH];
    enum genderType gender;
    enum breedType  breed;
    enum color      collarColor1;
    enum color      collarColor2;
    bool isFixed;
    Weight weight;
    unsigned long long license;
};

extern NumCats amountOfCats;

// Struct Database
extern struct catData catLists[MAX_DATABASE_LENGTH];

// Functions defined in the catDatabase.c file
// This Section just validates input data
extern bool isNameValid(const char name[MAX_NAME_LENGTH]);
extern bool isIndexValid(const NumCats index);
extern bool isWeightValid(const Weight weight);
extern bool isDatabaseFull();

// Deals with the database
extern bool databaseFix();         // Cleans up the database so there is no more errors in the database
extern bool isDatabaseValid();    // Checks for any errors in the database
extern void resetDataBase();       // Resets the database


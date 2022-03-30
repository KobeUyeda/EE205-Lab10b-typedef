///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Lab10b_typedef - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date   29_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"
#include "config.h"
#include <string.h>

void deleteAllCats(){
    resetDataBase();
}

int deleteCat(int index){
    if (isIndexValid(index) == false){
#ifdef DEBUG
        printf("Index Valid: %d\n", isIndexValid(index));
#endif
        fprintf(stderr, "%s Delete Cat ERROR: The index is not valid for more detail look above.\n", DELETE_CATS_FILE_NAME);
        return -1;
    }

    for(size_t i = index; i < amountOfCats; i++){
        strcpy(catLists[i].name, catLists[i+1].name);

        catLists[i].gender       = catLists[i+1].gender;
        catLists[i].breed        = catLists[i+1].breed;
        catLists[i].isFixed      = catLists[i+1].isFixed;
        catLists[i].weight       = catLists[i+1].weight;
        catLists[i].collarColor1 = catLists[i+1].collarColor1;
        catLists[i].collarColor2 = catLists[i+1].collarColor2;
        catLists[i].license      = catLists[i+1].license;
    }
    amountOfCats--;
    catLists[amountOfCats].name[0]      = '\0';
    catLists[amountOfCats].gender       = 0;
    catLists[amountOfCats].breed        = 0;
    catLists[amountOfCats].isFixed      = false;
    catLists[amountOfCats].weight       = 0.0;
    catLists[amountOfCats].collarColor1 = 0;
    catLists[amountOfCats].collarColor2 = 0;
    catLists[amountOfCats].license      = 0;
    return 1;
}

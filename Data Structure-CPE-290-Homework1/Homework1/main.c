// Data Structures Assignment I
// Özgür Deniz Fıstıkçı
// 2010213043
// Computer Engineering Department Karabuk University

#include <stdio.h>
#include <stdlib.h>

// Core Functions
#include "./functions.h"

int main(int argc, char const *argv[])
{
    int choice;

    while (choice)
    {
        printf("\n1 - Assignment 1\n2 - Assignment 2\n3 - Assignment 3\n4 - Assignment 4\n0 - Exit\n\nEnter action: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addNumbers();
            break;
        case 2:
            sortZeroToHundred();
        case 3:
            traverseStudentList();
        case 4:
            searchByNameInList();
        default:
            break;
        }
    }

    return 0;
}

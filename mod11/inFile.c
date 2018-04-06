/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Read data from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:25 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Trevor Culp (), Trevorculp@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define NUM 4 //No semicolon, identical to const int NUM  4;

// Function Prototypes

// Main Function
int main()
{
    //int data[NUM];                 //Static memory
    int* userNums;  //User numbers   //Dynamic memory
    int arrSize = 0;//User specified number of integers
    FILE* inFile = NULL;
    printf("Opening file data.txt\n");
    //Open file for reading purposes
    inFile = fopen("data.txt", "r"); //r for reading
    //Test for success
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;//not zero, therefore implies error
    }//End if

    //Scan file, get num of records
    fscanf(inFile,"%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);

    //Allocate memory
    userNums = (int*)malloc((sizeof(int)*arrSize));

    //Check you got your memory
    if(userNums == NULL)
    {
        printf("Unable to malloc mem\n");
        fclose(inFile);
        return -2;
    }//End if

    //arrSize is the first member of the file, which in this case
    //is the HEADER record or the number of records in the file.
    int i = 1; //skip the HEADER record, which has the num of records
    while(i <= arrSize)
    {
        fscanf(inFile, "%d", &(userNums[i - 1]));
        //i - 1 to skip header record but allocate info starting @ index 0
        i = i + 1;
    }//End while

    //Print records
    i = 0;
    while(i < arrSize)
    {
        printf("Numbers [%d]\n", userNums[i]);
        i++;
    }//End while

    //Close & free memory
    fclose(inFile);
    free(userNums);
    return 0;
}
// Function Definitions



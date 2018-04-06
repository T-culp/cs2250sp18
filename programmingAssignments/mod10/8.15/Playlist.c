#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Playlist.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreatePlaylistNode
 *  Description:  Creates the playlist from user inputs
 * =====================================================================================
 */
void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc) 
{
    strcpy(thisNode->uniqueID, idINIT);
    strcpy(thisNode->songName, songNameInit);
    strcpy(thisNode->artistName, artistNameInit);
    thisNode->songLength = songLengthInit;
    thisNode->nextNodePtr = nextLoc;
    return;
}//End CreatePlaylistNode


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertPlaylistNodeAfter
 *  Description:  
 * =====================================================================================
 */
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode) 
{
    return;
}//End InsertPlaylistNodeAfter


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetNextPlaylistNode
 *  Description:  
 * =====================================================================================
 */
void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode) 
{
    return;
}//End SetNextPlaylistNode


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNextPlaylistNode
 *  Description:  
 * =====================================================================================
 */
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode) 
{
    return thisNode->nextNodePtr;
}//End GetNextPlaylistNode


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintPlaylistNode
 *  Description:  Prints the playlist
 * =====================================================================================
 */
void PrintPlaylistNode(PlaylistNode* thisNode) 
{
    printf("Unique ID: %s\n", thisNode->uniqueID);
    printf("Song Name: %s\n", thisNode->songName);
    printf("Artist Name: %s\n", thisNode->artistName);
    printf("Song Length (in seconds): %d\n", thisNode->songLength);
    return;
}//End PrintPlaylistNode

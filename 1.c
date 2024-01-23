#include <stdio.h> /// for Standard Input Output

int validEntryLineColumn(int Line, char column)
{
    if ((line >= 1 && line <= 10) && (column >= 65 && column <= 74))
    {
        return 1;
    }

    return 0;
}

int validatePosition(int mat[10][10], int boat, int line, int column, 
                char guide )


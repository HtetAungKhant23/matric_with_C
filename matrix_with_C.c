//
// Created by User on 2/18/2023.
//
//
//#include "stdio.h"
//
//void printingData(int mat[3][4]){
//
//    for (int i=0; i<3; i++){
//        if (mat[i] == '\0'){
//            break;
//        }
//        for (int j=0; j<4; j++){
//            if (mat[i][j] == '\0'){
//                break;
//            }
//            printf("%d\t",mat[i][j]);
//        }
//        printf("\n");
//    }
//
//}
//
//int main(){
//
//    int mm[]={0};
//
//    int matric_A[2][3];
//    int matric_B[3][4];
//    int matric_R[2][4];
//
//    printf("enter data for first matric_A [2] x [3] : \n");
//    for (int i=0; i<2; i++){
//        for (int j=0; j<3; j++){
//            scanf("%d",&matric_A[i][j]);
//        }
//    }
//
////    printingData(matric_A);
//
//    for (int i=0; i<4; i++){
//        for (int j=0; j<4; j++){
//            if (matric_A[i] == '\0'){
//                break;
//            }
//            if (matric_A[i][j] == '\0'){
//                break;
//            }
//            printf("%d\t",matric_A[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//

#include "stdio.h"
#include <windows.h>   // WinApi header

int main()
{
    HANDLE  hConsole;
    int k=1;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // you can loop k higher to see more color choices
//    for(k = 1; k < 255; k++)
//    {
        SetConsoleTextAttribute(hConsole, k);
        printf("  %s\n",  "I want to be nice today!");
//    }

    getchar();  // wait
    return 0;
}








//C Language Menu – Learn Core Concepts, Arrays, and Strings by saswinkumar017


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main() {
    int x;
    while (true) {
        printf("\n\n==================== MENU ====================\n");
        printf("1. Important Concepts in Programming in C\n");
        printf("2. Application of C Programming Language\n");
        printf("3. Array and its Methods\n");
        printf("4. String Methods\n");
        printf("Type zero '0' to Exit\n");
        printf("=============================================\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        if (x == 0) {
            printf("Exiting the program.....\n");
            break; 
        }

        
        switch(x) {
            case 1:
                printf("\nImportant Concepts in Programming in C :\n");
                printf("- Variables and Data Types\n");
                printf("- Control Statements(if,else if,else and switch,case)\n");
                printf("- Functions and Pointers\n");
                printf("- Array,Strings,Structure,Union and Enumerations\n");
                printf("- File Handling\n\n\n");
                break;
            case 2:
                printf("\nApplication of C Programming Language:\n");
                printf("- System Programming (OS Development)\n");
                printf("- Embedded Systems (Microcontrollers)\n");
                printf("- Game Development\n");
                printf("- Compilers and Interpreters\n");
                printf("- Database and Network Programming\n\n\n");
                
                break;
            case 3:{
			
            	int arraychoice;
                printf("Array and its Methods :\n");
                printf("1.One Dimension Array\n");
                printf("2.Two Dimension Array\n");
                printf("Enter Your Choice :");
                scanf("%d",&arraychoice);
                if(arraychoice==1){
                	printf("Addition of One dimension Array elements :\n");
                	int n,i,sum=0;
                	printf("Enter n : ");
                	scanf("%d",&n);
                	int array_1[n];                	                                                
                    for (i = 0; i < n; i++) {
                        printf("Enter array_1[%d]: ", i);
                        scanf("%d", &array_1[i]);
                        sum += array_1[i]; 
                    }
                    
                    printf("You entered: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", array_1[i]);
                    }
                    printf("\nSum = %d\n", sum);

				
                }
				else if(arraychoice==2){
					int row, col, r, c;
                    printf("Enter number of rows: ");
                    scanf("%d", &row);
                    printf("Enter number of columns: ");
                    scanf("%d", &col);

                    int a[row][col], b[row][col], sum[row][col];

                    printf("Enter elements of Matrix A (%dx%d):\n", row, col);
                    for (r = 0; r < row; r++) {
                        for (c = 0; c < col; c++) {
                            printf("A[%d][%d]: ", r, c);
                            scanf("%d", &a[r][c]);
                        }
                    }

                    printf("Enter elements of Matrix B (%dx%d):\n", row, col);
                    for (r = 0; r < row; r++) {
                        for (c = 0; c < col; c++) {
                            printf("B[%d][%d]: ", r, c);
                            scanf("%d", &b[r][c]);
                        }
                    }

                    for (r = 0; r < row; r++) {
                        for (c = 0; c < col; c++) {
                            sum[r][c] = a[r][c] + b[r][c];
                        }
                    }

                    printf("Matrix A:\n");
                    for (r = 0; r < row; r++) {
                        for (c = 0; c < col; c++) {
                            printf("%d ", a[r][c]);
                        }
                        printf("\n");
                    }

                    printf("Matrix B:\n");
                    for (r = 0; r < row; r++) {
                        for (c = 0; c < col; c++) {
                            printf("%d ", b[r][c]);
                        }
                        printf("\n");
                    }

                    printf("Sum of Matrix A + B:\n");
                    for (r = 0; r < row; r++) {
                        for (c = 0; c < col; c++) {
                            printf("%d ", sum[r][c]);
                        }
                        printf("\n");
                    }
				}
				else{
					printf("Invalid Input");
				}
                break;
			}
            case 4:
                printf("String Methods:\n");

                char str1[50], str2[50], concat[100];

                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);

                printf("Length of first string = %lu\n", strlen(str1));
                printf("Length of second string = %lu\n", strlen(str2));

                strcpy(concat, str1);
                strcat(concat, str2);

                printf("After concatenation: %s\n", concat);

                if (strcmp(str1, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are different.\n");
				char rev1[100],rev2[100];
				strcpy(rev1,str1);
				strrev(rev1);
				printf("Reverse of First String : ");
				printf(rev1);
				printf("\n");
				strcpy(rev2,str2);
				strrev(rev2);
				printf("Reverse of Second String : ");
				printf(rev2);
				printf("\n");
				if(strcmp(str1,rev1)==0 && strcmp(str2,rev2)==0){
					printf("Both String are Palindrome .");
				}
				else if(strcmp(str1,rev1)==0 && strcmp(str2,rev2)!=0){
					printf("First String is Palindrome .");
				}
				else if(strcmp(str1,rev1)!=0 && strcmp(str2,rev2)==0){
					printf("Second String is Palindrome .");
				}
				else{
					printf("Both String are Not Palindrome .");
				}
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}


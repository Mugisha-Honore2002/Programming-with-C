#include <stdio.h>

int main() {
    
    // Declare variables to store the user's input and calculations
    int freeGB, fileMB;
    int freeStorageMB, maxFiles, remainingMB;

    printf("\n \n    File Count Estimator \n");
    printf("----------------------------\n \n \n");

    // Ask the user to enter the available storage in GB
    printf("Enter free storage (GB): ");
    scanf("%d", &freeGB);

    // Ask the user to enter the size of one file in MB
    printf("Enter file size (MB): ");
    scanf("%d", &fileMB);

    // Check if the file size is greater than 0
    // A file cannot have a size of 0 or a negative size
    if (fileMB <= 0) {
        printf("Error: File size must be greater than 0.\n");
        return 1;
    }

    // Convert free storage from GB to MB
    // 1 GB = 1024 MB
    freeStorageMB = freeGB * 1024;

    // Calculate the maximum number of files that can fit
    // Integer division is used, so only complete files are counted
    maxFiles = freeStorageMB / fileMB;

    // Calculate the remaining storage space
    // The % operator gives the remainder after division
    remainingMB = freeStorageMB - fileMB;

    // Display the results
    // \t is used to align the output in columns
    printf("\n    Storage Information\n");
    printf("----------------------------\n");

    printf("Free Storage (GB)\t%d GB\n", freeGB);
    printf("Free Storage (MB)\t%d MB\n", freeStorageMB);
    printf("File Size (MB)\t\t%d MB\n", fileMB);
    printf("Maximum Files\t\t%d files\n", maxFiles);
    printf("Remaining Space\t\t%d MB\n", remainingMB);

    return 0;
}
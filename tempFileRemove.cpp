#include <stdio.h>
#include <stdlib.h>
#include <io.h>

int main() {
    const char *filePath1 = "c:\\windows\\Temp";
    const char *filePath2 = "c:\\Users\\vinay yadav\\AppData\\Local\\Temp";

    int found = 0;

    if (_access(filePath1, 0) == 0) {
        system("del /f /q \"c:\\windows\\Temp\\*\"");
        found = 1;
    }

    if (_access(filePath2, 0) == 0) {
        system("del /f /q \"c:\\Users\\vinay yadav\\AppData\\Local\\Temp\\*\"");
        found = 1;
    }

    if (found) {
        printf("Temp file delete Successfully\n");
    } else {
        printf("file(s) not exist\n");
    }

    system("pause");  // Wait for key press
    return 0;
}

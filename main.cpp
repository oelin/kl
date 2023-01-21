#include <winuser.h>
#include <stdio.h>


void main() {

    short ks;
    short prev[256];

    for (BYTE key=0; ; key++) {

        ks = GetKeyState(key);

        if (ks != prev[key]) {
            prev[key] = ks;

            if (ks & 0x1000) {
                printf("%c\n", (char) key);
            }
        }
    }
}

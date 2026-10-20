#include <stdio.h>
#include <stdlib.h>

int elementos[10] = {};
int topo = -1;

int isFULL() {
    return topo >= 9;
}

int isEMPTY() {
    return topo < 0;
}

void push(int val) {
    if (!isFULL()) {
        topo++;
        elementos[topo] = val;
    }
}

void pop() {
    if (!isEMPTY()) {
        topo--;
    }
}

int top() {
    if (!isEMPTY()) {
        return elementos[topo];
    }
    return -1;
}

void listar() {
    for (int i = topo; i >= 0; i--) {
        printf("%d\n", elementos[i]);
    }
}

int main() {
    return 0;
}

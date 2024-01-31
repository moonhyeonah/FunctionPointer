int performOperation(int (*operation)(int, int), int x, int y) {
    return operation(x, y);
}


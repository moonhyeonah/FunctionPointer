int (*selectOperation(char op))(int, int) {
    switch (op) {
        case '+':
            return add;
        case '-':
            return subtract;
        default:
            return NULL;
    }
}


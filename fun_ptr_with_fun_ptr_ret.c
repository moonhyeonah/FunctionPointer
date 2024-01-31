void (*(*FunctionPointerReturningFunction)(void))(void);

typedef void (*FunctionPointer)(int);
typedef FunctionPointer (*FunctionPointerReturningFunction)(char);

void (*(*FunctionPointerReturningFunction)(char))(int);


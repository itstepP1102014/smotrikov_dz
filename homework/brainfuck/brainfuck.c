void push (int elem){
    stack[top] = elem;
    ++top;
}
int pop (){
    -- top;
    return stack[top];
}
int ontop(){
    return stack[top];
}


# include <stdio.h> // standard input output, 라이브러리 코드를 포함시켜라

void sayHello(void); // prototyping, function declaration

int main(void) { // main 함수는 단 하나만 있어야함
        
    int x = 1, y = 2; // 변수를 미리 선언한다는 의미: 메모리가 얼마나 필요한지 알려주는 행위, x, y, z 가 같은 자료형일 때만 한번에 나열해서 선언 가능
    int sum;
    
    sum = x + y;
    
    printf("\"The truth is... \nI am ironman.\"\n"); // \n: escape sequence
    // printf = print formatted
    
    printf("%i + %i = %i\n", x, y, sum); // d is decimal, i is integer
    sayHello(); // 함수 선언 먼저하고 콜 해야함. 즉 c 에서는 hoisting 안됨
    
    return 0; // 운영체제에게 이 함수가 끝난 다는 것을 알려주는 것
}

// 함수를 먼저 선언하고 나중에 정의할 수 있다: 함수의 선언과 정의를 분리할 수 있다.
// compile 후에 링커가 linking 과정에서 sayHello 의 정의된 부분을 찾아서 main 함수 안에서 호출된 sayHello 함수와 이어준다.
void sayHello(void) { // function definition
    printf("Hello World!\n");
}




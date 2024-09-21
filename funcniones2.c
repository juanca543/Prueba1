#include<stdio.h>


int MyFuncion(int x, int y){


    return x * y;


}

float MyFuncion2(float x, float y){


    return x / y;


}


void MyFuncion3(char names []){

        printf("\n%s",names);

}



int main(int argc, char const *argv[])
{
    int results [4];

    int result=0;
    float result2=0;

    result= MyFuncion(5, 10);

    result2= MyFuncion2(10,5);

    MyFuncion3("juan");
    MyFuncion3("carlos");
    

    printf("\n%i", result);
    printf("\n%.2f", result2);


    for(int i =0; i < 4; i++){

        results[i]= MyFuncion2(12,i);

    }


    for(int j =0; j < 4; j++){

        printf("\n%d",results[j]);

    }

    return 0;
}

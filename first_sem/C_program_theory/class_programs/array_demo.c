//pgm to store and display 5 sub marks
#include<stdio.h>
int main(){
    int mymarks[5];
    int sub_marks[5];  //declares an array 'sub_marks' with size 5 of 'int' type
    //storing data/array initialization-array_name[index]=data/value;
    sub_marks[0]=80;  //it stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88; //static array initialization
    printf("first sub mark:%d\n",sub_marks[0]); // will fetch first array element from 'sub_marks'
    printf("second sub mark:%d\n",sub_marks[1]);
    printf("third sub mark:%d\n",sub_marks[2]);
    printf("fourth sub mark:%d\n",sub_marks[3]);
    printf("fifth sub mark:%d\n",sub_marks[4]);
    //dynamic initialization of mymarks
    for (int i=0;i<5;i++){
    printf("ENTER  SUB %d MARK:",i+1);    
    scanf("%d",&mymarks[i]);  //stored in first location
    }
    printf("my sub1 mark:%d\n",mymarks[0]);
    printf("my sub2 mark:%d\n",mymarks[1]);
    printf("my sub3 mark:%d\n",mymarks[2]);
    printf("my sub4 mark:%d\n",mymarks[3]);
    printf("my sub5 mark:%d\n",mymarks[4]);

}
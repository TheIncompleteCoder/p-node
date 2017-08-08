#include<stdio.h>
#define chunk_size 3
typedef struct node{
  int array[chunk_size];
  int min,max,counter=0;
  struct node *pointerToNext;
}p_node;
 
// for inseting a new node
int 
insert(p_node**,int);

//for updation in new node
int 
update(p_node**,int);

//remove a node :return 0|1
int 
remove(p_node**,int);

// driver program
int 
main(int argc,char *argv[]){
 p_node *start=NULL;
 insert(*p_node,5);
 insert(*p_node,45);
 insert(*p_node,98);
 insert(*p_node,3);
  
  return 0;
}

int 
insert(p_node**,int){
p_node *temp1,*temp2;
//*temp1 = (p_node*)malloc(sizeof(p_node));
//temp1->array[] = data;


}



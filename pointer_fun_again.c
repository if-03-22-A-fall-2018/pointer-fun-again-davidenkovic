#include <stdio.h>
#include <string.h>

/*--------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 *-------------------------------------------------------------------------
 * Exercise Number: 5
 * Title:			<pointer_fun_again>
 * Author:		<Ignjatovic David>
 * -------------------------------------------------------------------------
 * Description:
 * < The same Pointer fun that we have already had done just with arrays.>
 * < More complicated for me >
 * -------------------------------------------------------------------------
*/
struct PlayStruct{
  int int_value;
  double double_value;
  char a_string[64];
};
void print_struct(struct PlayStruct ps,struct PlayStruct *pps);
void change_struct(struct PlayStruct ps,struct PlayStruct *pps);
void print_string(char string_to_print[]);
void change_string(char string1[],char* p_string);
int main(int argc, char const *argv[]) {
struct PlayStruct play_struct={1,2.5,"String"};
   struct PlayStruct *play_struct_pointer=&play_struct;
   print_struct(play_struct,play_struct_pointer);
   change_struct(play_struct,play_struct_pointer);
   print_struct(play_struct,play_struct_pointer);
   /*< ps is not changed because pps has the same adress like ps, so pps changes affects both of them >*/
   return 0;
 }
void print_struct(struct PlayStruct ps,struct PlayStruct *pps)
 {
   printf("Values of struct ps: <%d> <%lf> <%s> \n",ps.int_value,ps.double_value,ps.a_string);
   printf("Values of struct pps: <%d> <%lf> <%s> \n",pps->int_value,pps->double_value,pps->a_string);
   printf("\n");
 }
void change_struct(struct PlayStruct ps,struct PlayStruct *pps)
{
  ps.int_value=8;
  ps.double_value=3.2;
  ps.a_string[0]='c';
  ps.a_string[1]='h';
  ps.a_string[2]='a';
  ps.a_string[3]='r';
  ps.a_string[4]='\0';
  pps-> int_value=23;
  pps->double_value=24.8;
  pps->a_string[0]='2';
  pps->a_string[1]='_';
  pps->a_string[2]='c';
  pps->a_string[3]='h';
  pps->a_string[4]='a';
  pps->a_string[5]='r';
  pps->a_string[6]='\0';
  ps.int_value=2;
  ps.double_value=3.5;
  ps.a_string[0]='c';
  ps.a_string[1]='h';
  ps.a_string[2]='a';
  ps.a_string[3]='r';
  ps.a_string[4]='\0';
  pps-> int_value=23;
  pps->double_value=24.8;
  pps->a_string[0]='2';
  pps->a_string[1]='_';
  pps->a_string[2]='c';
  pps->a_string[3]='h';
  pps->a_string[4]='a';
  pps->a_string[5]='r';
  pps->a_string[6]='\0';
}
 void print_string(char string_to_print[]){
   printf("%s\n",string_to_print);
 }

 void change_string(char string1[],char* p_string){
   string1[2]='\0';
   p_string[1]='\0';
}

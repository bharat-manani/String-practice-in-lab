//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char firstName[20];
//	char lastname[10];
//printf("Enter first name: ");
//scanf("%s",firstName);
//
//printf("Enter last name: ");
//scanf("%s",lastname);
//strcat(firstName," " );
//strcat(firstName,lastname);
//
//printf("%s ",firstName);
//
//
//
//return 0;	
//	
//}





//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char firstName[20];
//	char lastname[10];
//printf("Enter first name: ");
//scanf("%s",firstName);
//
//printf("Enter last name: ");
//scanf("%s",lastname);
//strcat(firstName," " );
//strncat(firstName,lastname,4);
//strncat(firstName,lastname,6);
//printf("%s ",firstName);
//
//
//
//return 0;	
//	
//}


//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char firstName[20];
//	char lastname[10];
//printf("Enter first name: ");
//scanf("%s",firstName);
//
//printf("Enter last name: ");
//scanf("%s",lastname);
//strcpy(firstName,lastname);
//printf("%s",firstName);
//
//
//return 0;	
//	
//}



//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char firstName[20];
//	char lastname[10];
//printf("Enter first name: ");
//scanf("%s",firstName);
//
//printf("Enter last name: ");
//scanf("%s",lastname);
//strcpy(firstName,lastname);
//printf("%s",firstName);
//
//
//return 0;	
//	
//}




//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char firstName[20];
//	char lastname[10];
//printf("Enter first name: ");
//scanf("%s",firstName);
//
//printf("Enter last name: ");
//scanf("%s",lastname);
//strncpy(firstName,lastname,4);
//strncpy(firstName,lastname,6);
//printf("%s",firstName);
//
//
//return 0;	
//	
//}










//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char str1[20]="helloguyzthisisme";
//	char str2[10]="hiizzah!";
//
//strncpy(str1,str2,7);
//
////strncpy(firstName,lastname,6);
//printf("%s",str1);
//
//
//return 0;	
//	
//}



//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str1[] = "Bharat";
//    char str2[] = "bharat";
//   
//   
//int compare=strcmp(str1, str2);
//   
//    printf(" %d",  compare);
//
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

int main() {
	int i;
char word[4][10] = {"APPLE","ORANGE","KIWI","GRAPES"};
printf("example 01: Array of words \n");

for(i=0; i<4; i++){
	printf("%s \n",word[i]);
	printf("Length is: %lu \n",strlen(word[i]));
}
}











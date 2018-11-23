#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

struct Date {
	int day;
	int month;
	int year;
};
struct Date d;


 struct StaffInfo {
	char staffID[20], staffD[20], staffName[30];
	struct Date d;
	char qualifications[30];
};
 struct StaffInfo s;

void main() {
	FILE*fptr;

	fptr = fopen("staffInfo.txt", "w");

	while (fptr == NULL) {
		printf("Error!");
		exit(-1);
	};
	   
	printf("Enter Staff ID:");
	scanf("%[^\n]", &s.staffID);
	rewind(stdin);
	fprintf(fptr,"%s|", s.staffID);

	printf("Enter Staff designation:");
	scanf("%[^\n]", &s.staffD);
	rewind(stdin);
	fprintf(fptr, "%s|", s.staffD);

	printf("Enter Staff Name:");
	scanf("%[^\n]", &s.staffName);
	rewind(stdin);
	fprintf(fptr, "%s|", s.staffName);

	printf("Enter Day employed:");
	scanf("%d", &s.d.day);
	rewind(stdin);
	fprintf(fptr, "%d/", s.d.day);

	printf("Enter Month Employed:");
	scanf("%d", &s.d.month);
	rewind(stdin);
	fprintf(fptr, "%d/", s.d.month);

	printf("Enter Year Employed:");
	scanf("%d", &s.d.year);
	rewind(stdin);
	fprintf(fptr, "%d|", s.d.year);

	printf("Enter Staff Qualifications:");
	scanf("%[^\n]", &s.qualifications);
	rewind(stdin);
	fprintf(fptr, "%s|", s.qualifications);

	fclose(fptr);
	system("pause");

}
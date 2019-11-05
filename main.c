#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>

char* get_date_and_time_1_svc()
{
	static char  result;
	char* current_time_string;
	time_t current_time;

	/*
	 * insert server code here
	 */

	current_time = time(NULL);
	if (current_time == ((time_t)-1)) {
		printf("Failure to obtain teh current time.\n");
		exit(EXIT_FAILURE);
	}
	current_time_string = ctime(&current_time);
	if (current_time_string == NULL) {
		printf("Failure to convert to current time.\n");
		exit(EXIT_FAILURE);
	}

	printf("\nSending current time: %s", current_time_string);

	return current_time_string;
}

char *
list_of_files_current_folder_1_svc()
{
	static char  result;
	char* list_of_files;
	char build_list[1000];

	/*
	 * insert server code here
	 */

	    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
			char* file = dir->d_name;
			char* space = " ";
            strcat(build_list, file);
			strcat(build_list, space);
        }
        closedir(d);
    }

	list_of_files = build_list;

	printf("\nSending list of files: %s", list_of_files);

	return list_of_files;
}


int main() {
    char* current_date = get_date_and_time_1_svc();
    printf("\nCurrent date is: %s", current_date);
	char* files_list = list_of_files_current_folder_1_svc();
	printf("\nThe list of files in current folder is: \n%s", files_list);
}
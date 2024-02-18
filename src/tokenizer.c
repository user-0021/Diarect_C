#include "tokenizer.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "const_data.h"

uint8_t checkExtention(char* extention_name);

token_list * tokenize_file(char * file){
	char* pos = strrchr(file,'.');
	
	if(pos == NULL || checkExtention(pos+1)){
		printf("please use avaible extention.\n");
		exit(1);
	}
}

uint8_t checkExtention(char* extention_name){

	uint8_t i;
	uint8_t array_size = sizeof(file_extensions)/sizeof(file_extensions[0]);
	for(i = 0;i < array_size;i++){
		if(strcmp(file_extensions[i],extention_name) == 0)
			return 0;
	}
	
	return 1;
}
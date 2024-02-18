#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "const_data.h"
#include "tokenizer.h"

int main(int argc,char ** argv){
	//バージョン表示
	if(argc == 1 || strcmp(argv[1],"-v") == 0 || strcmp(argv[1],"-V") == 0){
		printf("%s\n",verseion);
		exit(0);
	}
	
	token_list *tokens = tokenize_file(argv[1]);

	return 0;
}
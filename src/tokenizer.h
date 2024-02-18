/*
 * プログラムを解析するためにトークンリストに変換します
*/

#pragma once

typedef struct{
	struct token_list * next;
}token_list;

token_list * tokenize_file(char * file);
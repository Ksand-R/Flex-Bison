#include <stdio.h>
#include <stdlib.h>


extern "C" int yyparse(void);
extern "C" FILE *yyin;
//int main() {
//	yyin = stdin;
//	do {
//		int err = yyparse();
//		printf("###### %d ########\n", err);
//	} while (!feof(yyin));
// 
//	return 0;
//}
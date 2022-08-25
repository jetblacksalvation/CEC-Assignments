#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//basic fish struct 
/*
	req-
	1. takes in a string for fish type
	2. size of fish
	3. color of fish
	4. salt or freshwater


*/
struct color {
	size_t r;
	size_t g;
	size_t b;

}f_color[] = {//5 lines
	20,20,20,
	30,30,30,
	40,40,40,
	50,50,50,
	60,60,60

};
struct fish {
	const char* str;//when using [] vs *, [] is modiable, * is not
	size_t size;//so that you can't go under 0
	struct color* fish_color;
	bool fresh;// fale is salt water, true is fresh water 

}population[] = {
	"trout\0", 10, &f_color[0], false,
	"n_trout\0", 5, &f_color[1], false,
	"trout\0", 3, &f_color[2], true,
	"trout\0", 7, &f_color[3], true,
	"n_trout\0", 12,&f_color[4], false
	/*
	expected ouput
	-prints out all data of fish stuff if it's a trout, doesn't otherwise 
	
	*/
};
// inovke/ instantiate 5 of these dudes 
void print(struct fish* f) {
	printf( f->str);
	printf("\n");
	printf(" size of %u\n", f->size);
	printf("r =%i g = %i b = %i\n", f->fish_color->r, f->fish_color->g, f->fish_color->b);
	if (f->fresh == false) {
		printf("and is not a fresh water fish\n");
	}
	else {
		printf("and is a fresh water fish\n");
	}
}



int main() {
	for (int x = 0; x < 5; x++) {
		if (population[x].str == "trout\0") {
			print(&population[x]);
		}
	}
}


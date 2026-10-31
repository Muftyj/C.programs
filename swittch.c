#include<stdio.h>

int main() {
	
	int occupancy[3][5][10];
	int b;
	int f;
	int r;
	int total_occupied = 0;
	int block_total = 0;
	srand(time(0));
	
	for(b = 0; b < 3; b++) {	
		for(f = 0; f < 5; f++) {
			for(r = 0; r < 10; r++){
				occupancy[b][f][r] = rand() % 2;
			}
		}
	}
	
	for(b = 0; b < 3; b++) {
		block_total = 0; 
		printf("Block %d: \n", b+1);
		for(f = 0; f < 5; f++) {
			for(r = 0; r < 10; r++) {
				printf("%d ", occupancy[b][f][r]);
				block_total = block_total + occupancy[b][f][r];
			}
			printf("\n");
		}
		printf("Total occupied in Block %d: %d out of 50\n\n", b+1, block_total);
		total_occupied = total_occupied + block_total;
    }
    
    printf("GRAND TOTAL occupied in all 3 blocks: %d out of 150\n", total_occupied);
    
    return 0;
    return 0;
}
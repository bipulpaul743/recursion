#include<stdio.h>
// #include<math.h>
int stepsCount = 0;
void towerOFHanoi(int n, char source, char helper, char destination) {
    if (n==1) {
        stepsCount++;
        printf("Move disk 1 from %c to %c\n",source, destination);
        return;
    }
    // Move (n-1) disks from source to helper using destination
    towerOFHanoi(n-1, source, destination, helper);

    stepsCount++;
    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n",n, source, destination);

    // Move (n-1) disks from helper to destination using source
    towerOFHanoi(n-1, helper, source, destination);
}

int main() {
    int n;
    printf("Enter the number of disk : ");
    scanf("%d",&n);
    towerOFHanoi(n, 'A', 'B', 'C');
    // stepsCount = (pow(2, n)-1);
    printf("Total number of steps = %d",stepsCount);

    return 0;
}
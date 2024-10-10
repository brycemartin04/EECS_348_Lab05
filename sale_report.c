#include <stdio.h>

void print_sales_report(float arr[]){       //Defines the sales report function
    printf("\nMonthly Sales Report for 2024:\n\n");       
    printf("Month       Sales\n");
    printf("January     %.2f\n",arr[0]);
    printf("February    %.2f\n",arr[1]);         // prints the month along with the value for each month next to it
    printf("March       %.2f\n",arr[2]);
    printf("April       %.2f\n",arr[3]);
    printf("May         %.2f\n",arr[4]);
    printf("June        %.2f\n",arr[5]);
    printf("July        %.2f\n",arr[6]);
    printf("August      %.2f\n",arr[7]);
    printf("September   %.2f\n",arr[8]);
    printf("October     %.2f\n",arr[9]);
    printf("November    %.2f\n",arr[10]);
    printf("December    %.2f\n\n",arr[11]);
    
}

void print_sales_summary(float arr[]){     //function to print the sales summary
float min = arr[0];    //initializes the minimum
float max = arr[0];  //initializes the max
float sum = 0;     //initializes the sum for average calc
int min_month = 0; //holds the month for printing
int max_month = 0;  //holds the max month for printing
char* str_min;     //initializes a varia
char* str_max;
for (int i = 0; i < 12; i++)    //loops through every index in the array
    {
        if (arr[i]<min){     //if that is less than the current min,
          min = arr[i];     //reset the min to that
          min_month = i;    //put that index in the month holder
        }
        if (arr[i]>max){    //if that is more than cur max
          max = arr[i];    //reset max to that
          max_month = i;   //put that index into the max month holder
        }
        sum += arr[i];    //add that value to the sum
    }
    float average = sum/12;     //calculate teh average
    
    if (min_month == 0) str_min = "January";
    if (min_month == 1) str_min = "February";
    if (min_month == 2) str_min = "March";
    if (min_month == 3) str_min = "April";
    if (min_month == 4) str_min = "May";
    if (min_month == 5) str_min = "June";
    if (min_month == 6) str_min = "July";
    if (min_month == 7) str_min = "August";
    if (min_month == 8) str_min = "September";
    if (min_month == 9) str_min = "October";
    if (min_month == 10) str_min = "November";
    if (min_month == 11) str_min = "December";
    if (max_month == 0) str_max = "January";      //converts index into a month
    if (max_month == 1) str_max = "February";
    if (max_month == 2) str_max = "March";
    if (max_month == 3) str_max = "April";
    if (max_month == 4) str_max = "May";
    if (max_month == 5) str_max = "June";
    if (max_month == 6) str_max = "July";
    if (max_month == 7) str_max = "August";
    if (max_month == 8) str_max = "September";
    if (max_month == 9) str_max = "October";
    if (max_month == 10) str_max = "November";
    if (max_month == 11) str_max = "December";
    





  printf("Sales Summary Report:\n\n");
  printf("Minimum sales:  %.2f (%s)\n", min,str_min);      //prints the minimum,max,and average
  printf("Maximum sales:  %.2f (%s)\n", max,str_max);\
  printf("Average sales:  %.2f\n\n", average);


}

void print_moving_average(float arr[]){   //function to print the moving average
  float sum = 0;    //Initialize a sum
  float average = 0;   //initalize an aveage
  printf("Six-Month moving average report:\n\n");
  
  for (int i = 0; i < 6; i++)     //loop through the first 6 indexes
    {
        sum += arr[i];    //add each value to sum
    }
    average = sum/6;   //divide by 6 to get average

    printf("January-June        %.2f\n",average);
    sum = 0;
    average = 0;
    for (int i = 1; i < 7; i++)  //loop through index 1-7
    {
        sum += arr[i];   //add each value to sum
    }
     average = sum/6;   //divide by 6 to get average

    printf("February-July       %.2f\n",average);
    sum = 0;
    average = 0;
    for (int i = 2; i < 8; i++)   //loop through index 2-8
    {
        sum += arr[i];    //add each value to sum
    }
    average = sum/6;  //divide by 6 to get average

    printf("March-August        %.2f\n",average);
    sum = 0;
    average = 0;
    for (int i = 3; i < 9; i++)  //loop through index 3-9
    {
        sum += arr[i];    //add each value to sum
    }
    average = sum/6;   //divide by 6 to get average

    printf("April-September     %.2f\n",average);
    sum = 0;
    average = 0;
    for (int i = 4; i < 10; i++)   //loop through index 4-10
    {
        sum += arr[i];     //add each value to sum
    }
    average = sum/6;   //divide by 6 to get average

    printf("May-October         %.2f\n",average);
    sum = 0;
    average = 0;
    for (int i = 5; i < 11; i++)   //loop through index 5-11
    {
        sum += arr[i];    //add each value to sum
    }
     average = sum/6;   //divide by 6 to get average

    printf("June-November       %.2f\n",average);
    sum = 0;
    average = 0;
    for (int i = 06; i < 12; i++)    //loop through index 6-12
    {
        sum += arr[i];     //add each value to sum
    }
   average = sum/6;   //divide by 6 to get average

    printf("July-December       %.2f\n\n",average);
    sum = 0;





}

void print_sort(float arr[]){
  float max = 0;   //initializes a current max
  int max_month = 0;   //initializes a month placeholder
  char* str_max;
  printf("Sales Report (Highest to Lowest)\n\n");
   for (int i = 0; i < 12; i++)   //loops through the whole list
    {
        if (arr[i]> max){
            max = arr[i];    //finds the highest value
            max_month =i;    //holds the index of that highest value
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";     //finds the month that coorelates with the index
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December       ";
    printf("Month       Sales\n");
    printf("%s%.2f\n",str_max,max);  
    arr[max_month]=0;   
    max = 0;
    max_month=0;   //resets max to 0  
                                     //does this 12 times to account for every month.
    for (int i = 0; i < 12; i++)    
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November       ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
   if (max_month == 0) str_max = "January         ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i]> max){
            max = arr[i];
            max_month =i;
        }
    }
    if (max_month == 0) str_max = "January        ";
    if (max_month == 1) str_max = "February       ";
    if (max_month == 2) str_max = "March          ";
    if (max_month == 3) str_max = "April          ";
    if (max_month == 4) str_max = "May            ";
    if (max_month == 5) str_max = "June           ";
    if (max_month == 6) str_max = "July           ";
    if (max_month == 7) str_max = "August         ";
    if (max_month == 8) str_max = "September      ";
    if (max_month == 9) str_max = "October        ";
    if (max_month == 10) str_max = "November      ";
    if (max_month == 11) str_max = "December      ";
    printf("%s%.2f\n",str_max,max);
    arr[max_month]=0;
    max = 0;
    max_month=0;
    

}


void read_file(){   //function to read in the file
  FILE *fp;      //initalizes a file pointer
 
fp = fopen("sample.txt", "r");    //sets that pointer to the file
float num=0;  
float values[12]={};    //initailizes values to read in the file
int month = 0;

while (fscanf(fp, "%f", &num) ==1) {
    values[month] = num;                  //reads in the file line by line and adds it to an array
    month++;
    }

fclose(fp);      //closes the file

print_sales_report(values);
print_sales_summary (values);
print_moving_average(values);      //calls the functions needed to do the organizing
print_sort(values);


}

int main(){ 
 read_file();      //calls the read file
 return 0;
}

//gcc sale_report.c -o sales
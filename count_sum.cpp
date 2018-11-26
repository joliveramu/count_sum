
#include <iostream>

using namespace std;

static void count_sum(int array[], int length);

int main()
{
   
    int arr[]={1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15};
   
    count_sum(arr, 15);
   
    return 0;


}

static void count_sum(int array[],int length)
{
    int negative_sum=0;
    int positive_count=0;
    
    for(int i=0; i < length; i++)
    {
        if(array[i] > 0)
        {
            positive_count = positive_count + 1;
        }else{
            negative_sum = negative_sum + array[i];
        }
    }
    cout << positive_count << "," << negative_sum;
    
}
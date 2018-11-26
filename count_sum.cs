using System;
					
public class Program
{
	public static void Main()
	{
		int[] arr = {1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15};
        count_sum(arr);
	}
	
	public static void count_sum(int[] array)
     {
         int negative_sum=0;
         int positive_count=0;
         
         for(int i=0; i < array.Length; i++)
         {
             if(array[i] > 0)
             {
                 positive_count = positive_count + 1;
             }else{
                 negative_sum = negative_sum + array[i];
             }
         }
         Console.WriteLine("["+ positive_count + "," + negative_sum + "]");
     }
}
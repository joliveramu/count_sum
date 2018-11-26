<script>
function countSum(arr)
{

	var count=0;
	var negative_sum=0;
	
	for(var i=0; i < arr.length; i++)
	{	

		if(arr[i] < 0)
	    {
	    	negative_sum = negative_sum + arr[i];
	    }else    
	    {
	    	count=count+1;
	    }
	}
console.log([count,negative_sum])	
}

countSum([1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15]);

</script>
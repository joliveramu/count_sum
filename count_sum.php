<?php 
function count_sum($arr)
{
    $negative_sum = 0;
    $positive_count = 0;
    
    for($i = 0; $i < count($arr); $i++)
    {
        if($arr[$i] > 0)
        {
            $positive_count = $positive_count + 1;
        }else{
            $negative_sum = $negative_sum + $arr[$i];
        }    
    }
    
    echo "[".$positive_count.",".$negative_sum."]";
}

count_sum(array(1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15));
?>
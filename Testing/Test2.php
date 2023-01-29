<?php
$name = "HP";
echo "Hello $name \n";
function Test1(){
    global $name;
    echo "Hello world \n";
    echo "Hello $name \n";

}
Test1();
?>
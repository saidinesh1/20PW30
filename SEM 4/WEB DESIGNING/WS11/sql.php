<?php
$servername="10.1.67.156";
$username="msc20pw30";
$pass="msc20pw";
$db="msc20pw30";
$conn=mysqli_connect($servername,$username,$pass,$db);
if(!$conn){
	die("Not connected" . mysqli_connect_error());
}
else {
	echo "Connected";
	}
$q="CREATE TABLE student(name VARCHAR(20) PRIMARY KEY,ROLL_NO INT(6) NOT NULL)";

if(mysqli_query($conn,$q))
{
	echo "Table created";
}else{
	echo "Table not created";
}
?>
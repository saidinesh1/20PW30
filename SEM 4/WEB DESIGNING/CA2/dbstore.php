<?php
session_start();
$details=array($_POST['cname'],$_POST['phnno'],$_POST['address']);
array_push($_SESSION['cdetails'],$details);
header("Location:/20PW/20PW30/SEM 4/WEB DESIGNING/CA2/design.php");
$servername="10.1.67.156";
$username="msc20pw30";
$pass="msc20pw";
$db="msc20pw30";
$conn=mysqli_connect($servername,$username,$pass,$db);
$create="CREATE TABLE cdetails(name VARCHAR(20) PRIMARY KEY,phnno varchar(20) NOT NULL,address varchar(40) NOT NULL);";
mysqli_query($conn,$create);
$q="insert into cdetails values('$details[0]','$details[1]','$details[2]')";
mysqli_query($conn,$q);
?>
<?php
session_start();
$item=array($_POST['name'],$_POST['price'],$_POST['qty']);
array_push($_SESSION['cart'],$item);
header("Location:/20PW/20PW30/SEM 4/WEB DESIGNING/CA2/design.php");
?>
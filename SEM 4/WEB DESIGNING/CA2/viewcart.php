<?php   
    session_start();
if(!isset($_SESSION['cart'])){
    $_SESSION['cart']=array();
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table>
        <tr>
            <th>PIZZA:</th>
            <th>PRICE:</th>
            <th>QUANTITY:</th>
            <th>TOTAL</th>
        </tr>
        <?php
            foreach($_SESSION['cart'] as $item){
                echo '<tr>';
                echo '<td>'.$item[0].'</td>';
                echo '<td>'.$item[1].'</td>';
                echo '<td>'.$item[2].'</td>';
                echo '<td>'.$item[2]*$item[1].'</td>';
                echo '<tr>';
            }
        ?>
    </table>
</body>
</html>
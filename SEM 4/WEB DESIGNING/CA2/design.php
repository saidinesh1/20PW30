<?php
session_start();
if(!isset($_SESSION['cart'])){
    $_SESSION['cart']=array();
    $_SESSION['cdetails']=array();
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="design.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">

</head>
<body>
        
    <h3 style="text-align:center;">PIZZA ORDER FORM</h3><br>
    <p style="text-align:center;">Welcome to our pizzeria! You can order the tastiest pizzas at amazing prices. 
        <br>We only use the best ingredients and dough made in store to prepare fresh and <br>mouth-watering pizzas. Order now. </p>
        <div class="container">
            <div class="pizza">
                <img src="pizza1.jpeg" alt="" height="200px" width="200px">
                <p>Pizza1 Rs.400</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza1">
                    <input type="hidden" name="price" value="400">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
            <div class="pizza">
                <img src="pizza2.jpeg" alt="" height="200px" width="200px">
                <p>Pizza2 Rs.500</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza2">
                    <input type="hidden" name="price" value="500">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
            <div class="pizza">
                <img src="pizza3.jpeg" alt="" height="200px" width="200px">
                <p>Pizza3 Rs.600</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza3">
                    <input type="hidden" name="price" value="600">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
            <div class="pizza">
                <img src="pizza4.jpeg" alt="" height="200px" width="200px">
                <p>Pizza4 Rs.550</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza4">
                    <input type="hidden" name="price" value="550">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
            <div class="pizza">
                <img src="pizza5.jpeg" alt="" height="200px" width="200px">
                <p>Pizza5 Rs.350</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza5">
                    <input type="hidden" name="price" value="350">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
            <div class="pizza">
                <img src="pizza6.jpeg" alt="" height="200px" width="200px">
                <p>Pizza6 Rs.290</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza6">
                    <input type="hidden" name="price" value="290">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
            <div class="pizza">
                <img src="pizza6.jpeg" alt="" height="200px" width="200px">
                <p>Pizza8 Rs.340</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza6">
                    <input type="hidden" name="price" value="340">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
            <div class="pizza">
                <img src="pizza6.jpeg" alt="" height="200px" width="200px">
                <p>Pizza7 Rs.280</p>
                
                <form action="addtocart.php" method="POST">
                    <input type="hidden" name="name" value="pizza6">
                    <input type="hidden" name="price" value="280">
                    <input type="number" name="qty">
                    <input type="submit" value="addtocart">
                </form>
            </div>
           </div>
        <div class="submitform">
        <form action="viewcart.php">
            <input type="submit"   style="font-size:30px; padding:10px;" value="view cart">
        </form>
        <form action="deletecart.php" method="POST">
            <input type="submit"   style="font-size:30px; padding:10px;" value="delete cart">
        </form>
        </div>
        <div class="details">
            <form action="dbstore.php" method="POST">
                <table>
                <tr>
                    <td>NAME:</td>
                    <td><input type="text" name="cname" style="font-size:30px;"></td>
                </tr>
                <tr>
                    <td>PHN NUMBER:</td>
                    <td><input type="text" name="phnno" style="font-size:30px;"></td>
                </tr>
                <tr>
                    <td>ADDRESS:</td>
                    <td><input type="text" name="address" style="font-size:30px;"></td>
                </tr>
                <tr>
                    <td><input type="submit" value="submit" style="font-size:30px;"></td>
                </tr> 
            </form>
        </div>
        

</body>
</html>